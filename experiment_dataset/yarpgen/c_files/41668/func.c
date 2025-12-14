/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41668
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
    var_12 = ((/* implicit */unsigned char) max((max((min((var_6), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)222)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_8)))))))));
    var_13 = ((/* implicit */unsigned char) ((_Bool) (((~(5696260970141450794LL))) != (((/* implicit */long long int) ((/* implicit */int) var_0))))));
    var_14 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (-(var_7)));
                                var_15 = ((/* implicit */signed char) (+(((((1488811223U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) << (((((/* implicit */int) arr_3 [i_3 - 1])) - (42352)))))));
                                arr_14 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) ((524287U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5922))))));
                                var_16 = ((/* implicit */unsigned char) ((arr_5 [i_4] [(_Bool)1] [(_Bool)1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_1] [i_0] [i_0] [i_0] [i_1] [i_2] [i_2])) / (var_7))) * (((/* implicit */int) min((arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0])))))));
                    var_17 = ((/* implicit */unsigned char) min((-848239592), (((/* implicit */int) (unsigned char)222))));
                }
            } 
        } 
        var_18 -= min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (4294443008U)))), (min((min((((/* implicit */long long int) arr_5 [i_0] [12ULL] [i_0])), (338723534261379135LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))));
        var_19 -= ((/* implicit */signed char) ((short) ((992306311U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 2; i_8 < 23; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) max((((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [(signed char)1] [i_6] [(unsigned char)1] [i_6]), ((signed char)15))))))), (((/* implicit */unsigned long long int) var_3))));
                        arr_29 [i_5] [(signed char)0] = ((/* implicit */unsigned long long int) var_4);
                    }
                    for (unsigned int i_9 = 3; i_9 < 22; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_32 [9ULL] [i_5] [(short)20] [(unsigned short)14]))));
                            var_22 = ((/* implicit */unsigned long long int) (~(var_7)));
                        }
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((unsigned char) var_8))));
                            arr_37 [i_5] [i_5] [i_7 - 1] [i_9] [i_11] = max((arr_35 [i_5] [i_6]), (((/* implicit */unsigned long long int) (unsigned char)73)));
                        }
                        arr_38 [i_5] [i_5] [(unsigned short)0] [i_5] = var_3;
                        arr_39 [i_5] [i_6] [i_7] [i_9 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38471))) : (var_10)))) || (((((/* implicit */_Bool) ((unsigned int) 535533228U))) || (((/* implicit */_Bool) var_3))))));
                    }
                    arr_40 [(unsigned char)12] [(unsigned char)12] [i_6] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) 524287U)), (max((((/* implicit */long long int) ((((/* implicit */int) var_8)) + (var_7)))), (((-338723534261379136LL) / (((/* implicit */long long int) var_7))))))));
                    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) max((var_6), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */int) arr_32 [i_5] [i_6] [i_7] [i_7]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            arr_43 [i_5] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((unsigned short) var_7))), (var_4))), (((/* implicit */long long int) (~(((/* implicit */int) arr_42 [i_5])))))));
            arr_44 [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_5]))));
            arr_45 [i_5] = ((/* implicit */unsigned long long int) (_Bool)0);
        }
        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                arr_52 [i_5] [i_13] [i_14] [7LL] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_42 [i_5]))))));
                arr_53 [i_5] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_31 [i_14] [i_14] [i_5] [i_5] [(unsigned short)6] [i_5])) || (((/* implicit */_Bool) 338723534261379135LL)))), ((!(((/* implicit */_Bool) 4294443009U)))))) ? (max((min((1386576849587025241ULL), (((/* implicit */unsigned long long int) (unsigned short)12022)))), (((/* implicit */unsigned long long int) (signed char)-126)))) : (((/* implicit */unsigned long long int) (+(3567448581U))))));
            }
            for (unsigned short i_15 = 1; i_15 < 23; i_15 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_23 [i_15 + 1] [i_15] [i_15 - 1]), (arr_23 [i_15 - 1] [i_15] [i_15 + 1]))))));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 1; i_16 < 21; i_16 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) (~((-(max((((/* implicit */int) arr_24 [i_5])), (-1859595291)))))));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((short) (signed char)127)))));
                    var_28 = var_7;
                }
                for (unsigned int i_17 = 1; i_17 < 21; i_17 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_58 [i_5])))))));
                    var_30 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_61 [i_5] [i_13] [i_13] [i_17 + 2]))))), (((arr_46 [i_5]) | (((/* implicit */long long int) var_10))))));
                }
                var_31 += ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)115)), (-1859595275)));
                var_32 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)214)) || (((/* implicit */_Bool) 1488811222U)))) ? (((/* implicit */int) ((signed char) 524274U))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
            for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                arr_65 [i_5] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) min((var_0), (arr_58 [i_13]))))) || (((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_9))))))));
                arr_66 [i_5] [i_13] [i_5] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-38)), ((unsigned char)34)))) > (((/* implicit */int) arr_20 [i_5])))));
                arr_67 [i_5] [(unsigned short)10] [(signed char)5] = ((/* implicit */short) (unsigned char)16);
                var_33 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_62 [i_5] [i_5])), (((unsigned long long int) arr_17 [i_5]))));
            }
            /* LoopNest 2 */
            for (signed char i_19 = 1; i_19 < 22; i_19 += 4) 
            {
                for (unsigned short i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) 2806156073U);
                        arr_73 [i_5] [i_13] [i_13] [i_19] [i_19] [i_5] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (unsigned short)6253)), (-7625195167882986529LL))), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_26 [i_13] [i_5])), (var_0)))) >> (((/* implicit */int) (!((_Bool)1)))))))));
                        var_35 = ((/* implicit */unsigned long long int) -5621980478147237154LL);
                        arr_74 [i_5] [i_5] [i_19] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_19 + 1] [i_19 + 2] [i_5] [21ULL] [i_19 + 2]))))), (((min((var_6), (((/* implicit */unsigned int) (signed char)54)))) ^ (((/* implicit */unsigned int) min((var_11), (((/* implicit */int) (short)-1)))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 4) 
                        {
                            var_36 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) var_0))), ((-(min((524287ULL), (((/* implicit */unsigned long long int) arr_22 [i_19] [i_20]))))))));
                            var_37 = ((/* implicit */signed char) (+(max((arr_46 [i_13]), (((/* implicit */long long int) ((var_7) <= (((/* implicit */int) var_5)))))))));
                            var_38 = ((/* implicit */short) ((unsigned int) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))))));
                            arr_78 [(short)12] [(unsigned char)7] [i_5] [i_21] [i_21] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_69 [i_5] [i_13] [i_19 + 2] [i_20])))));
                        }
                        for (int i_22 = 0; i_22 < 24; i_22 += 1) 
                        {
                            arr_81 [i_5] [i_5] [i_19] [i_22] [i_20] = ((/* implicit */short) max(((unsigned short)6253), (((/* implicit */unsigned short) (_Bool)0))));
                            arr_82 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) arr_34 [i_19] [i_19] [i_19 + 2] [i_19 - 1] [i_19 - 1]));
                            arr_83 [(_Bool)1] [i_5] [(signed char)18] [7ULL] [19ULL] [17ULL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_11)))) / (var_4)));
                            arr_84 [i_13] [13ULL] [i_20] [i_5] = ((/* implicit */signed char) ((_Bool) 1200391445));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                var_39 -= ((/* implicit */int) arr_28 [i_5] [i_13] [i_13] [i_13] [i_23]);
                arr_88 [i_5] [i_23] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((short) 0LL))), (7707701126122598754LL)));
            }
            for (unsigned char i_24 = 1; i_24 < 22; i_24 += 4) 
            {
                arr_91 [i_5] = ((_Bool) max(((+(((/* implicit */int) arr_79 [i_5] [9ULL] [i_24])))), ((~(((/* implicit */int) arr_19 [i_13] [i_24]))))));
                /* LoopNest 2 */
                for (signed char i_25 = 1; i_25 < 23; i_25 += 3) 
                {
                    for (long long int i_26 = 1; i_26 < 22; i_26 += 1) 
                    {
                        {
                            arr_97 [i_5] = ((/* implicit */short) ((unsigned char) -1859595291));
                            arr_98 [i_5] [i_13] [i_26] [i_25] [i_13] = ((/* implicit */short) 4244974625U);
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_75 [i_5])))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_27 = 3; i_27 < 21; i_27 += 2) 
            {
                var_41 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_90 [i_27] [i_5] [i_5] [i_27 + 1])))));
                var_42 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) ((unsigned short) (unsigned short)59283))), (min((((/* implicit */long long int) (unsigned char)233)), (7707701126122598725LL))))));
            }
            var_43 = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)242)))));
        }
    }
}
