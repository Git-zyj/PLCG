/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((var_10 / var_10) ? (var_0 ^ var_2) : 255))), var_7));
    var_18 *= ((((((~var_5) ? ((min(var_11, var_13))) : (~var_2)))) ? ((-var_11 ? var_7 : 0)) : 50206));
    var_19 = (((min(var_3, (var_8 + var_0))) * (min((var_15 && var_8), var_8))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 += min((((!(2862394970 > var_11)))), (min((arr_1 [0]), (arr_1 [16]))));
                                var_21 = (min((!var_16), (min((arr_11 [i_0] [i_2] [i_4 + 1] [i_4 - 1] [i_4] [i_0]), (arr_4 [i_0 + 1] [i_4 - 1] [i_4 - 1])))));
                                var_22 ^= ((((50206 ? (1432572325 - 1) : (((-(arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1])))))) * 2862394970));
                                var_23 &= 41459;
                            }
                        }
                    }
                    var_24 ^= (~((((arr_5 [6] [i_1 - 1] [6]) != (arr_5 [i_0] [i_1] [12])))));
                }
            }
        }
    }
    #pragma endscop
}
