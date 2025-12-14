/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213848
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (signed char)-32))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) (signed char)-7);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_19)));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1]))) + (var_19)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) || (var_18)))))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : (229736229U)))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) * (0ULL)))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_0 [i_1] [i_1]))));
                                var_25 ^= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                            }
                            for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) 
                            {
                                var_26 ^= var_16;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) | (2752935932U))) : (4294967295U)));
                                var_27 ^= ((/* implicit */long long int) max((((/* implicit */int) (signed char)-56)), (((((/* implicit */int) arr_1 [i_0] [i_0])) / ((((_Bool)1) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (signed char)51))))))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)89)))), (-1042759444)))) - (max((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) : (arr_2 [i_3])))))));
                            }
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (9223372036854775795LL) : (9223372036854775807LL))), (((/* implicit */long long int) max((1414674077), (((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-37)))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (short)-8908)))) : (((/* implicit */int) (unsigned char)179)))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)234), (arr_3 [i_3] [i_3] [i_3])))) >> (((((((/* implicit */_Bool) ((4294967281U) + (1857747157U)))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)38372)), (-2000891582)))) : (((var_7) - (arr_17 [i_0] [i_3] [i_0] [i_3] [i_0]))))) - (38348LL)))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) (signed char)57)) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */int) var_10))))) == (((/* implicit */int) (unsigned short)5126))));
            }
        } 
    } 
}
