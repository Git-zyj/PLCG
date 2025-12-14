/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    var_20 = -var_8;
                    var_21 = (((((arr_3 [i_0]) > var_10)) || 12));
                    arr_11 [i_2] = (((min(983040, 16275)) << (15211 - 15181)));
                    var_22 = (max(var_22, -var_14));
                    var_23 = var_19;
                }
                arr_12 [i_0] [i_1] = ((((min((min((arr_6 [i_0] [i_1 - 3]), var_19)), var_6))) ? (((arr_6 [i_0] [i_1 + 1]) ? 4294967295 : var_1)) : var_1));
                var_24 = (min(((((var_11 * var_5) && var_5))), (((!56) ? (((!(arr_0 [i_0])))) : var_4))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_25 = (((arr_14 [i_3]) <= (((!(arr_14 [i_3]))))));
        var_26 = (((((arr_13 [i_3]) ? 200 : (~var_13))) != (((arr_14 [i_3]) ? (arr_14 [i_3]) : var_17))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_27 = -var_16;

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_28 = 2184384286;
                var_29 -= (((arr_16 [i_4]) == 274877644800));
                var_30 *= (((198 ? -1 : 4294967295)) != var_0);
                var_31 = (max(var_31, (((!(!1))))));
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_32 -= (min(0, 983040));
                        arr_32 [i_4] = (arr_29 [i_4] [12] [13] [i_9]);
                    }
                }
            }
        }
    }
    var_33 = (min(var_9, (((14 & 274877644789) * 9295))));
    var_34 = (min(((-(min(var_8, var_10)))), (((29571 ? 14 : -724348370)))));
    var_35 *= var_3;
    #pragma endscop
}
