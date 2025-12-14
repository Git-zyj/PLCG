/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211374
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
    var_18 = ((/* implicit */unsigned int) 2147483626);
    var_19 = ((/* implicit */int) (unsigned char)0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (unsigned char)242))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_9);
                                var_22 += ((/* implicit */int) (unsigned char)244);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        var_23 ^= ((/* implicit */signed char) (unsigned short)235);
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)11)) >> (((((/* implicit */int) (unsigned char)34)) - (3))))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) || (var_6))))));
}
