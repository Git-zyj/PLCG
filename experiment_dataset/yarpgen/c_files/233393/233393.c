/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min(((3011164140 ? 3011164140 : var_2)), ((3011164125 ? var_1 : var_4)))), var_10));
    var_16 ^= 8629735458232894229;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((~var_6) ? (((!(arr_0 [i_0 + 2] [i_0 + 1])))) : (min((~4), (arr_6 [0] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (arr_6 [i_2] [i_0 - 1]);
                                var_19 = (max((((((((arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] [i_4]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 44038))) ? 18 : ((((arr_2 [i_2] [i_4]) != -15105)))))), (max(3011164140, (!1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 87;
    #pragma endscop
}
