/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191760
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
    var_18 = ((/* implicit */short) (_Bool)1);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (signed char)-17)) : (((((/* implicit */int) var_12)) / (((/* implicit */int) var_14))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */signed char) ((((-893237164) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)41)) ? ((+(var_13))) : (((/* implicit */unsigned long long int) ((-893237146) + (-893237146)))))) - (15895125346281920104ULL)))));
                            var_21 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-14879)) >= (((/* implicit */int) (short)16384)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (1008522309708170625ULL)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1008522309708170605ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10893)))))) ? (1008522309708170611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_4] [i_2] [(short)5] [i_4] [i_0 - 2] [i_2])))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_1] [i_1]))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) var_13);
                                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 - 2]))));
                            }
                            for (short i_5 = 4; i_5 < 20; i_5 += 2) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [i_3 - 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((1008522309708170605ULL), (((/* implicit */unsigned long long int) var_2)))) / (max((((/* implicit */unsigned long long int) (_Bool)1)), (1008522309708170608ULL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 4] [i_5 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 4] [i_5 - 2]))) : (arr_2 [i_0 - 3] [i_5 - 2] [i_5]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 893237162)) && (arr_6 [i_1] [i_0])))))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((unsigned int) ((arr_4 [i_1] [i_3 - 1] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                                arr_19 [i_0] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 6834547670348444451ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_5 - 4] [i_2] [i_2])) || (((/* implicit */_Bool) arr_16 [i_2] [(unsigned char)18] [i_2] [i_3] [i_5 - 1]))))) : (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_3] [i_1])) : (((/* implicit */int) arr_16 [i_5] [i_1] [i_2] [i_3] [i_5]))))));
                                var_23 &= ((/* implicit */signed char) ((min((arr_7 [i_2] [i_3] [i_3] [i_0 - 3] [i_2]), (arr_7 [i_1] [i_2] [i_0 - 2] [i_1] [i_1]))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) (~(((((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_0 - 2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_0 [(signed char)20] [i_0])))) * (((/* implicit */int) ((3936756324U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_1] [(signed char)4]))))))))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_20 [i_1])))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_20 [i_1]))))))) : ((-(((/* implicit */int) var_11))))));
                    var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (-893237155) : (((/* implicit */int) var_15))))), (23053194U))))));
                    var_27 = ((/* implicit */unsigned short) max(((~(((-893237146) | (-1))))), ((~(((/* implicit */int) (unsigned short)200))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 19; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(-5697224779112233950LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_7))))) : (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 1302201233U)) : (arr_20 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127)))))))));
                        var_29 = ((((/* implicit */_Bool) (-(893237176)))) && (((/* implicit */_Bool) (-(max((17438221764001381011ULL), (((/* implicit */unsigned long long int) var_0))))))));
                        /* LoopSeq 4 */
                        for (long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_0] [i_8] [i_0] [i_8] [i_8]))));
                            var_31 ^= ((/* implicit */short) (!(((arr_3 [i_0 - 3]) > (((/* implicit */int) (short)-4024))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */int) max(((signed char)-82), (((/* implicit */signed char) (_Bool)1))))) ^ (((((((/* implicit */int) (short)-14879)) + (2147483647))) >> (((3335430596U) - (3335430568U)))))))));
                            arr_33 [i_0] [i_1] [i_7] [i_8] [i_0] = ((/* implicit */long long int) (+(max((2237939171U), (((/* implicit */unsigned int) arr_22 [i_0 - 4] [i_1] [i_8 - 1] [i_8]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_0 + 1] [6ULL] [i_1] [i_8] [i_8 + 2] [i_11 - 1])))))));
                            var_34 = (_Bool)1;
                            arr_37 [i_0] [i_0] [i_7] [i_8] [i_0] = ((/* implicit */signed char) ((arr_31 [3ULL] [(signed char)9] [i_7] [i_8 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                            var_35 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65527))));
                            var_36 ^= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_1] [i_7] [i_8] [i_8 - 1] [i_1])) ? (((/* implicit */int) arr_24 [i_8 - 1] [i_1] [i_1])) : (((/* implicit */int) var_8)))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_41 [i_0] [i_1] [1ULL] [16U] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0 + 1] [i_8 - 1] [i_8 - 2] [i_8] [i_0] [i_8 - 1] [i_8 - 1]))) + (1008522309708170608ULL)))));
                            var_37 = ((/* implicit */unsigned long long int) min((((-6687539125603900257LL) | (((/* implicit */long long int) ((/* implicit */int) max(((short)-31071), (((/* implicit */short) (signed char)124)))))))), (((/* implicit */long long int) ((((((/* implicit */int) (short)31070)) <= (((/* implicit */int) (unsigned char)15)))) && (((/* implicit */_Bool) 499838650755694514ULL)))))));
                            arr_42 [i_0] = ((/* implicit */signed char) -893237164);
                            arr_43 [i_0] [i_1] [i_0] [i_8] [i_12] = ((/* implicit */long long int) max((min((4078347970U), (((/* implicit */unsigned int) (short)14864)))), (((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (-1369355396)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)0)))) : (((unsigned int) var_16))))));
                            arr_44 [i_1] [i_1] [14U] [i_8] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)9))))) ? (min((((/* implicit */unsigned int) arr_24 [i_0 - 1] [i_0 - 1] [i_8 - 1])), (max((((/* implicit */unsigned int) arr_35 [i_0] [10U])), (var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1456330751)) ? (((((/* implicit */int) var_17)) >> (((((/* implicit */int) (short)-14864)) + (14877))))) : (((/* implicit */int) ((((/* implicit */int) (short)31070)) >= (((/* implicit */int) var_8))))))))));
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_2))));
                        var_39 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-9148)) >= (((/* implicit */int) (signed char)9)))))) >= ((~(arr_40 [(unsigned short)16] [i_13] [i_13] [i_13] [i_13] [i_13]))))))));
                        var_40 = ((/* implicit */short) var_8);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((short) arr_10 [i_1] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_1])))));
                            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (short)14868))) >> (((/* implicit */int) (_Bool)1)))))));
                            arr_50 [i_0] [(_Bool)1] [i_7] [i_13] [i_0] [i_7] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_35 [i_0 - 1] [i_0 - 2]));
                        }
                        var_43 = (-(((((/* implicit */_Bool) (short)9147)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14879))) : (arr_7 [i_0] [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_0]))));
                    }
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) (unsigned short)15032))), (min(((unsigned short)15034), ((unsigned short)0))))))) == (min((15019927535729681320ULL), (((/* implicit */unsigned long long int) (signed char)-113)))))))));
                    /* LoopNest 2 */
                    for (short i_15 = 3; i_15 < 19; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            {
                                arr_56 [i_0 - 4] [i_0] [i_7] [i_15 + 2] [i_16] = ((short) (_Bool)1);
                                var_45 = ((/* implicit */signed char) min(((unsigned short)15015), (((/* implicit */unsigned short) (short)-31064))));
                                var_46 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_53 [i_7] [i_16]), (((/* implicit */unsigned char) var_0)))))) : (((var_12) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_15] [i_1])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 1; i_19 < 20; i_19 += 2) 
                        {
                            {
                                arr_66 [i_0] = ((/* implicit */unsigned int) min((((arr_20 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_61 [i_0] [i_17] [i_18] [i_19])) >= (((/* implicit */int) (_Bool)1)))))))), (((unsigned long long int) (~(arr_64 [i_0] [i_0]))))));
                                var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_17))))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15037))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (((((/* implicit */_Bool) (short)17960)) ? (3426816537979870299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_48 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_25 [i_0] [i_0])), (100663296U)))) ? (15019927535729681323ULL) : ((~(arr_34 [i_0] [i_0 - 3] [i_0 - 1] [i_0] [6ULL] [i_0] [i_1])))))) ? (19401412542933803ULL) : (((((/* implicit */_Bool) arr_22 [i_0 - 4] [i_19 - 1] [i_19] [i_19 - 1])) ? (arr_1 [i_0 - 4] [i_19 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 - 4] [i_19 - 1] [i_19 - 1] [i_19 - 1])))))));
                                arr_67 [i_0] [i_18] [i_17] [i_1] [11ULL] [i_0] [i_0] = ((/* implicit */unsigned int) min(((-(min((((/* implicit */unsigned long long int) (unsigned short)50504)), (9975777907622683724ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7LL)) ? ((+(((/* implicit */int) (short)31070)))) : (((/* implicit */int) (_Bool)1)))))));
                                var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0] [(_Bool)1] [i_17] [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) && (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)18)) / (((/* implicit */int) (unsigned short)15014)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
