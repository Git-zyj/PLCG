/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209168
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
    var_17 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) min((var_12), (arr_0 [i_0 - 1])))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8118864740409748076LL)) ? (((/* implicit */int) arr_1 [(short)12])) : (((/* implicit */int) (short)-2504))))) ? (((/* implicit */int) ((4294967272U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167)))))) : ((+(((/* implicit */int) (unsigned short)8)))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)67)))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                arr_8 [i_0] [i_1 - 2] [i_2] |= ((long long int) arr_0 [(unsigned char)5]);
                arr_9 [(unsigned short)17] [(unsigned short)17] [i_2] |= ((/* implicit */unsigned char) arr_4 [i_2] [i_0 + 2] [i_0 + 2]);
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
                arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))));
            }
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) arr_11 [i_0]);
                /* LoopSeq 4 */
                for (signed char i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_22 += ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_4 - 2] [i_5] [i_5] [i_1]);
                        var_23 = ((/* implicit */unsigned char) var_8);
                    }
                    arr_18 [19U] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_4 + 1] [i_0 + 2] [i_1 + 1]))));
                    arr_19 [i_0] [i_1] [i_3] [i_3] [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_0 - 3] [i_0 + 3] [i_1 - 2]))));
                    arr_20 [i_0] [3] [i_3] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 - 3] [i_4 - 2] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_16 [i_4 - 3] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 2])) : (((/* implicit */int) arr_16 [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_4 - 2]))));
                }
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    arr_23 [i_1] |= ((/* implicit */unsigned char) ((600298318U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88)))));
                    arr_24 [i_6] [i_6] [(signed char)20] [i_3] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)167))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)88)))))));
                    arr_25 [i_0] [i_0] [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1 - 1] [i_3] [i_6]);
                }
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_29 [i_3] = ((/* implicit */int) arr_28 [i_0 - 1]);
                    arr_30 [i_7] [i_7] [i_7] [i_3] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)135));
                    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0 + 3])) == (((/* implicit */int) arr_7 [12U] [i_1] [i_1]))));
                    var_26 -= ((/* implicit */signed char) arr_4 [i_0 + 3] [i_0 + 3] [i_1 - 1]);
                    /* LoopSeq 4 */
                    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */int) (unsigned char)88)) * (((/* implicit */int) (signed char)-88)))) : (((/* implicit */int) var_10))));
                        arr_34 [i_8 + 2] [i_8 + 2] [i_3] [i_7] [i_8] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_6 [i_8 + 1] [i_7] [i_1] [i_1])))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 20; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8521)) || (((/* implicit */_Bool) -1375034017)))))));
                        arr_37 [i_3] [i_7] [i_3] [(unsigned char)23] [i_9 - 4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) -800232421))) / (((/* implicit */int) (unsigned char)255))));
                        arr_38 [i_0] [i_1] [i_9] [i_3] [i_7] [i_9] &= ((/* implicit */short) var_5);
                        arr_39 [i_0] [i_0] [i_0] [i_1] [18U] [i_7] [i_3] = ((/* implicit */unsigned char) (((-(var_13))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (short i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        arr_43 [i_3] = ((/* implicit */unsigned int) ((unsigned char) var_16));
                        var_28 = ((/* implicit */short) 600298318U);
                        var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) || (((/* implicit */_Bool) 3101780191U))));
                    }
                    for (short i_11 = 1; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        arr_47 [(unsigned short)9] [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1] = ((/* implicit */_Bool) arr_32 [i_11 - 1] [i_1 - 2] [i_3] [i_11] [i_11] [i_0]);
                        arr_48 [i_0] [(unsigned char)13] [(unsigned char)13] [i_3] [i_11 + 1] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_11]))));
                        arr_49 [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) << (((((/* implicit */int) arr_0 [i_0 + 4])) - (17804)))));
                    }
                }
                for (unsigned char i_12 = 2; i_12 < 23; i_12 += 3) 
                {
                    arr_52 [i_0] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(11390310131723324234ULL))))));
                    var_30 |= ((/* implicit */unsigned int) var_8);
                }
                arr_53 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15202)) ? (((/* implicit */unsigned long long int) 3694668982U)) : (11390310131723324229ULL)))) || (((/* implicit */_Bool) var_4))));
                arr_54 [i_3] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7056433941986227387ULL)) || (((/* implicit */_Bool) ((unsigned char) var_9)))));
                arr_55 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63587)) ? (var_1) : (((/* implicit */unsigned int) arr_50 [i_0] [i_0] [(short)11]))))) : (18446744073709551615ULL)));
            }
        }
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            arr_59 [i_13] [(short)20] [i_0] |= ((/* implicit */unsigned char) (+(((unsigned int) -1375034031))));
            arr_60 [i_13] [i_13] [i_13] = var_10;
        }
    }
    var_31 -= ((/* implicit */unsigned int) ((max((var_5), (min((((/* implicit */int) var_3)), (var_16))))) + (((/* implicit */int) ((short) var_9)))));
}
