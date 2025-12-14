/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220519
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
    var_13 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_11 [14] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))) + ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-4749814914034927073LL)))))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(4749814914034927076LL)))))) ? (((((/* implicit */_Bool) var_1)) ? (-4749814914034927093LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_3]))))) : (((/* implicit */long long int) (~(arr_4 [i_0 - 1] [i_1]))))));
                            arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (2147483647) : ((-(((/* implicit */int) (unsigned short)32752))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_5 [i_0 - 1])))))));
                                arr_17 [i_0] [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) var_6);
                            }
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 2147483647))) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3])) : (((/* implicit */int) arr_3 [i_3] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) arr_10 [i_1] [i_1] [(unsigned char)6] [i_3]))))) : (arr_15 [i_0 - 1])));
                        }
                    } 
                } 
                arr_18 [i_1] = (~(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 - 1] [i_0 - 1]))) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))));
                                arr_27 [i_0] [i_5] [i_5] [i_1] [i_7] [i_1] [i_5] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) (((+(((/* implicit */int) arr_3 [i_0 - 1] [i_1])))) << (((((unsigned long long int) arr_19 [i_1] [(_Bool)1] [i_5 + 1])) - (143ULL)))))) : (((/* implicit */_Bool) (((+(((/* implicit */int) arr_3 [i_0 - 1] [i_1])))) << (((((((unsigned long long int) arr_19 [i_1] [(_Bool)1] [i_5 + 1])) - (143ULL))) - (74ULL))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */signed char) min(((-((+(((/* implicit */int) arr_5 [i_0 - 1])))))), (((/* implicit */int) (signed char)-54))));
                    arr_28 [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_5]))))), ((+(6928000788021923423ULL)))));
                }
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_0] [i_9] [i_0] [i_1] = ((/* implicit */int) ((signed char) -2147483637));
                        var_17 *= ((/* implicit */unsigned char) ((int) (unsigned short)57606));
                        arr_35 [(unsigned char)11] [i_1] [(signed char)5] [(short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3490)) ? (arr_29 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((signed char) (signed char)127));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            var_19 *= ((/* implicit */_Bool) (-(((unsigned int) arr_42 [i_0 - 1] [i_11] [i_8] [i_0 - 1] [i_11]))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11] [i_1] [i_11])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_8] [i_1] [i_8]))))) ? (max((((/* implicit */unsigned long long int) ((unsigned short) -1994357551))), (min((var_3), (((/* implicit */unsigned long long int) (signed char)-9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) var_12)))))));
                            var_21 = ((/* implicit */_Bool) min((((unsigned int) (!(((/* implicit */_Bool) 18446744073709551614ULL))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        }
                        var_22 = ((/* implicit */short) max(((-(((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_10])))), (((/* implicit */int) var_10))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [16ULL] [16ULL] [16ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) arr_5 [i_1])), (arr_7 [(_Bool)0] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) arr_24 [i_0 - 1] [i_0] [i_0] [4LL] [i_0])) : ((~(1990722119U))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)59))))) ^ (((/* implicit */int) var_6)))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((short) arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_51 [i_0] [i_1] [17LL] [(unsigned short)8] [(unsigned short)8] [i_14] = ((/* implicit */unsigned short) (+(((unsigned long long int) var_6))));
                            var_26 = ((/* implicit */unsigned long long int) 1990722108U);
                            arr_52 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_47 [i_1] [i_0])))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) arr_54 [i_8] [i_8] [i_8] [22] [i_1] [i_1])) : (((/* implicit */int) (signed char)4))))));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                        {
                            arr_59 [i_1] [i_8] [i_8] [i_1] [i_8] = (~((+(arr_56 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                            arr_60 [i_1] [i_1] = (signed char)-63;
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_55 [i_0] [i_15 - 1] [i_0] [(signed char)15] [i_16] [(signed char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_1] [i_15 - 1] [i_1] [i_15 + 1] [i_16] [i_1]))) : (4294967295U))))))));
                        }
                        var_29 = ((/* implicit */short) ((signed char) 1990722118U));
                    }
                    for (int i_17 = 1; i_17 < 21; i_17 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 359324768)))))))));
                        var_31 = ((/* implicit */_Bool) 6928000788021923425ULL);
                    }
                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 21; i_18 += 2) /* same iter space */
                    {
                        arr_66 [i_0] [i_1] [i_1] [i_18 + 3] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (signed char)113)))));
                        arr_67 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]))));
                        arr_68 [i_0 - 1] [i_0] [18] [i_1] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) arr_53 [i_1] [i_1] [i_18 + 1] [i_18 + 4] [i_18] [i_18 + 4])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) 5167075689637419516LL)) ? (arr_24 [i_18] [i_18 + 2] [i_18 + 4] [10ULL] [i_18]) : (((/* implicit */int) (!(((/* implicit */_Bool) -4749814914034927090LL))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        arr_71 [i_1] [i_1] [i_8] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [20LL]))))));
                        /* LoopSeq 2 */
                        for (signed char i_20 = 0; i_20 < 25; i_20 += 1) 
                        {
                            arr_74 [i_0] [i_1] [i_8] [i_0] [i_1] = ((/* implicit */_Bool) ((short) (_Bool)1));
                            arr_75 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) < (-4749814914034927073LL))))));
                            var_33 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (unsigned short)26041)))) ? (12088459884871651358ULL) : (16910512825659563041ULL)));
                        }
                        for (signed char i_21 = 0; i_21 < 25; i_21 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
                            var_35 *= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_65 [i_8] [i_1] [i_1] [(signed char)18] [i_8] [2]))));
                            var_36 *= ((/* implicit */short) var_9);
                        }
                        arr_80 [i_0] [i_0] [i_8] [i_19] [i_19] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)7)) + (-10039810)))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned char)58))));
                    }
                    var_38 *= ((/* implicit */_Bool) 1990722109U);
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (+(((int) max((((/* implicit */unsigned long long int) 986436463U)), (6928000788021923417ULL)))))))));
                }
                for (unsigned short i_22 = 0; i_22 < 25; i_22 += 1) /* same iter space */
                {
                    arr_83 [i_1] [i_1] [i_22] = ((/* implicit */signed char) (-(11518743285687628193ULL)));
                    arr_84 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (short)-3691)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_1] [i_1])))))))));
                    var_40 *= ((/* implicit */signed char) max((((/* implicit */int) var_6)), (min((((/* implicit */int) var_8)), (min((((/* implicit */int) (unsigned char)175)), (-632713164)))))));
                    arr_85 [i_1] = ((/* implicit */unsigned short) arr_44 [i_1] [i_1]);
                }
            }
        } 
    } 
}
