/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = ((12663962541380072266 ? ((var_5 ? 12663962541380072288 : (arr_7 [i_0] [i_2 + 2] [i_1] [i_0]))) : ((max(-646879225, (min(var_6, var_6)))))));
                            var_14 = ((-120 + (((arr_7 [i_0] [i_2 + 2] [i_2] [i_3]) * (arr_7 [4] [i_2 + 1] [i_0] [i_3])))));
                            var_15 = (min(var_15, var_12));
                            var_16 = (min(var_16, ((((((12663962541380072290 ? (arr_8 [i_2 - 1] [i_1] [i_3] [8] [i_3 - 3] [i_2]) : (max(var_8, (arr_7 [i_0] [i_0] [i_0] [i_3])))))) ? (((((max(var_1, var_4))) && (!-1)))) : (arr_7 [i_0] [i_1] [i_2 + 2] [i_3]))))));
                            var_17 += (min((~var_5), (arr_8 [i_1] [i_2 + 2] [i_3] [i_3 - 4] [i_3] [i_3 - 4])));
                        }
                    }
                }
                arr_10 [2] [i_0] = (arr_3 [i_1]);
                arr_11 [i_0] [i_0] [8] = var_4;
                arr_12 [i_0] = min((arr_3 [i_0]), (max(var_6, (arr_6 [i_0] [3] [i_0]))));
            }
        }
    }
    var_18 = 12663962541380072268;
    var_19 = var_9;
    #pragma endscop
}
