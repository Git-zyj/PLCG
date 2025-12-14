/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229211
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) ((var_13) >= (var_3)))), ((+(((int) var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */int) arr_2 [i_0]);
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 562527862U)) && (((/* implicit */_Bool) 2147483647)))));
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 17; i_3 += 2) 
        {
            {
                arr_11 [15LL] [i_2] = ((((/* implicit */unsigned int) ((int) -1032381813))) + (((unsigned int) var_6)));
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    var_18 = ((/* implicit */_Bool) ((-1575994914) ^ (-764899097)));
                    arr_16 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2])) && (((/* implicit */_Bool) ((long long int) 2683280344U)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        for (int i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_25 [i_5] [i_5 + 1] [i_2] [i_5 - 1] [i_5 + 1] = ((/* implicit */long long int) arr_3 [(_Bool)1]);
                                var_19 = (-((-(-1334750752))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
