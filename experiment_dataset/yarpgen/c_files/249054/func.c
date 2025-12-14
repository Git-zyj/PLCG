/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249054
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
    var_16 = ((/* implicit */unsigned short) -2790954760384441748LL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_1] [i_1])), (var_0)));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) max((arr_5 [i_2] [i_1] [i_1] [i_0]), ((unsigned char)55)))) / (((-864549039) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */unsigned int) var_6);
                    var_19 = (-((((-(((/* implicit */int) (signed char)-125)))) + ((+(arr_1 [i_0] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_3] = ((/* implicit */unsigned int) (signed char)-52);
                        var_20 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_1 - 2] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 + 1])) : (arr_8 [i_0 - 1]))), (((/* implicit */int) arr_5 [i_4 + 1] [i_1 - 2] [i_0] [i_0 + 1]))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (+(((long long int) 3))));
                        var_21 = ((/* implicit */unsigned char) -1866350969);
                    }
                    arr_16 [i_3] [i_0] [i_0] = ((/* implicit */short) ((signed char) arr_6 [i_1]));
                }
                /* LoopSeq 3 */
                for (long long int i_5 = 2; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_5] = ((((/* implicit */_Bool) -6675014602350457936LL)) ? (((((/* implicit */int) var_7)) - (((int) arr_11 [i_0 + 1] [i_1] [i_1] [i_5 + 1])))) : ((+(((/* implicit */int) arr_11 [i_5] [i_1] [(short)6] [i_0])))));
                    var_22 -= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                }
                for (long long int i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (short)7433))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)210)))))));
                    var_25 = ((/* implicit */int) arr_4 [i_0] [i_1] [i_6]);
                    arr_22 [i_6] = ((/* implicit */signed char) (+(1958733850)));
                    var_26 = ((/* implicit */short) ((min((((/* implicit */int) var_13)), (arr_1 [i_1 + 1] [i_1 + 2]))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_6] [i_6])))))));
                }
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_27 = ((unsigned short) min((-1959563540), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) -5679842060901187583LL)))))));
                        arr_30 [i_0] [i_0] [i_7] [i_8] [i_7] [i_0] = arr_8 [i_0];
                        arr_31 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (max((2906866444260060222ULL), (((/* implicit */unsigned long long int) (signed char)-11)))) : (((/* implicit */unsigned long long int) max((arr_24 [i_8] [i_7] [i_1] [10LL]), (((/* implicit */long long int) (signed char)-34))))))), (((/* implicit */unsigned long long int) (short)-4442))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        var_28 -= ((/* implicit */short) arr_32 [i_9 + 1] [i_1] [i_7] [i_1] [i_1] [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                        {
                            var_29 = arr_26 [i_0] [i_9];
                            var_30 = ((/* implicit */unsigned short) ((int) arr_32 [i_10] [i_7] [i_9 + 3] [i_7] [i_1 + 2] [i_0]));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 2; i_12 < 22; i_12 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) (unsigned char)177)))), (((/* implicit */int) max((arr_23 [i_1] [i_7] [i_1] [i_12]), (((/* implicit */unsigned short) (unsigned char)0))))))), (((((((/* implicit */_Bool) -1603785751)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) var_11)))) + (((/* implicit */int) ((short) 6860584850131996641ULL)))))));
                                var_32 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0])))));
                                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) max((max((((long long int) var_3)), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) (unsigned short)47178)))))));
                                var_34 *= min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-16842))))), (var_4));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) (~((~(-2290534539192965892LL)))));
                    var_36 = (signed char)-12;
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_27 [i_1 + 2] [i_1 - 1])), (((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_7] [i_0] [i_0] [i_13])) ? (((((/* implicit */_Bool) var_5)) ? (arr_39 [i_0] [i_7] [i_0] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_7] [i_13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))))))))));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (max((((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_23 [i_0] [11] [i_7] [i_13])) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned char)140)))))), (var_1)))));
                    }
                }
                var_39 |= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) 239704951)), (arr_41 [i_1 + 2] [i_1] [i_1] [i_0 + 1] [i_1]))), (((arr_41 [i_1 + 1] [i_0] [(unsigned short)22] [i_0 - 1] [i_0]) / (arr_41 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [(signed char)0])))));
            }
        } 
    } 
    var_40 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 1217818299)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3461170266U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-32)))))), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) 6073142293148326031LL))))), (((int) var_15)))))));
    /* LoopSeq 2 */
    for (signed char i_14 = 2; i_14 < 22; i_14 += 2) 
    {
        var_41 = (+(((/* implicit */int) (signed char)-63)));
        var_42 -= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)81)), (((((/* implicit */_Bool) arr_8 [i_14])) ? (((/* implicit */int) arr_13 [i_14] [i_14] [i_14] [i_14 - 2])) : (((/* implicit */int) arr_38 [i_14] [i_14] [i_14 + 1] [i_14]))))));
        var_43 *= ((/* implicit */unsigned char) -26);
    }
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
    {
        arr_54 [i_15] = ((/* implicit */int) ((((arr_36 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) * (arr_36 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_39 [i_15] [i_15] [i_15] [i_15] [i_15]))))));
        arr_55 [i_15] [i_15] = ((/* implicit */int) min(((-(((unsigned int) 9223372036854775806LL)))), (arr_0 [i_15])));
    }
}
