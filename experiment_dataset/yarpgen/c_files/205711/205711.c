/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = var_7;
                arr_4 [i_1] [i_0] = (max((min(var_7, ((max(272843663, 268402688))))), (min(-629279142, 14605458818345235448))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_7 [i_2] [i_3])));
                    arr_11 [i_2] [i_2] [i_4] = var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_16 = (min(1865750207, 9223372036854775791));
                                var_17 -= ((!(((var_5 >> (((arr_5 [i_4 - 3]) - 175)))))));
                                var_18 = (((((((arr_3 [i_5] [i_2] [i_2]) % (arr_15 [i_6] [i_5] [i_4] [i_3] [i_2 - 1] [i_2 - 1]))) + 2147483647)) >> (((!(arr_13 [5] [i_3] [i_4] [i_4]))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, (arr_15 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3])));
                }
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
