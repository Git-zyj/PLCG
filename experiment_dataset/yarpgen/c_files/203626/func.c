/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203626
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) (signed char)-6);
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 + 1] = ((/* implicit */long long int) var_2);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [(signed char)18] = ((/* implicit */signed char) ((unsigned short) var_10));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) 
                        {
                            {
                                arr_22 [i_1] [i_6] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_14 [i_1] [i_5] [i_1 - 1] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)121)) ^ (-1778419322)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_1] [i_1] [11] [i_6] [i_1]))))) : (((var_6) / (((/* implicit */unsigned int) arr_16 [i_1]))))))));
                                arr_23 [i_0] [i_1] [i_5] [i_0] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) ((signed char) (short)-10800))) : ((((_Bool)1) ? (1167518163) : (((/* implicit */int) (_Bool)1))))));
                                arr_24 [i_0] [i_1] [i_0] [(signed char)18] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60379))) - (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] [i_7 + 2]))))), (arr_8 [i_1 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] [1U] [i_1] = ((/* implicit */signed char) ((((_Bool) (-(1753121738)))) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [10U] [i_5] [i_8] [i_1] [i_8])) && (((/* implicit */_Bool) arr_6 [i_0])))))));
                        arr_29 [i_5] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)111)) >> (((arr_14 [i_5] [i_1 - 2] [i_5] [i_8]) + (1181944466))))) & (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_33 [i_5] [i_1 + 1] [i_5] [i_8] [i_5] = ((/* implicit */unsigned short) arr_25 [i_0] [i_8 + 3] [i_5] [i_0]);
                            arr_34 [i_1] [i_1] = ((/* implicit */int) ((short) ((((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) -1753121739)) : ((((_Bool)1) ? (-5744265508872817809LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_35 [i_1] = ((/* implicit */unsigned long long int) var_5);
                            arr_36 [3U] [i_1] [i_1 + 2] [i_5] [i_1 + 2] [i_1] [i_0] = ((/* implicit */unsigned int) (short)-4131);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] [i_5] [i_8] [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
                            arr_40 [i_1] [i_1] = ((/* implicit */unsigned int) (~(-1753121761)));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [i_1] [i_0] [i_0] [13U] = ((/* implicit */unsigned short) 1167518163);
                            arr_46 [i_1] [i_1] [i_5] [i_8] [i_11] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_27 [i_1 - 3] [i_5] [(short)2] [i_11]) : (arr_16 [i_1])))));
                        }
                        arr_47 [i_0] [i_1] [i_0] = (_Bool)0;
                    }
                }
                for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    arr_51 [i_0] [(unsigned char)20] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_0] [10] [i_12])) ? (((long long int) arr_19 [i_12] [i_12] [i_12 - 1] [i_12] [i_12] [i_1 + 2])) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_52 [i_0] [i_1 - 2] [i_12 - 2] [i_12] &= ((/* implicit */_Bool) arr_27 [i_12 + 2] [i_12 + 2] [20U] [(unsigned short)16]);
                    arr_53 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */unsigned short) var_3);
                }
                for (unsigned long long int i_13 = 2; i_13 < 22; i_13 += 3) /* same iter space */
                {
                    arr_57 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_1 + 1] [(_Bool)1] [i_13] [i_13 + 2]);
                    arr_58 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_3 [i_1] [i_0])) | (((/* implicit */int) (unsigned char)107)))) : (((/* implicit */int) ((unsigned char) arr_10 [i_1] [i_1] [i_1]))))))));
                    arr_59 [i_0] [i_0] [i_0] [i_13 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned short)60393)) : (((/* implicit */int) (signed char)87))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(((arr_5 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_13])))))))));
                    arr_60 [i_0] [i_1] [i_1 - 3] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)111)), (((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [12LL] [12LL] [12LL] [i_1])) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_4 [i_1] [i_13 - 1] [i_13 - 2] [i_1]))))));
                }
                arr_61 [i_1] [i_1] = ((/* implicit */short) arr_3 [i_0] [i_0]);
                arr_62 [(unsigned char)22] [i_1] = arr_30 [i_1] [i_0] [i_1 + 1] [i_0] [1U] [i_0] [i_0];
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_14 = 3; i_14 < 12; i_14 += 3) 
    {
        arr_66 [i_14] [3] = arr_55 [i_14] [i_14];
        arr_67 [8U] = ((/* implicit */int) ((_Bool) arr_4 [(unsigned char)18] [i_14 + 1] [i_14] [(unsigned char)18]));
    }
    for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_75 [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) (((!(((_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (min((((/* implicit */int) (_Bool)1)), (arr_42 [i_15] [i_15]))))))) : (var_6)));
                    arr_76 [i_15] [i_15] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_15] [i_15] [(unsigned short)12]) | (arr_10 [i_15] [i_16] [i_17])))) ? (((((/* implicit */_Bool) arr_10 [i_15] [i_16] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60363))) : (arr_10 [i_15] [i_16] [i_17]))) : (((((/* implicit */_Bool) arr_10 [i_15] [i_16] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (arr_10 [i_15] [(_Bool)1] [i_17])))));
                    arr_77 [i_15] [i_16] [i_15] [i_16] = (~(((arr_7 [i_15] [i_15] [i_15] [i_15] [i_15]) ? (((/* implicit */int) arr_25 [i_15] [i_16] [i_15] [i_15])) : (-1753121732))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            for (signed char i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                {
                    arr_84 [i_15] [i_15] [i_19] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((6291456) < (6291488))))));
                    arr_85 [(signed char)2] [(signed char)2] [(signed char)2] [(unsigned char)4] &= arr_49 [i_15] [3U];
                }
            } 
        } 
        arr_86 [i_15] = (_Bool)1;
    }
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min(((_Bool)1), (var_5))))))) : (var_6)));
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 20; i_20 += 3) 
    {
        for (short i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            {
                arr_91 [i_20] = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3319091630U)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (_Bool)1))))) ? (-4126124619424154693LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-120))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_37 [i_20] [i_20] [i_21] [i_20] [i_20])))) != ((~(arr_8 [i_20])))))))));
                /* LoopNest 3 */
                for (unsigned int i_22 = 0; i_22 < 20; i_22 += 2) 
                {
                    for (long long int i_23 = 1; i_23 < 19; i_23 += 3) 
                    {
                        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                        {
                            {
                                arr_98 [i_24] [i_20] [i_22] [i_20] [i_20] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_99 [i_20] [i_21] [i_22] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_23 + 1] [i_23 + 1] [i_24 + 1]))))) ? (((((/* implicit */_Bool) -1676766982)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) ((_Bool) (signed char)121))))) : (((/* implicit */int) arr_9 [i_22] [i_23] [i_20] [i_20] [i_22]))));
                                arr_100 [i_20] [i_21] [i_22] [i_21] [(signed char)11] [i_24] = ((/* implicit */unsigned short) arr_26 [(_Bool)1] [i_23] [i_22] [(_Bool)1] [i_21] [i_20]);
                                arr_101 [i_21] [i_22] [i_24] = ((/* implicit */short) ((var_7) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_14 [i_21] [i_21] [i_21] [i_21]) : (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))))))))));
                            }
                        } 
                    } 
                } 
                arr_102 [i_21] [i_20] = ((/* implicit */unsigned int) arr_97 [i_21] [i_21] [9LL] [i_21] [i_21]);
                arr_103 [i_20] [i_21] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (_Bool)1);
}
