/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32332
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -85326037)) ? (var_8) : (((/* implicit */unsigned long long int) -85326028))))) ? (((/* implicit */int) min((arr_3 [i_0] [15U]), (var_2)))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) var_9))))))));
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (unsigned char)102))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) : (((((/* implicit */_Bool) arr_2 [15ULL] [(unsigned char)9])) ? (((/* implicit */unsigned long long int) 2054449819U)) : (7730408401053499615ULL))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (short)-16254)) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) arr_0 [i_2])))))))));
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3518)) > (arr_7 [i_4 + 1] [i_2 + 1])));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 3]))) % (2182149193504599374ULL)));
                    arr_15 [i_2] [i_2] [(short)3] [i_2] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_2)))));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_15 -= ((/* implicit */unsigned short) ((unsigned long long int) var_7));
                        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((+(arr_11 [i_2 + 2] [i_2 + 2] [i_4] [i_2 + 2]))) : (((/* implicit */unsigned long long int) ((unsigned int) 7412271664546046734ULL)))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_9))));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */short) (~(arr_18 [i_3 + 3])));
                        var_18 = ((((/* implicit */_Bool) ((signed char) arr_18 [i_2]))) ? (arr_14 [i_6]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                        arr_22 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)41));
                    }
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (short)-32477)) : (((/* implicit */int) (short)32767))))) && (((/* implicit */_Bool) var_4))));
                        arr_25 [i_2] [i_4] [i_4 + 1] [i_3] [i_2] = ((/* implicit */unsigned char) 2574120865U);
                        var_20 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_2 + 2] [i_3] [i_3] [i_4] [i_4 - 1] [i_2] = ((/* implicit */signed char) arr_6 [i_2 - 1]);
                        arr_29 [i_2 + 1] [i_2] [i_2] [(unsigned char)7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_2 - 1]))));
                        arr_30 [i_2] [i_3 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_8) : (arr_20 [i_2 + 1])));
                    }
                }
            } 
        } 
        arr_31 [(short)14] &= ((/* implicit */unsigned long long int) arr_5 [i_2 + 1]);
        var_21 = ((/* implicit */signed char) (+(arr_16 [i_2 - 1])));
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 3; i_10 < 19; i_10 += 3) 
        {
            for (signed char i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((signed char) ((1809096073U) / (((/* implicit */unsigned int) -85326049)))));
                        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)107))));
                        var_24 = ((/* implicit */signed char) arr_38 [i_9] [i_10] [i_10] [i_11]);
                        var_25 = ((/* implicit */_Bool) arr_40 [i_9] [19U] [i_11 + 1] [i_11 + 1] [i_12]);
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) arr_46 [i_9])), (arr_39 [i_9] [i_9] [i_11])))))));
                            arr_50 [i_10] [i_10] [i_11 - 1] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_39 [i_10 - 3] [i_11 - 1] [i_13 + 1])), (var_8)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_33 [i_10])) ? (1775903715U) : (834843271U)))))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) 3548512435U))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 6508143441240192572ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) : (4109205097396885605LL)));
                            var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((+(((/* implicit */int) arr_38 [i_10] [i_10 - 3] [i_10] [i_10]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(2331210179U)))) ? (((/* implicit */int) arr_37 [i_9] [i_9] [i_11] [15])) : (((/* implicit */int) (_Bool)0))))) : (((unsigned long long int) var_5))));
                        }
                        for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) var_8);
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25824)) ? (((/* implicit */int) arr_33 [i_9])) : (((/* implicit */int) arr_34 [i_11] [i_13 + 1]))))) ? (max((3548512435U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((1442545097355139178ULL) >= (4627849428648022171ULL)))))))));
                        }
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (!(((-4151325497676034337LL) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) - (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_42 [i_9] [i_10 + 1] [i_11] [i_11])), ((signed char)42)))) ? (((((/* implicit */_Bool) (short)4770)) ? (-85326033) : (((/* implicit */int) (short)-30111)))) : (((/* implicit */int) ((short) var_7)))))));
                        arr_53 [i_9] [i_9] [i_10] [i_13] = ((/* implicit */long long int) (signed char)-73);
                        arr_54 [i_11] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) ((arr_45 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */unsigned long long int) ((long long int) (-(arr_32 [i_9] [i_9]))))) : (min((((((/* implicit */_Bool) (short)27478)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_9] [i_9] [i_10 + 1] [i_10] [i_11] [(short)12] [i_11]))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_10] [i_10])) || (((/* implicit */_Bool) arr_52 [i_9] [i_10] [i_11] [i_11] [i_11])))))))));
                        var_33 = (~(((/* implicit */int) min(((short)-32477), ((short)32308)))));
                    }
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                    {
                        arr_57 [i_9] [i_10] [i_9] = ((/* implicit */_Bool) var_1);
                        arr_58 [i_9] [i_10] [i_11] [i_10] = ((/* implicit */signed char) 6077451277227914865ULL);
                        arr_59 [i_10] [i_10] [(unsigned short)1] [i_16 + 1] [i_16] = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_9] [i_9] [i_16])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (13818894645061529444ULL) : (((/* implicit */unsigned long long int) arr_40 [i_9] [i_10 + 2] [i_11 + 1] [i_11 + 1] [i_16 + 1])))))))), (min((arr_39 [i_10 - 3] [i_11 + 1] [i_16 + 1]), (((/* implicit */long long int) max((arr_49 [i_9] [i_10] [i_11 + 1] [i_11 + 1] [i_16 + 1] [i_16]), ((signed char)-122)))))));
                    }
                    /* vectorizable */
                    for (short i_17 = 2; i_17 < 20; i_17 += 4) 
                    {
                        arr_62 [i_11] [i_10] [i_11] [i_17] [(short)7] = ((/* implicit */signed char) ((_Bool) arr_46 [(unsigned char)0]));
                        arr_63 [i_9] [i_9] [19LL] [i_10] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_9] [i_9] [i_11] [i_17]))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9] [i_11 + 1]))) != (9722193400595468446ULL))) ? (2524681378U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                }
            } 
        } 
        var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_42 [i_9] [i_9] [14ULL] [i_9])), (var_1)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((arr_38 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */short) arr_47 [i_9] [i_9] [i_9] [i_9] [(unsigned char)20] [i_9] [i_9])))))));
    }
    var_36 ^= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))))));
    var_37 = ((/* implicit */int) var_0);
}
