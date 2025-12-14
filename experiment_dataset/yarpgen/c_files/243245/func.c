/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243245
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)108))))))) ? ((~(((/* implicit */int) (signed char)-98)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) var_4))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((max((max(((unsigned char)177), (((/* implicit */unsigned char) (signed char)-82)))), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)31245)) != (-1813811327)))))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) (short)30963))))) || (((/* implicit */_Bool) max((arr_2 [(unsigned short)0]), (((/* implicit */unsigned short) (signed char)-51))))))))));
        var_21 = ((/* implicit */long long int) 2147483647);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_7 [0ULL] |= ((/* implicit */signed char) ((var_0) ^ (((/* implicit */long long int) arr_3 [i_1]))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)21)))));
                        arr_15 [i_4] [i_4] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((arr_13 [i_1] [i_2] [i_1]) + (4716872871828433831LL)))));
                        var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                        var_24 = ((/* implicit */unsigned short) var_18);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) 17473993655486013032ULL);
                            var_26 = arr_13 [i_3 - 1] [i_1] [i_1];
                            arr_18 [i_1] [i_1] [i_3] [i_4 - 2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_4 + 2] [i_3 + 1])) ? (((((/* implicit */_Bool) arr_17 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)34290)))) : (((/* implicit */int) arr_16 [i_2] [i_3 - 1] [(unsigned char)18] [i_3 - 1] [i_4] [i_4 + 2] [i_4]))));
                            var_27 = ((/* implicit */signed char) ((((arr_13 [i_1] [15LL] [i_3 - 1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_16 [i_1] [i_3 - 1] [i_3 - 1] [i_4] [i_4 + 2] [i_4 - 1] [i_5])) - (6517)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_17 [i_3 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (arr_3 [i_3])));
                            var_29 = ((/* implicit */short) (signed char)-78);
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (arr_13 [(unsigned short)14] [(unsigned short)14] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)93))))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                        {
                            var_31 |= ((/* implicit */short) arr_13 [i_1] [i_2] [i_2]);
                            arr_26 [i_1] [i_4 - 1] [i_2] [i_7] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-98))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)151)))) : (((/* implicit */int) arr_16 [(short)21] [i_1] [i_3 + 2] [i_4 + 1] [i_7] [(short)1] [(signed char)21]))));
                            arr_27 [i_1] [i_2] [i_3 - 1] [i_3 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (((((/* implicit */_Bool) (short)24472)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15830857463506913795ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            var_32 = ((/* implicit */unsigned short) ((arr_17 [i_3 - 1]) ^ (arr_17 [i_3 - 1])));
                        }
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((_Bool) var_14)))));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]))));
        arr_28 [i_1] [i_1] = arr_5 [i_1] [i_1];
    }
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1813811336)) ? (((/* implicit */int) arr_16 [i_8] [(signed char)4] [i_8] [7U] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_10 [6ULL] [i_8])))), (1317856749)))) ? (((/* implicit */int) ((unsigned short) ((short) (short)32765)))) : (((/* implicit */int) ((signed char) (signed char)73)))));
        var_36 = ((/* implicit */unsigned short) min((var_36), (min((((unsigned short) (unsigned char)104)), (((/* implicit */unsigned short) min(((signed char)80), (((/* implicit */signed char) (_Bool)1)))))))));
        var_37 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_9 [i_8])))), ((-(((/* implicit */int) var_3))))))), ((-(1U)))));
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) arr_4 [i_8]))));
    }
    var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_7))))));
}
