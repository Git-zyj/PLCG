/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (min(2046, (((!((!(arr_0 [i_0]))))))));
        arr_3 [4] [i_0] = -22;
        var_11 = (arr_1 [i_0] [i_0]);
    }
    var_12 = var_10;
    var_13 = (((((~(max(-9, var_9))))) ? (((-(!var_2)))) : 3574664297390043620));

    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = var_2;
        arr_7 [i_1] = (arr_5 [i_1]);
        var_15 = (((((((arr_4 [14]) == ((-(arr_6 [i_1]))))))) - (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_2] [4] = -17;
            arr_15 [i_2] [i_2] = (((arr_11 [i_3]) - (arr_11 [i_2])));
        }
        arr_16 [i_2] = 10;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_20 [7] = (((!0) - (arr_4 [i_4])));
        arr_21 [i_4] [13] = (arr_4 [i_4]);
        var_16 = (min(var_16, var_0));
        var_17 = ((((((arr_6 [12]) ? var_8 : (arr_10 [i_4])))) <= 13608469021995881034));
    }
    #pragma endscop
}
