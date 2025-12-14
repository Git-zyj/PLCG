/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235849
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) var_10))))) < (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3])))))));
        arr_3 [i_0] = ((/* implicit */int) max(((unsigned short)64405), (((/* implicit */unsigned short) max(((signed char)-68), (arr_1 [i_0 + 3]))))));
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1 + 1] = ((/* implicit */signed char) max((((unsigned long long int) min(((unsigned short)47355), (((/* implicit */unsigned short) (signed char)-41))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)51430)))))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) var_5)))) ^ (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 2]))))) : (((/* implicit */int) max(((unsigned short)51416), ((unsigned short)51415))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_11 [(unsigned short)7] [2] [i_2] = max((((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [(signed char)17])))))))), (arr_10 [i_1 + 2] [i_1 + 3] [i_1 + 1]));
            arr_12 [i_1] [i_2] = max((((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51442))))), (((((/* implicit */_Bool) (unsigned short)51447)) ? (((unsigned long long int) (signed char)-2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_10))))))));
            /* LoopSeq 4 */
            for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) (+(arr_9 [i_2] [i_2] [(signed char)0])));
                            arr_20 [i_4] [i_1] [i_2] [i_3] [i_2] [(signed char)21] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)51455))))) ? (min((4030001696U), (((/* implicit */unsigned int) (unsigned short)39531)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_1 + 1] [i_1 + 1] [i_3 - 2] [(signed char)13]), (arr_16 [i_1 + 1] [i_4] [i_3 - 2] [i_4])))))));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44182)) + (((((/* implicit */int) arr_5 [i_1 + 2])) * (((/* implicit */int) arr_5 [i_1 + 3]))))));
                            var_15 = ((/* implicit */int) ((unsigned long long int) arr_16 [i_2] [i_3] [i_4] [i_5]));
                        }
                    } 
                } 
                arr_22 [i_3 - 2] [i_2] [i_1 - 1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1] [i_3 - 1])) ? (((/* implicit */int) arr_10 [i_1 + 3] [i_1 - 1] [i_3 - 2])) : (((/* implicit */int) var_9)))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_9 [i_2] [i_2] [i_2]))) ? (((unsigned long long int) arr_17 [(unsigned char)15] [i_2] [i_3 - 2] [(unsigned char)15] [i_1] [i_2])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51412)) ? (((/* implicit */int) (unsigned short)36550)) : (((/* implicit */int) (signed char)126)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_19 [i_3] [i_3] [i_2] [i_2] [i_3])))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [(signed char)19] [i_2])) : (((/* implicit */int) arr_5 [i_2])))) == (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (_Bool)1)))))))));
            }
            for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_17 = min((max((((int) arr_24 [i_1])), (((/* implicit */int) ((signed char) 2913394879U))))), (((/* implicit */int) (unsigned short)14025)));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_7 + 4] [i_2] [i_1 - 1] [i_6 - 2] [i_6] [i_7])) ? (1098692630408241088ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7 + 2] [i_2] [i_1 + 3] [i_6 - 1] [i_2] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_31 [i_7] [i_7] = ((((/* implicit */int) arr_26 [i_6] [i_2] [i_1 + 1] [i_6] [i_8])) / (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)38462))))));
                        arr_32 [i_7] [i_2] [i_2] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_8] [17] [i_1]))));
                        var_19 = ((signed char) (signed char)1);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_7] [i_2] [i_6 - 1] [i_2] [i_7])) ? (arr_27 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 23; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((int) arr_13 [i_9 - 3] [i_6 - 1]));
                        arr_35 [i_9] [i_7] [i_6 + 1] [i_7] [i_1] = ((((/* implicit */_Bool) arr_13 [i_9 - 4] [i_1 + 1])) ? (((/* implicit */int) arr_13 [i_9 - 4] [i_1 + 2])) : (((/* implicit */int) arr_13 [i_9 - 2] [i_1 + 1])));
                        var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_1] [i_2] [20ULL] [i_7] [i_6] [i_7])))) - (12013160726054028512ULL));
                        arr_36 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_26 [i_1] [i_2] [i_6 + 1] [i_7] [i_9]);
                        var_23 = arr_24 [i_1];
                    }
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    arr_40 [5LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6 + 1] [i_6 + 1] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_6]))))) : (((/* implicit */int) arr_29 [i_10] [i_6] [i_10] [i_10] [2] [i_1 + 3]))));
                    var_24 = ((((/* implicit */int) arr_13 [i_6] [i_6 - 1])) + (-2147483643));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_10] [i_6 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_10] [i_2] [i_2] [i_1 - 1])) : (((/* implicit */int) arr_29 [(unsigned char)18] [i_6 - 2] [i_6] [i_6] [i_1] [i_1]))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    arr_45 [i_11] [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((int) arr_43 [i_6] [(signed char)18] [i_6 + 1]));
                    arr_46 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1 + 1] [i_6 - 1] [i_6 - 1])) ? (((((/* implicit */int) (short)6606)) / (((/* implicit */int) arr_43 [i_6] [(short)3] [i_1])))) : (((((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_2])) / (((/* implicit */int) arr_42 [i_1] [i_6]))))));
                }
                for (unsigned int i_12 = 4; i_12 < 22; i_12 += 3) 
                {
                    arr_51 [i_1] [i_2] [i_6] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_1] [i_6 - 2] [i_6] [i_12] [i_12 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1784384688)) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_12]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_8))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)51437)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [i_2])))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 3; i_13 < 22; i_13 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */unsigned long long int) -2147483642)) : (1ULL))) : (((/* implicit */unsigned long long int) ((long long int) 1280695789U)))))) ? (((((/* implicit */_Bool) arr_25 [i_13 - 2] [i_12 - 1] [i_6 + 1] [i_1 + 3] [i_13] [i_1 + 3])) ? (4294967281U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) arr_52 [i_13] [i_2] [i_2] [i_2] [i_12] [i_13 - 2] [i_13])) : (((/* implicit */int) (unsigned char)209))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))));
                        arr_55 [i_13] [i_2] [i_2] [16LL] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-94)) ? (1381572409U) : (3014271491U)))) ? (((/* implicit */int) max((arr_52 [i_13] [i_13 + 1] [i_6] [i_6 + 1] [i_2] [i_1 + 3] [i_2]), (arr_52 [i_13] [i_13 + 1] [i_6] [i_6 - 1] [i_2] [i_1 - 1] [i_1])))) : (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) arr_47 [i_1] [i_6] [i_12] [(unsigned short)9])))), ((!(((/* implicit */_Bool) arr_53 [i_13] [i_12] [i_6 - 1] [i_2] [i_1])))))))));
                    }
                }
                var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((arr_26 [i_1] [i_1] [i_2] [i_6] [i_2]), (((/* implicit */unsigned short) (short)27094)))), (((/* implicit */unsigned short) arr_33 [i_6]))))), (((unsigned long long int) var_6))));
            }
            for (unsigned short i_14 = 2; i_14 < 23; i_14 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) (unsigned char)95);
                var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_19 [i_1 + 2] [i_14 + 1] [i_14] [i_14 - 2] [i_14])) ? (arr_27 [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1 - 1] [i_14 - 1] [i_14] [i_14 - 1] [i_14]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)113)), ((unsigned char)141))))));
            }
            /* vectorizable */
            for (unsigned short i_15 = 2; i_15 < 23; i_15 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) arr_54 [i_17] [i_16] [i_15] [i_16] [i_16] [i_17]);
                            var_31 = ((/* implicit */signed char) (!(arr_60 [i_1 + 1] [i_15 - 1])));
                            arr_64 [i_17] [i_15] = arr_13 [i_2] [i_17];
                            arr_65 [i_1] [i_2] [i_2] [(unsigned short)7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_53 [i_15 - 2] [i_2] [i_15] [i_1 + 1] [(signed char)5]))));
                        }
                    } 
                } 
                arr_66 [i_1] [i_1] [i_15] = ((/* implicit */short) 3880158903U);
            }
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_32 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned char)187)))));
            /* LoopSeq 1 */
            for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                var_33 = ((/* implicit */int) var_7);
                arr_72 [i_1 + 1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)111)) ? (-430372569578331114LL) : (((/* implicit */long long int) 414808383U))));
            }
        }
        var_34 = ((/* implicit */_Bool) (((_Bool)1) ? (7469273958097168562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7565)))));
        arr_73 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_70 [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 1])) + (var_2))), (((/* implicit */unsigned long long int) var_4))));
    }
    /* vectorizable */
    for (signed char i_20 = 1; i_20 < 21; i_20 += 3) /* same iter space */
    {
        arr_77 [i_20] [i_20 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [12U] [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_71 [i_20] [i_20])) : (((/* implicit */int) arr_5 [i_20]))))) - (((((/* implicit */_Bool) arr_15 [i_20] [i_20 + 3] [i_20 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_20] [(signed char)14]))) : (arr_39 [i_20 - 1] [i_20] [i_20] [i_20] [i_20 - 1])))));
        var_35 = ((signed char) ((((/* implicit */_Bool) arr_23 [i_20] [23ULL] [i_20] [21])) ? (arr_70 [i_20] [i_20] [i_20 + 3] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_20] [i_20] [i_20 + 1] [i_20])))));
        arr_78 [i_20] = ((/* implicit */unsigned int) arr_16 [i_20] [i_20] [i_20] [i_20]);
    }
    for (signed char i_21 = 1; i_21 < 21; i_21 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            for (unsigned short i_23 = 1; i_23 < 23; i_23 += 4) 
            {
                {
                    arr_88 [(_Bool)1] [i_21] [i_22] [i_23] = ((/* implicit */signed char) var_0);
                    arr_89 [(signed char)6] [i_22 - 1] [i_23] = ((/* implicit */long long int) min((10418206047882493109ULL), (((/* implicit */unsigned long long int) -5009997700138749206LL))));
                }
            } 
        } 
        arr_90 [i_21] [i_21] = (signed char)63;
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_10 [i_21] [i_21] [i_21])) + (((/* implicit */int) arr_25 [i_21] [i_21] [i_21 + 3] [i_21] [(_Bool)1] [i_21])))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_21 + 1] [i_21 + 1] [i_21 + 1])))));
        arr_91 [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58149)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (unsigned char)179))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-101)), ((unsigned char)60)))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (16406883540591675868ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((arr_18 [i_21] [i_21] [(_Bool)1] [i_21 + 1] [i_21] [i_21] [i_21]) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_21] [i_21] [i_21] [i_21] [(unsigned char)12])) ? (((/* implicit */int) arr_10 [i_21 - 1] [i_21 - 1] [i_21])) : (((/* implicit */int) var_9))))) & (arr_69 [i_21 + 2] [i_21 + 2] [i_21 + 1] [i_21 + 1])))));
    }
    var_37 = ((/* implicit */signed char) var_2);
    var_38 = var_12;
}
