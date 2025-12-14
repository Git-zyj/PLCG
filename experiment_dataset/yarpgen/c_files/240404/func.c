/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240404
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
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) var_1))));
    var_18 = (unsigned short)21894;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) -1292766143)) : (281474976710655ULL)))) ? (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */int) ((unsigned short) 18446744073709551608ULL)))))) : ((-(18125941337201698298ULL)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [5ULL] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0 - 2] [(unsigned short)10]);
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 -= ((/* implicit */signed char) 4305253029175164372ULL);
                                arr_15 [i_0] [i_1] [i_3] = min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-30)) / (((/* implicit */int) min(((unsigned short)65535), (arr_11 [i_0] [17ULL] [i_2] [2ULL] [i_4]))))))));
                            }
                            arr_16 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) 18125941337201698328ULL);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
                            {
                                arr_19 [i_0] [i_2] [i_2] [i_1] [i_5] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (short)16384)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))));
                                arr_20 [i_1] [i_5] [(signed char)14] [i_2] [(unsigned short)14] [i_1] = ((/* implicit */long long int) (+(((int) 11219774266969099616ULL))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)16)));
                                var_22 = ((/* implicit */_Bool) ((arr_5 [i_1]) ? (18446744073709551615ULL) : (18125941337201698311ULL)));
                            }
                            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                            {
                                arr_23 [i_2] [i_0] |= ((/* implicit */short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0] [i_2] [i_1])), (((((/* implicit */int) (signed char)0)) / (2147483638))))))));
                                arr_24 [i_6] [i_1] [14LL] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) ((long long int) max((18125941337201698302ULL), (((/* implicit */unsigned long long int) -4772392994080213498LL)))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                            {
                                var_23 = ((/* implicit */int) ((-6754484117144116212LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                                arr_27 [i_0 + 2] [i_3] [i_1] [i_1] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)101)) ? (11219774266969099599ULL) : (18125941337201698298ULL)));
                            }
                        }
                    } 
                } 
                arr_28 [i_0] [i_1] [16ULL] = ((unsigned long long int) max((var_13), (((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_1] [i_0 + 2]))));
                arr_29 [i_1] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) ((17611207754187987149ULL) < (arr_7 [i_0] [i_1] [i_0]))))), (max((11219774266969099623ULL), (17583596109824ULL)))));
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_33 [i_10] [i_8] [2LL] [2LL])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47188))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)0)) : (var_13))))))) : (max((var_6), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0])) : (18125941337201698327ULL)))))));
                                arr_38 [i_0 - 1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -4772392994080213509LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11046))) : (arr_32 [i_0] [3LL] [i_8] [0ULL])))))) / (((((835536319521564466ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [13ULL] [13ULL] [13ULL] [i_1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22625))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -4772392994080213509LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11046))) : (arr_32 [i_0] [3LL] [i_8] [0ULL])))))) * (((((835536319521564466ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [13ULL] [13ULL] [13ULL] [i_1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22625)))))));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (max((15532382401347497381ULL), (9137708213939135319ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0 + 3] [i_0 - 1] [i_0 - 2] [i_0]))) < (18125941337201698322ULL)))) : ((-(((/* implicit */int) arr_25 [16ULL] [i_1] [i_0 - 1] [i_0])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_8);
}
