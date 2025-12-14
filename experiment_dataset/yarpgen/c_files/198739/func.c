/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198739
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_1] [i_1] [21U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((unsigned short)52127), ((unsigned short)65535)))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_3 [i_2])))) ? (((((/* implicit */int) (unsigned short)13409)) + (-282388993))) : (max((((/* implicit */int) (unsigned short)13409)), (-10)))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-31831)) : (((/* implicit */int) arr_1 [22])))), (((((/* implicit */_Bool) -1536314643)) ? (arr_10 [i_0] [i_0] [i_0] [i_0 + 1] [i_4]) : (((/* implicit */int) arr_1 [i_0 - 1])))))))));
                            var_16 *= ((unsigned char) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 288281204U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13415)))))));
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) var_6)), (4113247982U))))) ? (min((((/* implicit */long long int) max(((unsigned short)52127), (((/* implicit */unsigned short) (_Bool)1))))), (((long long int) var_5)))) : (((/* implicit */long long int) min((-10), (((/* implicit */int) (unsigned char)0)))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_2] [i_1]))));
                            var_19 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((_Bool) arr_5 [i_0 - 1]))), (((arr_3 [i_2]) << (((arr_3 [i_1]) - (5723033015867108566LL)))))));
                        }
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_20 ^= ((/* implicit */int) ((10084982081618841894ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13409)))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (593204989)))), ((~(arr_0 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (arr_2 [i_0 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), ((_Bool)0))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_14))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
                        }
                        var_22 = ((/* implicit */unsigned int) max((var_22), (max((((/* implicit */unsigned int) (unsigned short)52125)), (2640428148U)))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -30)) ? (-7767857566741363928LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)174)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) -1319654267)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)539)))))));
    }
    var_24 = ((/* implicit */unsigned char) ((_Bool) var_9));
}
