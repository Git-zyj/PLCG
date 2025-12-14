/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((var_12 + (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (((-(arr_1 [i_0 - 3]))));
        var_18 = (((max(var_7, 139584991)) - ((max(-1, (var_17 / -160895559))))));
        arr_4 [i_0] = (((arr_1 [i_0 - 1]) > ((max(-1, var_13)))));
        var_19 = 1352998554536416689;
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_7 [i_1] [i_1]);
        arr_8 [i_1] [i_1] = (!11632084984732188415);
        arr_9 [i_1] = 1;
        arr_10 [i_1] = (((max(var_12, var_12)) % var_9));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (((arr_12 [i_2] [i_2]) >= var_11));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_16 [i_2] [i_2] = 66;
            arr_17 [i_2] [18] [i_2] = ((!(-32767 - 1)));
            arr_18 [i_3] = (!66);
        }
        var_21 = (arr_15 [i_2]);
        var_22 = (((arr_5 [i_2] [i_2]) ? var_14 : (arr_5 [i_2] [i_2])));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        arr_21 [i_4] = var_17;
        arr_22 [i_4] = (max(4155382307, -4));
    }
    var_23 = (((((var_17 ? (0 <= var_12) : 1))) ? -1 : var_8));
    #pragma endscop
}
