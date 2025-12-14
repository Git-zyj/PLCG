/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36140
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
    var_12 = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) (_Bool)1)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)27177))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) ((_Bool) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-1065552146) : (((/* implicit */int) (short)1054))))) ? (((((/* implicit */_Bool) 2147483647)) ? (3240959040U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63354))))) : (((/* implicit */unsigned int) ((int) (unsigned short)2237)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)63298)), (-2028136015)))) ? ((~(999857901))) : (((((/* implicit */int) (unsigned short)2237)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (149))))))))));
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65535)) + (((((/* implicit */_Bool) 999857901)) ? (((/* implicit */int) (unsigned short)40532)) : ((-2147483647 - 1)))))) << (((((3616693069299594777LL) | (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)217))))))) + (195LL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (max((((long long int) ((((/* implicit */_Bool) 149562801)) ? (((/* implicit */int) (_Bool)0)) : (150634072)))), (((/* implicit */long long int) min((((((/* implicit */int) (signed char)96)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) -8704301490882865021LL))))))))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (((_Bool)1) ? (3152749287292182829ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (signed char)98))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (!((_Bool)1)));
}
