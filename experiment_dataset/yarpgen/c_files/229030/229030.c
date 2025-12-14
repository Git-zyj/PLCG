/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = -var_7;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 ^= ((+((min((arr_0 [i_0]), var_18)))));
                                var_20 ^= var_8;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 = ((((((min(var_6, (arr_18 [i_1] [i_5])))) << (arr_1 [i_0] [i_0]))) - (((min((arr_20 [i_6] [i_1] [1] [i_6] [i_5]), 31221))))));
                            var_22 = (min(31221, ((var_7 >> (arr_4 [i_1] [i_0] [i_1])))));
                        }
                    }
                }
                var_23 = (max(var_23, -var_15));
                arr_23 [i_0] [i_0] [i_1] = var_8;
            }
        }
    }
    var_24 = ((var_9 && (55093 && 4128768)));
    var_25 = 55106;
    #pragma endscop
}
