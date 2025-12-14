/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234109
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) 1938496286);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_2 - 2])))))))));
                                arr_13 [i_0] [i_2] [i_2] [i_3 - 1] [i_4] |= ((/* implicit */short) 2054112531);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((-3200557127509163290LL), (((/* implicit */long long int) arr_12 [i_1] [(short)3] [i_2 - 1] [(unsigned char)9] [(short)3]))))))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_12))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) var_9)) : (3330171093U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)143)), (2054112537)))) : (var_5))));
    var_18 |= ((/* implicit */int) 964796200U);
}
