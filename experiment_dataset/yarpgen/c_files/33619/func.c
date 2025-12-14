/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33619
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
    var_11 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [8LL] [12ULL] [i_1] [i_1] &= ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [(unsigned short)16] [i_0] [(short)7] [i_0] [i_2] = ((/* implicit */unsigned char) arr_0 [(short)3] [(short)0]);
                                arr_15 [i_4] [i_2] [i_2] [i_2] [i_0] = arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [4LL] [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
