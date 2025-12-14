/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_12) ? (~-49) : (((!var_6) ? 48 : (!6337023665907781887)))));
    var_20 = (max(var_20, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = ((!(((+((max((arr_1 [i_0]), 238))))))));
                                var_22 = (arr_4 [4]);
                            }
                        }
                    }
                    var_23 = (max(var_23, ((((~(~15872))) & ((-1 & (arr_8 [i_0] [1] [i_0])))))));
                    var_24 = ((((max((!15812), 3971))) && 3971));
                    arr_12 [i_0] [i_2] = 238;
                    var_25 ^= (arr_4 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
