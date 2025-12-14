/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196808
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = (+(((/* implicit */int) (unsigned short)1920)));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((int) arr_5 [(short)6])), (((((/* implicit */int) arr_4 [(unsigned char)0] [i_0] [12ULL])) >> (((/* implicit */int) arr_4 [(signed char)10] [i_0 + 3] [(signed char)10])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((unsigned char)233), (((/* implicit */unsigned char) var_11))))) ? (((((/* implicit */_Bool) var_7)) ? (12000459924954695043ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 0ULL)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31181))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) != ((+(var_2))))))));
                                var_21 -= ((/* implicit */short) ((((((/* implicit */int) var_5)) != (((/* implicit */int) arr_0 [i_3])))) ? ((+(((/* implicit */int) arr_0 [i_3])))) : (((/* implicit */int) arr_0 [i_3]))));
                                var_22 = ((/* implicit */long long int) var_16);
                            }
                            for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                            {
                                var_23 *= ((/* implicit */unsigned int) (+(max((8ULL), (((/* implicit */unsigned long long int) -1LL))))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) (+(0U)));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) (+(arr_17 [7U] [i_1] [i_2] [i_3] [i_0] [i_5])));
                            }
                            for (short i_6 = 2; i_6 < 16; i_6 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_16))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_6 - 1]))) | (2089914341131088798LL))))))));
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_22 [i_3] [i_1]))));
                                arr_23 [i_0 + 2] [i_0] = ((/* implicit */long long int) var_13);
                            }
                            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                            {
                                arr_28 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_22 [i_0] [i_7]))))), ((+(10630452635690190571ULL)))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 1] [i_2] [i_2] [i_7])) ? ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_0 - 2] [i_0] [i_1] [i_0] [i_0] [i_3] [i_7])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_16), (((/* implicit */short) arr_9 [i_0] [i_1] [i_0] [i_3] [i_7])))))))));
                                arr_29 [i_0] [i_1] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) >> (((1297743629) - (1297743601)))))) != (((((((/* implicit */int) arr_14 [i_7] [i_1] [i_0] [i_1] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_0])) ? (504177890U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))));
                                arr_30 [i_7] [i_2] [i_1] [i_7] |= ((/* implicit */unsigned int) arr_2 [i_1] [i_2] [i_7]);
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                            {
                                arr_33 [i_0] = ((/* implicit */long long int) ((unsigned short) (unsigned char)209));
                                var_27 = arr_14 [i_0] [8U] [i_0] [i_3] [12ULL];
                                var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)21641)) : (((/* implicit */int) (signed char)127))));
                                var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0 + 2] [i_8 + 1] [i_8 + 1] [i_8])) ? (var_0) : (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_8 + 1] [i_0 + 1] [i_0])))) << ((((((-(arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] [(unsigned char)0] [i_8]))) + (3522011893386685645LL))) - (52LL)))));
                                arr_34 [i_3] [i_0] [i_1] [i_2] [i_3] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))));
                            }
                            for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                            {
                                arr_37 [i_0] [i_1] [i_0] [i_0] [i_3] [i_3] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_0 + 3] [i_2] [i_2] [i_9])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)255))));
                                arr_38 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_0] = max(((+(((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_2] [i_3] [i_9] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [17LL] [i_3]))) : (arr_3 [i_0]))))), (((((/* implicit */_Bool) (+(arr_17 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_9])), (var_7))))) : (arr_3 [i_0]))));
                            }
                        }
                    } 
                } 
                arr_39 [i_0] [i_0] = (+(min((((/* implicit */long long int) (unsigned char)0)), (4611686018423193600LL))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? ((~(7653683788311814353LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) >= (((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (6420292835626286463LL)))));
    var_31 = ((/* implicit */short) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_17))));
}
