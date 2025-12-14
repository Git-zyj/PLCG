/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_13));
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (!16);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_21 ^= (arr_1 [i_0]);
        var_22 = ((arr_0 [i_0]) && -var_17);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_23 = (min((((((arr_1 [i_1]) >= var_12)) ? ((203 ? 201 : (arr_5 [i_1]))) : (arr_5 [i_1]))), 0));
        arr_6 [i_1] = (min((((38925 ? -40 : 0))), (((((4224692867 ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? ((((arr_5 [i_1]) & (arr_0 [i_1])))) : 1))));
        arr_7 [i_1] [0] |= (min((arr_0 [i_1]), (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_24 = (arr_0 [i_1]);
                    arr_13 [7] [i_3] = -109;
                    var_25 = var_15;
                    var_26 -= ((1 ? -9115446642600128310 : 237));
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        var_27 = (min((arr_0 [i_4]), (min((arr_14 [i_4] [i_4 - 2]), (arr_14 [i_4] [i_4 - 2])))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_19 [i_4] [i_5] = 19998;
            var_28 = (((arr_0 [i_4 + 2]) ^ (arr_1 [i_4 + 2])));
            var_29 |= ((-(arr_16 [i_4 - 3] [i_4 + 1])));
        }
        var_30 -= (((((((arr_0 [i_4]) ^ (arr_1 [i_4 + 2]))))) ? (min(-35798, (arr_17 [i_4 + 1] [i_4 - 1]))) : ((26594 ? 52599 : 1))));
    }
    var_31 = 16061;
    #pragma endscop
}
