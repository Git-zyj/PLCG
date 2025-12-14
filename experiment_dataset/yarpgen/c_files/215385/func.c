/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215385
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 + 1] [i_1 + 1] [i_2] [i_2] [i_4 + 1] = ((/* implicit */_Bool) (~((~(((unsigned int) 5756746008455833023LL))))));
                                arr_15 [i_0] [i_1] [4U] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) var_14);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (unsigned short)1008);
                    arr_17 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) + ((~((-(1697539968U)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_13);
    var_17 = ((/* implicit */short) (-2147483647 - 1));
}
