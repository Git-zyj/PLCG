/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203662
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
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((arr_3 [4] [(signed char)4]) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2147483647) : (arr_2 [i_1 - 1])))) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (3757828108617757317LL))) - (23LL))))))));
            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_15), (var_13)))) != (((/* implicit */int) (short)-32766)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)177)) ? (arr_3 [(signed char)6] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (2422103372415845192LL))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (unsigned char)196))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (arr_4 [1] [(unsigned char)9] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_7 [i_0] [(signed char)9] [2ULL] [i_1] = ((/* implicit */unsigned char) (signed char)-69);
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (var_14) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)5] [i_1 + 1] [(signed char)2]))) : (arr_4 [i_0] [i_1] [i_2])))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-119)) : (-310433410)))))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1956654600)) ? (arr_2 [i_0]) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) min(((unsigned char)203), (((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_1 + 1] [(signed char)8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50))))))), (((((/* implicit */_Bool) -5921100552095216328LL)) ? (((/* implicit */int) (unsigned char)59)) : (0))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5921100552095216327LL)) ? (((/* implicit */int) ((((unsigned long long int) arr_2 [i_0])) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (var_14))))))) : (((/* implicit */int) (unsigned char)197))));
                            arr_14 [i_0] [(signed char)4] [i_2] [i_1] [i_4 - 2] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_11 [(signed char)6] [i_3] [i_1 - 1] [i_4] [(signed char)6] [9ULL] [5])), ((-(-5921100552095216328LL)))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)59)) ^ (((/* implicit */int) (signed char)-1))))) ? (min(((+(arr_2 [i_1]))), (((((/* implicit */int) (short)-28524)) * (((/* implicit */int) (unsigned char)202)))))) : (((((((/* implicit */int) ((short) 18446744073709551613ULL))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */short) var_6)), (arr_11 [6ULL] [i_0] [i_0] [i_2] [i_3] [i_4 - 1] [2LL])))) - (58)))))));
                            var_23 = ((/* implicit */signed char) 14601601587322753105ULL);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_10))) % (min((arr_2 [i_1 - 1]), (((/* implicit */int) arr_5 [i_1 + 1] [i_4 - 1] [i_4 - 2] [i_1]))))));
                        }
                    } 
                } 
            }
            for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
            {
                arr_18 [7] [i_1] [i_1] = ((int) min((arr_15 [i_0] [i_5 + 2] [3ULL] [i_1]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5 + 2])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])))))));
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)196))));
            }
            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5921100552095216344LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (min((((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_1] [i_1] [i_6]) % (310433383)))), ((~(0ULL)))))));
                var_25 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                var_26 -= var_9;
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) min((var_27), (max((((((/* implicit */_Bool) (~(-310433409)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-63)) <= (((/* implicit */int) (signed char)48))))) : (var_8))), (((/* implicit */int) var_9))))));
                            arr_29 [i_1] [i_1] [2ULL] [9] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_4)), (5921100552095216333LL)))))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)-35), (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_7] [i_1] [i_1]))))) : (((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_15 [i_0] [i_1] [i_6] [i_1])))));
            }
            for (long long int i_9 = 3; i_9 < 8; i_9 += 4) 
            {
                var_29 = ((/* implicit */signed char) (short)-17711);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned char i_11 = 1; i_11 < 7; i_11 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) -310433420);
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((((/* implicit */int) arr_15 [i_1] [i_9] [(signed char)0] [i_1])) * (((/* implicit */int) (unsigned char)59)))) : ((-(((/* implicit */int) arr_33 [5] [i_1] [i_9 - 3] [i_1]))))))) ? (min((310433396), (((/* implicit */int) arr_36 [i_9 + 2] [i_11] [i_11 - 1] [(short)5] [i_11])))) : ((+(((/* implicit */int) (signed char)92))))));
                            var_32 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_21 [i_0] [i_1] [(short)5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_1] [i_1] [i_11]))) / (-3947938544499231111LL)))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_1])) ? (9510259919761176865ULL) : (((/* implicit */unsigned long long int) arr_27 [(unsigned char)3] [i_1] [i_9] [i_10] [(signed char)3])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 310433375)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((unsigned long long int) (signed char)23))))))));
                            var_33 = ((/* implicit */int) (signed char)23);
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((310433363) & (((/* implicit */int) var_15))))) ? (arr_32 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (-777848327))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (-5921100552095216328LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) 1883723049)) ? (((/* implicit */unsigned long long int) var_2)) : (9ULL))))) : (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_1] [(unsigned char)6] [(unsigned char)6]))));
                arr_39 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_1] [i_9]))) | (arr_0 [i_9])))))));
                arr_40 [i_0] [i_1] [i_9 + 2] = ((/* implicit */short) var_15);
            }
            arr_41 [(signed char)6] [i_1] [(short)6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned char)2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-49)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (140))) - (13)))))) : (var_0)));
        }
        var_35 += ((/* implicit */unsigned char) min((((((((/* implicit */int) (signed char)-72)) | (((/* implicit */int) (unsigned char)36)))) * (((/* implicit */int) (signed char)83)))), (((/* implicit */int) (signed char)-51))));
    }
    for (int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            for (long long int i_14 = 2; i_14 < 9; i_14 += 4) 
            {
                {
                    var_36 += ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((2147483647) / (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) arr_23 [i_12] [i_13] [i_14 + 1] [i_14]))))));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        var_37 = ((/* implicit */long long int) ((var_0) * (((/* implicit */unsigned long long int) (+(((int) arr_6 [(signed char)1] [(signed char)1] [i_15])))))));
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)48)))) ? (((((/* implicit */_Bool) min((var_9), (arr_13 [i_15] [i_13] [i_12])))) ? (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (9510259919761176865ULL))) : (((/* implicit */unsigned long long int) -2075829587)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8936484153948374751ULL)))))))))));
                    }
                    for (int i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((min((arr_50 [i_12] [i_13] [i_14 - 2] [i_16 - 1]), (((/* implicit */int) arr_43 [i_12] [i_14 - 1])))), (max((2075829586), (((/* implicit */int) var_3))))));
                        var_40 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) var_12))), (arr_47 [i_16 - 1] [i_13] [(short)3]))))));
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((-310433375) >= (((/* implicit */int) (!(((/* implicit */_Bool) 2075829563))))))))));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((int) (short)32230))))) ? (arr_25 [(signed char)0] [i_13] [(signed char)1] [i_14 + 1] [i_16]) : (var_8))))));
                    }
                    var_43 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_25 [i_14] [i_14] [i_13] [i_13] [i_12])) ? (0) : (((/* implicit */int) (short)-13464)))) : (((/* implicit */int) arr_12 [i_12] [i_12] [i_13] [i_13] [i_13] [i_14] [(unsigned char)8])))) | ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (-310433417)))))));
                }
            } 
        } 
        arr_56 [i_12] [6] = ((/* implicit */signed char) 2147483647);
    }
    for (int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
    {
        var_44 = var_7;
        var_45 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_47 [9ULL] [i_17] [(signed char)1])) ? (arr_28 [i_17] [i_17] [i_17] [i_17] [(signed char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))));
    }
    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (signed char)120))));
    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (8936484153948374738ULL)));
    var_48 = (signed char)-5;
}
