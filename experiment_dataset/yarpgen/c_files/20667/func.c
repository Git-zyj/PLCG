/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20667
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 - 1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */long long int) var_9)) : (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4))))) <= (((var_4) / (var_1))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */long long int) ((((var_7) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_12) >= (((/* implicit */int) arr_1 [i_0 + 1]))))))) & (((((((/* implicit */int) (short)-18208)) / (((/* implicit */int) (unsigned short)57592)))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_0))))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (((((/* implicit */long long int) var_6)) / (arr_7 [i_0] [i_1 - 1] [i_0])))))) ? (((/* implicit */int) max((((((/* implicit */int) var_2)) < (((/* implicit */int) var_7)))), (((((/* implicit */long long int) var_6)) >= (var_1)))))) : ((+(((((/* implicit */int) var_7)) >> (((var_5) - (890467234343952910ULL)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (~(((arr_12 [i_4 - 3] [i_1] [i_1 + 1] [i_0 - 4] [i_1 + 1]) & (((/* implicit */unsigned long long int) var_12))))));
                                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3 + 4] [(short)1] [i_1 + 1]))))) || (((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_2))))))) && (((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (var_1)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) | (var_5)))) && (((((/* implicit */int) (unsigned short)57606)) != (((/* implicit */int) (short)-18208)))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [(_Bool)1] [i_1] [(_Bool)1] [i_5] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) ^ (4968431610669052410ULL)))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741824U)) ? (13478312463040499205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))))))))))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)78)) ^ (((/* implicit */int) (unsigned short)65535))))) || (((/* implicit */_Bool) 9223301668110598144ULL))));
                    arr_17 [i_0 + 1] [i_0] [i_0 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((var_8) - (2863807905U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7944))) | (2641373262092321616LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_9 [i_0 - 1] [i_1 + 1] [(unsigned short)11] [i_1] [0U] [i_5])))))))) ? (((((/* implicit */int) ((((/* implicit */int) (short)29715)) <= (((/* implicit */int) (unsigned char)0))))) >> (((((/* implicit */int) (short)-16209)) + (16232))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (var_6))) && (var_7))))));
                }
                arr_18 [i_1] [i_1] = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [6ULL] [i_1] [i_0]))) > (var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)56)) == (((/* implicit */int) (short)-31379)))))) : (max((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_12)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9))))) == (((/* implicit */int) arr_6 [10ULL] [10ULL] [10ULL] [i_1 - 1]))))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_10))));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_12 [i_0] [i_0 - 3] [0LL] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_4))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (var_1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -1LL)) == (9223301668110598132ULL)));
}
