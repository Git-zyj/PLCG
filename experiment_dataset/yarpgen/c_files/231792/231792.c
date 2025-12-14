/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 8991765341051701456;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(255, ((43131 ? 32 : 64503))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (32749 | 29782)));
                                var_19 += ((((min((max((arr_5 [i_0] [i_1] [i_2]), 1422808470)), 10433))) ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) : ((((min(43141, 6623))) ? (((max(-32749, 927)))) : var_15))));
                                var_20 ^= ((((max((max(-1731394788, (arr_2 [i_1]))), ((min(28111, 64608)))))) && ((((!(arr_5 [i_0] [i_1] [i_3]))) || ((max(504403158265495552, var_8)))))));
                                var_21 = ((-(max(504403158265495554, ((max(271209888, 420679925)))))));
                                arr_13 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = (max((max((!var_2), (((arr_4 [i_1] [i_1]) ^ (arr_1 [i_0]))))), (max((arr_7 [i_2] [i_4] [i_2 + 1] [i_0]), (~104)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 -= var_7;
    var_23 = (min(1287710895, var_10));
    #pragma endscop
}
