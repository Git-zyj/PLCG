/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_12 >= var_11) ^ (max(((((var_1 + 2147483647) >> (-7 + 11)))), (min(var_7, var_5))))));
    var_17 = ((var_4 >> ((((var_12 ? 10 : var_11)) / (((-1904401161 ? -1904401161 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (~1);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (128 + -9407);
                            arr_9 [4] [4] [i_2] [i_3 - 1] &= ((-(((4581 ? var_10 : 1627831389)))));
                        }
                    }
                }
                var_20 = (min(var_20, ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_5 : 2698)) * (arr_8 [i_0] [i_0] [i_1] [i_1]))))));
                var_21 = ((~((max((arr_7 [i_0] [i_0] [i_1] [i_0]), 220)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                arr_14 [i_4] [i_4] [i_5] = ((((max((119 > 2620766868), ((-58 ? -932305867352345357 : (arr_7 [i_4] [i_5 + 1] [i_5 + 1] [i_4])))))) ? ((((227 ? -99 : 1062732254)))) : (~var_11)));
                arr_15 [i_4] [i_4] = (arr_13 [i_4] [i_5]);
            }
        }
    }
    var_22 += var_3;
    #pragma endscop
}
