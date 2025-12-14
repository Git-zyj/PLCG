/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200599
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) var_3)) | (arr_3 [i_1] [i_1] [i_2]))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) | (var_9))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-86)) & (((/* implicit */int) arr_0 [i_1] [i_0]))))) & (((var_9) | (var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1])) || (((/* implicit */_Bool) (signed char)86))))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-93)) <= (((/* implicit */int) (signed char)102)))))))) - (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_4)))))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) + (var_8)))))));
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */int) (signed char)64)) > (((/* implicit */int) (signed char)93)))))));
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (short)-16492)) <= (((/* implicit */int) (unsigned short)0))))) == (((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) (short)18096)))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (9223372036854775792LL)))) | (((1215835558) % (((/* implicit */int) (short)-6616))))))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65535)) | (928455694))) & (((/* implicit */int) ((((((/* implicit */long long int) arr_7 [i_1 + 2] [i_1 + 2] [i_0] [i_0])) % (var_5))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)93)) <= (((/* implicit */int) arr_1 [i_2])))))))))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)13151)) + (53905357)))) || (((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (short)18089))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)209)))) * (((/* implicit */int) ((-8959697099032595014LL) < (((/* implicit */long long int) 1966192541U))))))))));
}
