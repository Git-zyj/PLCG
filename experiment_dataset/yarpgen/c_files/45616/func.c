/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45616
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)65535)) - (65526))))) - (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_3 [i_0] [i_1]))))))) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) 3U))))) <= (((((/* implicit */int) var_4)) >> (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_9 [2LL] [i_1] [i_2] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))) * (arr_4 [i_2]))) >> (((((1400688028) >> (((1400688041) - (1400688029))))) - (341902)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16495)) >> (((((/* implicit */int) var_9)) - (27088)))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (482921277U)))))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) && (arr_0 [(unsigned char)13]))) && (((((/* implicit */_Bool) arr_8 [(unsigned short)16] [(unsigned short)16])) || (((/* implicit */_Bool) var_8))))))) >> (((/* implicit */int) ((((((/* implicit */int) (signed char)51)) >> (((3812046022U) - (3812046015U))))) > (((/* implicit */int) (signed char)79)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */int) ((((((482921289U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))))) >> (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (_Bool)0)))))) >> (((((((((/* implicit */int) var_12)) - (((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0])) && (((/* implicit */_Bool) (signed char)125))))))) - (36628)))));
                                var_16 -= ((/* implicit */short) ((((((((/* implicit */int) arr_16 [(signed char)4] [i_1] [i_2] [i_3] [(_Bool)1])) >> (((/* implicit */int) arr_17 [i_3] [i_0] [i_3] [i_3 - 1] [i_4])))) - (((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((((((/* implicit */int) (signed char)-79)) - (((/* implicit */int) var_10)))) <= (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((((3812046005U) | (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)28)) | (((/* implicit */int) (_Bool)0))))))) | (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_8)))) | (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_0)))))))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 1400688028))))) | (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_14))))))) + (((/* implicit */int) ((((/* implicit */_Bool) 1400688027)) || (((/* implicit */_Bool) 3840)))))));
}
