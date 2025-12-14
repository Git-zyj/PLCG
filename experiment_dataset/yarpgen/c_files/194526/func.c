/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194526
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)10347)))))))));
                                arr_11 [(unsigned short)22] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)19992))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)45543))))));
                arr_13 [i_1] = ((/* implicit */short) (+((+(4294967295U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (~((~(2557081488U)))));
}
