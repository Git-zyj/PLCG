/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54878
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((((/* implicit */short) var_15)), ((short)-21233))))) ? (((((/* implicit */_Bool) (signed char)-11)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_11)) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0LL) < (0LL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_13))))))) ? (max((max((((/* implicit */unsigned long long int) var_6)), (var_14))), (((/* implicit */unsigned long long int) ((unsigned int) var_7))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))))))));
    var_20 = ((/* implicit */unsigned short) ((var_5) / (var_11)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                    var_21 -= ((/* implicit */unsigned long long int) ((max(((+(1001216227637681322ULL))), (((/* implicit */unsigned long long int) (unsigned char)242)))) < (((/* implicit */unsigned long long int) 1645006927))));
                    arr_9 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)22)) ? (17445527846071870308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))))) : ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)127)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 0)), (arr_0 [i_2] [i_2])));
                                arr_14 [i_0] [(unsigned char)7] [8] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) arr_6 [i_2] [i_4])) - (((/* implicit */int) var_6)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [6ULL])) != (2067570970582595946ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
