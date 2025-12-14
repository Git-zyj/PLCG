/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224258
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+((~(((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)127)))))))))));
                                var_16 ^= ((/* implicit */_Bool) (((+(2260322661U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [(unsigned char)1] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((437896489U) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                arr_16 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52487)) / (((/* implicit */int) (unsigned short)50333))))) / (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) / (((10788853071242620341ULL) / (((/* implicit */unsigned long long int) 635659892U))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (-(7657891002466931275ULL)));
    var_18 += (!(((/* implicit */_Bool) (signed char)-9)));
}
