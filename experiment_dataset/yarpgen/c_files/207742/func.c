/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207742
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((_Bool) ((((/* implicit */_Bool) (unsigned char)83)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
    var_20 = ((/* implicit */unsigned long long int) ((var_1) ? (((unsigned int) (short)-32765)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 &= ((/* implicit */long long int) (unsigned char)187);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (_Bool)1);
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)127)))) ? (min((((/* implicit */long long int) (_Bool)0)), (-4374538204466741617LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (4294967295U));
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)2329)), (2305842459457880064LL)))) ? (((/* implicit */int) max(((unsigned short)61686), (((/* implicit */unsigned short) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */int) (_Bool)1))));
                arr_11 [i_1] = ((/* implicit */short) min((max((((/* implicit */unsigned int) arr_7 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1])), (4294967270U))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (short)2329)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((-5316316486803194672LL) == (((/* implicit */long long int) 2425565250U))));
    var_24 *= ((/* implicit */unsigned char) 3330203343U);
}
