/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37572
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_1 [i_1])), (max((((/* implicit */unsigned long long int) ((var_7) >> (((var_6) + (100683710)))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (var_1)))))));
                arr_4 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) var_15)), ((-((((_Bool)0) ? (((/* implicit */int) var_11)) : (var_2)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) (signed char)113);
                                var_18 ^= ((/* implicit */int) ((_Bool) 5996836603033176982ULL));
                                var_19 -= ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-113)), ((unsigned char)5)));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~((+(((/* implicit */int) arr_10 [i_1] [i_1 - 1] [2ULL] [i_1 - 1])))))))));
                                var_21 -= ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((33554431U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)113))))))))));
}
