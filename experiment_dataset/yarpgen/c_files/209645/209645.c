/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = var_1;
                    arr_8 [i_0] [6] [i_0] [i_0] &= (max(var_9, (arr_4 [1])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 = -217;

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            arr_15 [i_3] [i_4] &= (max((((var_3 + 216) ? ((((arr_6 [i_0]) ? 32767 : var_2))) : -7444)), ((18307910536991644985 + ((max((arr_3 [i_0] [i_3]), var_0)))))));
                            arr_16 [i_0] [i_1] [i_1] [i_1] [16] = ((((((((216 ? -52 : 12747))) ? (1160430336617664250 < 2727710574) : (max((arr_2 [i_2]), (arr_14 [i_0] [2] [i_3])))))) ? -217 : ((2755634662 ? 30 : (-1190916860 || 1160430336617664256)))));
                            var_14 = (max(((2646083169 << (-1160430336617664251 + 1160430336617664262))), (((min(643948292, (arr_2 [i_0])))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_15 ^= (arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5 - 1]);
                            var_16 = ((-(arr_18 [i_0] [i_1] [i_1] [13] [i_5 - 1])));
                            var_17 ^= (arr_9 [i_2] [i_5 - 1]);
                        }
                        arr_20 [i_0] [i_1] [i_3] [i_3] |= (arr_19 [i_3] [12] [i_1] [0] [i_1] [i_3] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_1] [i_1] = (((((var_0 ? (arr_24 [i_1]) : 17512))) ? var_4 : var_2));
                        var_18 = ((var_4 & (arr_19 [i_1] [i_2] [i_6 - 1] [i_6] [i_2] [i_6] [3])));
                        var_19 = -12750;
                    }
                }
            }
        }
    }

    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        var_20 ^= (arr_7 [i_7] [i_7 + 3]);
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_35 [i_10 - 4] [i_8] [13] = (arr_30 [i_8 + 3] [i_7 - 1]);
                        var_21 += var_8;
                        var_22 = 12749;
                    }
                }
            }
        }
        arr_36 [i_7] [10] = (3674121960 + -217);
        var_23 = (!var_11);
    }
    #pragma endscop
}
