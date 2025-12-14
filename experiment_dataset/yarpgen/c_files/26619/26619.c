/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((max(((0 ? -9537 : -77)), (var_5 * 1)))) ? (min((var_5 / 242), (max(1030998944, var_3)))) : (arr_1 [i_0])));
        arr_4 [i_0] = (max(127, ((max(60195, 16065985691543714809)))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = -var_7;
        arr_8 [i_1] [i_1] = var_0;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = arr_6 [i_2 - 1];
        arr_14 [i_2] = var_3;
    }
    var_10 = var_3;

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            arr_21 [i_3] [i_3] [i_3] = ((-127 - 1) & var_8);
            arr_22 [i_3] = ((~((9221207356033040679 ^ (arr_18 [i_3])))));
        }
        arr_23 [8] [8] = ((-((0 ? (~25558) : ((var_6 ? var_9 : 1))))));

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_27 [8] [8] = (1322685835 <= -8);
            arr_28 [i_3] = var_4;
            arr_29 [i_3] = ((+(min(((((arr_24 [i_3] [i_5]) > var_5))), var_6))));
            arr_30 [4] = ((((((arr_25 [i_3] [i_3] [1]) ? (arr_25 [10] [i_5] [i_3]) : (arr_25 [i_3] [i_5] [i_5])))) ? (min(var_3, (arr_25 [i_3] [i_3] [i_3]))) : (arr_25 [i_3] [4] [i_5])));
        }
        arr_31 [10] [10] = ((((127 ? 8192 : var_8)) >= (((arr_1 [i_3]) ? (-127 - 1) : (arr_1 [i_3])))));
        arr_32 [8] |= 11;
    }
    #pragma endscop
}
