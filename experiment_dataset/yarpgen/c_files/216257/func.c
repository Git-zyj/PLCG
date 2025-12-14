/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216257
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
    var_17 = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))))), (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-52)))) : (((/* implicit */int) min((var_10), (((/* implicit */short) var_13))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((11825703840689631089ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21608)))))), (((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_2])) ? (((/* implicit */int) max(((short)32767), ((short)-24208)))) : (((/* implicit */int) max(((short)24208), ((short)7995))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((var_8), (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [(_Bool)1])))))))));
                            var_21 = ((/* implicit */long long int) arr_6 [i_1] [i_2] [i_4]);
                        }
                        var_22 = ((/* implicit */short) ((1158705494U) >= (3907206564U)));
                    }
                    var_23 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((arr_6 [14ULL] [(_Bool)0] [14ULL]), (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 2] [10ULL] [(_Bool)1] [i_2 - 2] [i_2] [i_2])) && (var_6))))) : (min((min((((/* implicit */unsigned int) var_1)), (var_16))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [6ULL])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 19; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_4))))))))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)-68)))))) : (min((((/* implicit */unsigned int) var_8)), (var_16)))))) : (((unsigned long long int) max((var_2), (((/* implicit */signed char) arr_4 [i_0])))))));
                                var_26 |= ((/* implicit */_Bool) (-((-(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    arr_19 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 + 1])))))) * (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))));
                    arr_20 [i_7] = ((((/* implicit */_Bool) arr_7 [i_0] [(signed char)2] [i_0] [i_0])) || (((/* implicit */_Bool) arr_6 [(signed char)18] [20] [i_7])));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((signed char) arr_16 [i_0] [(_Bool)1] [i_7] [(signed char)7] [i_7 - 1] [i_1] [i_0 - 1])))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (arr_1 [i_0])));
                    var_29 &= ((/* implicit */long long int) (+(((((/* implicit */int) var_4)) - (((/* implicit */int) var_2))))));
                }
                arr_21 [i_0] [i_1] [(short)21] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_5 [i_0 - 1])), (((var_5) + (((/* implicit */unsigned long long int) var_11))))));
                var_30 = ((/* implicit */unsigned short) (((+((-(((/* implicit */int) arr_9 [i_0] [i_0 + 3] [i_1] [i_0 + 3])))))) / (min((((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */int) arr_10 [(signed char)4] [i_0 + 3] [(signed char)4] [(signed char)4] [(signed char)4])) * (((/* implicit */int) var_14))))))));
                arr_22 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~((+(arr_1 [i_0 - 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            {
                var_31 = ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)24208)));
                arr_28 [i_8] [i_9] [i_9] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9] [i_8]))) + (var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_8] [(short)4] [i_8] [i_9] [i_8])) ? (((/* implicit */int) arr_13 [i_8] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_13 [i_8] [i_9] [i_9] [i_8] [i_9]))))) : ((((+(arr_6 [i_8] [i_9] [i_9]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (4049637430U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8]))))))))));
                arr_29 [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 7709740274847738501LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (426341119U))), (((/* implicit */unsigned int) arr_2 [i_8]))));
                var_32 -= ((/* implicit */unsigned int) (signed char)-38);
            }
        } 
    } 
    var_33 = ((/* implicit */short) var_1);
}
