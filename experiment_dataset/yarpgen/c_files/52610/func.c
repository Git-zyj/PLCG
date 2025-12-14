/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52610
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
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) arr_3 [(unsigned char)0]);
                arr_8 [i_1] [(unsigned char)1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((2030092936U), (min((2030092936U), (((/* implicit */unsigned int) arr_2 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3LL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) max((2030092936U), (((/* implicit */unsigned int) arr_6 [i_1 - 3] [(_Bool)1]))))) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) -1615884453))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_1 [4LL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [11LL] [11LL])))))))) != ((-(max((arr_13 [i_0] [i_1] [8LL] [6LL]), (((/* implicit */unsigned int) arr_11 [(unsigned char)8])))))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52442)) << (((2030092939U) - (2030092939U)))))) ? (((/* implicit */int) (unsigned short)36581)) : (-1615884453)));
                                arr_16 [i_3] [i_3] [i_3] [i_3] [(unsigned short)1] = (i_3 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_3] [i_3] [i_0]) << (((((/* implicit */int) arr_14 [i_3])) - (6922)))))) ? (arr_13 [(signed char)11] [(signed char)11] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_11 [i_3])), (arr_6 [(signed char)1] [10LL])))) && (((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_2 [4ULL])))))))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_3] [i_3] [i_0]) << (((((((/* implicit */int) arr_14 [i_3])) - (6922))) + (25831)))))) ? (arr_13 [(signed char)11] [(signed char)11] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_11 [i_3])), (arr_6 [(signed char)1] [10LL])))) && (((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_2 [4ULL]))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_1))));
                    /* LoopSeq 3 */
                    for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        arr_23 [i_6] [i_6] = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_6] [i_6]);
                        arr_24 [i_6] [(_Bool)1] [i_6] [(unsigned char)1] [i_6] = ((/* implicit */signed char) (short)31366);
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) (+(((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)1]))))))));
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 5703306682558099892ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_1] [7LL] [7LL]), (((/* implicit */unsigned char) (_Bool)1)))))) : (min((arr_4 [1] [(unsigned short)3] [i_0]), (((/* implicit */long long int) arr_0 [i_5])))))) <= (((/* implicit */long long int) min((min((((/* implicit */int) arr_12 [(signed char)2] [(short)6] [(signed char)2] [i_0] [i_0] [(_Bool)1])), (var_4))), (arr_19 [i_0] [5U] [i_5] [5U]))))));
                        arr_27 [5] [i_5] [i_0] [(unsigned short)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 - 3] [i_1 + 1] [i_7] [i_7 - 1]))) : (min((arr_10 [i_0] [(short)3] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) arr_5 [i_5])))))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5))))));
                        arr_31 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) arr_22 [i_0] [i_1] [i_5]);
                        arr_32 [i_0] [i_0] [i_1] [i_5] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)38)) ? (((((/* implicit */_Bool) 2264874356U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28954))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        arr_33 [i_0] [11U] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)168))))) & ((~(0ULL)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_0 [10ULL]))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_5] [i_5] [i_9] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24586))) : (arr_9 [i_10] [i_0]))), (((/* implicit */long long int) arr_14 [i_9]))))) ? (((/* implicit */int) ((_Bool) (+(14731777071356494586ULL))))) : ((((+(-234836125))) + (((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0] [i_0] [12U] [i_0]), (((/* implicit */unsigned char) arr_0 [i_10])))))))));
                                var_23 = ((/* implicit */int) arr_29 [i_10] [i_9] [i_9] [i_5] [(_Bool)1] [i_0]);
                                arr_39 [i_9] = ((/* implicit */_Bool) min((7399285774911414643ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_1])))) && (((/* implicit */_Bool) var_14)))))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [1ULL] [(unsigned char)10] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_34 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_5]))))) ? ((+(48986982))) : (((/* implicit */int) arr_22 [i_0] [10ULL] [(unsigned short)3]))))), (max((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */long long int) 2147483647)) / (-5952531974389428903LL)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        arr_43 [i_0] [i_11] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) var_13)), (((arr_37 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1]) & (arr_37 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1])))));
                        var_24 = 3154229129U;
                        arr_44 [i_0] [i_1] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [3LL] [3LL] [1LL] [i_11])) ? (arr_29 [i_0] [(signed char)0] [i_5] [i_11] [i_0] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_0] [i_1] [i_11] [(_Bool)1] [i_1] [i_11])))))) >= (((((/* implicit */_Bool) 5079760589891862724LL)) ? (1542561490181752798ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1 - 2] [i_1 - 2])))))))) != (((/* implicit */int) arr_22 [12ULL] [i_5] [i_1]))));
                        arr_45 [i_0] [i_1] [i_5] [i_11] = ((/* implicit */long long int) arr_35 [i_0] [4] [i_0] [(signed char)2] [i_0] [7LL]);
                    }
                }
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 10; i_12 += 4) 
                {
                    for (unsigned int i_13 = 2; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_12] [i_13 - 1]))));
                            /* LoopSeq 1 */
                            for (unsigned char i_14 = 4; i_14 < 12; i_14 += 4) 
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 12743437391151451723ULL))) ? ((~(max((arr_1 [i_14]), (((/* implicit */unsigned long long int) arr_42 [i_0] [i_0] [i_13] [i_14])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_1] [10ULL] [i_14] [i_1])) && (((/* implicit */_Bool) arr_47 [i_14] [12LL] [(signed char)3] [i_0])))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14))))))))))));
                                var_27 = ((/* implicit */unsigned short) max((1), (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)23437))) - (arr_47 [9LL] [i_1] [(_Bool)1] [i_1])))))));
                                arr_52 [(_Bool)1] [10U] [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_14]))) ^ (((((/* implicit */_Bool) -5952531974389428903LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [(signed char)8] [i_1] [i_1] [i_1] [i_1] [4ULL]))) : (1121410690823020317ULL)))))) ? (min((8U), (((((/* implicit */_Bool) var_13)) ? (3723033830U) : (2030092936U))))) : (((/* implicit */unsigned int) -1))));
                                arr_53 [i_13] [i_1] [i_12] [(unsigned short)4] [5U] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((unsigned short) arr_14 [i_14]));
                            }
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_12 - 3])) ? (var_11) : (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (unsigned char)0)), (571933465U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_2))));
    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((var_14) ^ (((/* implicit */long long int) 9)))))));
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 977325827)))))))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)59181)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))))))));
}
