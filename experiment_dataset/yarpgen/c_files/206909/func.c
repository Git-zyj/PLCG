/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206909
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
    var_15 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((signed char) 1856052705));
                                var_17 = ((/* implicit */unsigned char) ((signed char) var_3));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 4; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_18 [i_5] [i_5] [i_5 - 1] [i_5] [(signed char)18] = ((/* implicit */_Bool) ((long long int) ((15ULL) / (((/* implicit */unsigned long long int) -8809734391226985402LL)))));
                                arr_19 [i_5] [i_0] [i_1] [i_5] [i_5] [i_6] [i_7 + 1] = ((/* implicit */_Bool) ((unsigned char) ((((4348339192674404856ULL) & (((/* implicit */unsigned long long int) 7909835222248830190LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))));
                            }
                        } 
                    } 
                    var_18 = ((unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3782082360U)))), (((((/* implicit */_Bool) 0ULL)) ? (arr_13 [i_0] [i_5] [i_5] [i_5]) : (((/* implicit */int) (_Bool)0))))));
                    arr_20 [i_1] [i_5] [i_1] = max((((6345211724621486146LL) - (((/* implicit */long long int) arr_13 [i_5 + 1] [i_5] [i_5] [i_0 + 2])))), (((/* implicit */long long int) ((max((((/* implicit */int) (unsigned short)1260)), (-1206008020))) > (((((/* implicit */_Bool) arr_4 [(unsigned short)15] [(_Bool)1] [16])) ? (((/* implicit */int) arr_9 [i_1] [(short)16] [i_1] [i_1] [(short)16] [(signed char)3])) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [(signed char)0] [i_0] [i_0])) == (max((20ULL), (((/* implicit */unsigned long long int) max((922932981), (((/* implicit */int) (unsigned char)233)))))))));
                }
                for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (short i_10 = 4; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551614ULL))) ? (max((20ULL), (2251799813685247ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (18446744073709551608ULL))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_4 [i_1] [i_8 + 1] [14]), (((/* implicit */short) arr_3 [i_0]))))), (262143)))))))));
                                var_21 = ((/* implicit */long long int) (+(var_14)));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17179869183LL))))), (((unsigned long long int) 1915253118))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_8] [i_8] [(signed char)10] [i_10 + 1]))) + (var_4))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)240)))))));
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_21 [i_8] [i_10 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (arr_17 [i_0] [i_1] [i_9] [i_10]) : (arr_13 [i_1] [i_8] [i_8] [i_1])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_8 - 1] [i_8 - 3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        for (signed char i_12 = 4; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_24 = (signed char)107;
                                var_25 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (signed char)1)), (((((/* implicit */int) arr_26 [(signed char)18] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_1 [i_8]))))))));
                                arr_35 [i_8] [i_11] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_31 [i_8 - 2] [i_8] [i_8 + 2] [i_8] [i_8] [(short)17]))), ((~(arr_31 [i_11] [i_8] [i_8 + 2] [i_8] [i_8] [i_0])))));
                                var_26 = ((/* implicit */unsigned char) arr_17 [(unsigned char)19] [i_0 - 1] [i_8 + 2] [i_0]);
                            }
                        } 
                    } 
                    arr_36 [i_0 + 1] [i_0 + 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_32 [(unsigned char)6] [(unsigned char)6] [i_8] [i_0 + 2] [i_0])) / (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (4611686018427387903ULL))), (((/* implicit */unsigned long long int) (+(arr_31 [i_8] [i_8] [i_0 - 1] [i_0 + 2] [i_8] [i_0]))))))));
                    arr_37 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((unsigned int) (_Bool)1)) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))));
                    arr_38 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-127)) != (((/* implicit */int) (unsigned short)64295)))))));
                }
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    var_27 -= ((/* implicit */int) (_Bool)1);
                    var_28 = ((/* implicit */signed char) arr_15 [i_0 - 2] [i_0 - 2] [i_13] [17U] [i_1]);
                    arr_42 [i_13] = ((/* implicit */unsigned long long int) (+((+(min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)50384))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_47 [i_15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                                var_29 *= ((/* implicit */unsigned long long int) (unsigned char)255);
                                var_30 = ((/* implicit */int) (unsigned short)49259);
                                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) max((max((((/* implicit */long long int) (signed char)-29)), (7210387391141372900LL))), (((/* implicit */long long int) arr_1 [i_0 + 2])))))));
                            }
                        } 
                    } 
                }
                for (int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((1014222617) / (((/* implicit */int) (unsigned char)239)))))));
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 20; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 13328069083362172058ULL))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_0] [i_0]))) - (arr_14 [i_0] [i_0] [i_0 + 1] [i_1] [i_18]))), (((/* implicit */long long int) (signed char)-57))))));
                                arr_59 [i_0 + 2] [i_0 + 2] [i_1] [i_17 - 3] [i_17 - 3] [i_1] = ((/* implicit */int) (~(((unsigned long long int) ((unsigned long long int) arr_11 [i_1] [i_0 - 1] [i_1])))));
                                var_34 += ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)1232)) ? (((/* implicit */int) arr_33 [i_0 + 1])) : (-2147483632))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_41 [i_0])), (arr_25 [(signed char)0] [i_0] [i_17] [i_17 - 2])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)47)), (18446744073709551609ULL)))))))));
                            }
                        } 
                    } 
                }
                arr_60 [i_0] = ((/* implicit */signed char) ((min((max((730111153336793116ULL), (((/* implicit */unsigned long long int) (signed char)44)))), (((/* implicit */unsigned long long int) arr_45 [i_1])))) * (((/* implicit */unsigned long long int) ((long long int) 10569496655265954737ULL)))));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */int) arr_32 [i_0] [i_1] [i_20] [(signed char)16] [i_19]);
                            var_36 = ((/* implicit */long long int) max((((/* implicit */int) var_10)), (arr_49 [i_1] [i_1] [i_20])));
                        }
                    } 
                } 
                var_37 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2787637490998536844LL))))) : (((/* implicit */int) arr_63 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_21 = 0; i_21 < 24; i_21 += 2) 
    {
        var_38 = ((/* implicit */long long int) var_3);
        arr_69 [i_21] = ((/* implicit */unsigned int) min((((((((/* implicit */int) arr_67 [i_21] [i_21])) + (2147483647))) << (((((((/* implicit */int) arr_67 [i_21] [i_21])) + (126))) - (9))))), (((((/* implicit */int) arr_67 [i_21] [i_21])) + (((/* implicit */int) (signed char)70))))));
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 1) 
        {
            for (long long int i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                {
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) arr_72 [i_23] [i_22] [i_23]))));
                    arr_75 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_72 [i_21] [i_22] [i_22]) + (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) arr_74 [i_23] [i_22] [i_21] [i_21])) : (arr_72 [i_21] [i_22] [i_22])))))) != (((max((var_14), (((/* implicit */unsigned long long int) arr_71 [i_22])))) * (min((var_8), (((/* implicit */unsigned long long int) arr_67 [i_22] [(signed char)20]))))))));
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((signed char) max((((/* implicit */int) (short)-13352)), (arr_72 [i_21] [i_21] [i_21])))))));
    }
    for (int i_24 = 2; i_24 < 11; i_24 += 3) 
    {
        arr_79 [i_24] = ((/* implicit */short) min((min((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned char) arr_39 [i_24] [i_24]))))), (((((/* implicit */_Bool) 6ULL)) ? (-3053003088881036549LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))))))), (((/* implicit */long long int) ((min((5U), (((/* implicit */unsigned int) (unsigned char)135)))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) min((min((6119501902933127764LL), (((/* implicit */long long int) ((unsigned short) var_2))))), (-3053003088881036550LL))))));
    }
}
