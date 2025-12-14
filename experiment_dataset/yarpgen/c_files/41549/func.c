/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41549
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
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [(_Bool)1] [i_1 + 1] [i_0] = ((/* implicit */int) ((short) (+((-(((/* implicit */int) (signed char)93)))))));
                var_16 = ((/* implicit */unsigned char) arr_5 [(unsigned short)2]);
                var_17 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
                var_18 = ((/* implicit */int) ((unsigned short) 810923347));
                arr_8 [i_0] = ((/* implicit */signed char) ((_Bool) arr_5 [i_0 - 1]));
            }
        } 
    } 
    var_19 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) var_9))))), (((((/* implicit */long long int) ((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) ^ (((2496217728762013282LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 4; i_2 < 22; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2 - 3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 - 2])) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) max((arr_13 [i_2 - 2]), (((/* implicit */unsigned short) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) >> (((/* implicit */int) arr_22 [i_3]))))) && (((/* implicit */_Bool) var_9))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_16 [i_5] [20ULL] [i_4]))));
                                var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned short)46130)) / (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_2] [14ULL])))) * (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_2] [i_6 - 2]))))));
                            }
                        } 
                    } 
                    arr_23 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_18 [i_2] [i_2 - 1] [i_4])) ? (((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_3])))), (((arr_20 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]) - (((/* implicit */int) arr_18 [i_4] [i_2 + 3] [i_4]))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 24; i_7 += 2) 
                {
                    for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_28 [20] [i_2] [i_7 + 1] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_7 + 1] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_2] [i_3] [i_3])))))));
                            var_24 = ((/* implicit */unsigned char) (+(((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_26 [i_3] [i_2] [i_7] [i_8]))))));
                            var_25 = ((/* implicit */unsigned short) arr_21 [i_2] [i_3] [i_8] [i_8] [i_8 - 1]);
                        }
                    } 
                } 
                arr_29 [i_2] [i_2] [i_3] = ((/* implicit */int) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 23; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_26 += var_1;
                            var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_2 + 1] [i_9 - 2] [i_3])) ? (max((var_5), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 1; i_11 < 18; i_11 += 3) 
    {
        for (unsigned short i_12 = 1; i_12 < 18; i_12 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned short) (~(min(((~(var_3))), ((~(((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    arr_42 [i_11] [i_11] [i_13] [i_13] = ((/* implicit */unsigned short) (+(arr_17 [i_12 - 1] [i_12 + 2] [i_13] [i_12 + 1])));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        arr_46 [i_11] [i_12] [i_13] [i_13] [i_13] [i_11 - 1] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) var_2)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)23136)))));
                            arr_51 [i_11] [(unsigned char)12] [i_15] [i_14] [i_15] = ((/* implicit */int) arr_12 [i_15] [i_15]);
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                        {
                            arr_56 [i_11] [i_12] [i_14 - 2] [i_14] [i_14] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_13])) >> (((/* implicit */int) arr_22 [i_13]))));
                            var_30 = ((/* implicit */unsigned long long int) arr_31 [i_11] [i_13] [(unsigned char)22]);
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 3) 
                        {
                            arr_60 [i_13] [i_12] [i_13] |= (-(arr_43 [i_17 - 1] [i_17 - 1] [i_11 + 2] [i_14 - 3]));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_11] [i_12 + 1] [i_11 - 1] [i_17 + 1] [i_14 - 2] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_49 [i_11] [i_11] [i_11 - 1] [i_17 + 1] [i_14 - 2] [i_17]))));
                            var_32 = ((/* implicit */unsigned long long int) arr_44 [i_11] [i_11] [i_11] [i_11]);
                        }
                    }
                    for (long long int i_18 = 2; i_18 < 19; i_18 += 4) /* same iter space */
                    {
                        arr_63 [i_11 + 1] [i_13] [i_13] [i_18 + 1] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) var_13)) : (var_7))) : (var_7)));
                        arr_64 [i_11] [(unsigned char)16] [i_11] [i_12] [i_11] [i_13] = ((/* implicit */unsigned short) ((signed char) arr_57 [i_12 + 1] [i_12 - 1] [i_12 - 1] [(signed char)12] [i_12] [i_12 - 1] [i_12 - 1]));
                    }
                    for (long long int i_19 = 2; i_19 < 19; i_19 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-(arr_65 [i_11] [i_11] [(_Bool)1] [i_11 + 1] [(_Bool)1] [(_Bool)1]))))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) ((short) arr_52 [(unsigned short)11] [i_13] [i_13] [i_13] [i_13]))) : (arr_9 [i_13] [i_19 + 1])));
                    }
                    for (signed char i_20 = 1; i_20 < 17; i_20 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
                        {
                            arr_71 [i_11 - 1] [i_21] [i_13] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_13] [i_13] [i_13])) ? (((arr_21 [i_21] [i_21] [i_13] [i_20] [i_21]) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_50 [i_11] [i_11] [i_11 + 1] [i_21] [i_20 + 2] [i_12 + 1]))));
                            var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */int) arr_62 [i_11 + 1] [i_12 + 1] [i_13] [i_20 + 1] [i_21])) << (((((/* implicit */int) arr_62 [i_21] [i_12 - 1] [i_13] [i_12 - 1] [i_11])) - (36)))))));
                        }
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_2))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_75 [i_11] [i_12] [i_12] [i_12] [i_13] [i_22] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_13 [i_11])))));
                        arr_76 [i_22] [i_11] [i_12] [i_13] [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_13)))));
                        var_37 = ((/* implicit */signed char) arr_40 [i_11] [i_12] [i_12] [i_22]);
                    }
                    for (int i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        var_38 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) arr_78 [i_11] [i_11 - 1] [i_11] [i_11 + 1])) : (var_14)));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (-735047286)));
                        arr_81 [i_11] = ((/* implicit */int) ((((/* implicit */int) arr_70 [i_11] [i_11] [i_11] [i_13] [i_23])) < (((/* implicit */int) var_6))));
                        var_40 = ((/* implicit */_Bool) var_1);
                    }
                    var_41 = ((/* implicit */signed char) ((short) ((signed char) var_1)));
                }
                arr_82 [0ULL] [i_11] [0ULL] = ((/* implicit */short) ((((((/* implicit */int) arr_72 [i_11] [i_12 - 1] [i_11 + 2] [i_11])) * (((/* implicit */int) (unsigned short)55145)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))));
                arr_83 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10365)) / (((/* implicit */int) (signed char)-1))))) ? (max((((/* implicit */unsigned long long int) var_14)), (var_5))) : (((var_15) ? (11646007072583442345ULL) : (((/* implicit */unsigned long long int) arr_66 [i_12] [i_12 + 1] [i_12] [i_11]))))))) ? (((((/* implicit */_Bool) var_9)) ? (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned short)30058)))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_65 [i_11] [i_11] [i_11] [i_12] [i_12] [i_11])) ? (((/* implicit */int) (unsigned short)60525)) : (((/* implicit */int) (_Bool)1)))))))));
                arr_84 [(unsigned short)7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)55147)) : (((/* implicit */int) arr_58 [i_11 - 1] [i_11 - 1] [i_12 + 1] [i_12 - 1])))), (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_42 = (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (unsigned short)55139)) << (((((/* implicit */int) (signed char)-111)) + (114))))));
}
