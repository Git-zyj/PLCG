/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239515
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [2ULL])) && (((/* implicit */_Bool) var_6))))))));
        var_13 = ((/* implicit */unsigned long long int) ((long long int) -1));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 &= ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_15 = ((/* implicit */unsigned char) (-(arr_4 [i_0 - 4])));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */long long int) arr_8 [(short)18] [i_3 - 3]);
        var_16 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_8)) ? (5074945876183370875ULL) : (((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_3 - 1])))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_3])), (-1)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 19; i_6 += 4) 
                    {
                        for (int i_7 = 4; i_7 < 19; i_7 += 3) 
                        {
                            {
                                arr_21 [i_3] [16ULL] [i_6] [i_6] [i_7 + 1] = ((/* implicit */unsigned char) arr_15 [i_7 - 3] [i_6 - 3] [i_6 - 1] [i_6] [i_4] [i_3 + 1]);
                                arr_22 [i_3] [i_4] = ((/* implicit */signed char) arr_12 [i_6] [i_7 + 1]);
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3 + 1])) ? (((13371798197526180749ULL) * (((5074945876183370856ULL) >> (((((/* implicit */int) var_1)) - (50837))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [(signed char)11] [6] [(_Bool)1] [i_6] [i_4])))));
                                arr_23 [i_5] [i_4] [i_5] [i_5] [i_7] [i_5] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) -861752819)), (((arr_20 [i_3] [i_5]) + (((/* implicit */unsigned int) arr_14 [10]))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((int) var_6))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [6] [6] [i_3] [(_Bool)1] [i_3])) || (((/* implicit */_Bool) arr_18 [i_5] [i_3 - 3] [i_3 - 3] [i_3 - 3])))) ? (((((/* implicit */_Bool) -661894858)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [16ULL] [14U]))) : (arr_13 [i_3] [16LL] [16LL] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4]))))))))))))));
                    /* LoopSeq 4 */
                    for (int i_8 = 2; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) arr_12 [i_8 + 1] [i_3 - 2]);
                        var_20 = ((/* implicit */unsigned short) ((arr_12 [5] [i_4]) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)59971)))))));
                    }
                    for (int i_9 = 2; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        arr_28 [10] [10] [i_5] [10] [i_3] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_16 [i_3 - 1] [20U] [i_3 - 1])), (arr_26 [i_9] [i_5] [i_5] [i_4] [i_4] [i_3])))), (5074945876183370889ULL)));
                        arr_29 [(short)9] [i_5] [i_3] [i_3] [(short)9] [(short)9] = ((/* implicit */short) ((max(((~(arr_13 [i_5] [i_3] [i_5] [i_5]))), (((/* implicit */long long int) max((arr_15 [4] [4] [i_4] [i_5] [i_5] [4]), (((/* implicit */unsigned short) arr_11 [(unsigned char)12]))))))) >> ((((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [15U] [i_5] [i_9] [i_5] [i_5]))) % (1154638224U))))) - (21309U)))));
                        arr_30 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) ((short) 3199290598810348120LL)))), (arr_12 [i_3] [i_4])));
                        /* LoopSeq 4 */
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) arr_18 [i_3] [19LL] [i_9] [19LL]);
                            var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 673750141))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            arr_35 [i_3] = ((/* implicit */unsigned short) max(((-(arr_33 [i_3] [i_4] [i_5] [i_9] [13U]))), ((~(-758581827)))));
                            arr_36 [i_3] [i_4] [i_5] [i_3] [i_3] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10365)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) arr_33 [i_3] [18] [i_3] [17U] [i_11])) : (arr_26 [i_3 + 1] [5LL] [0U] [i_9] [i_11] [i_3])))) ? (((((/* implicit */_Bool) 13371798197526180760ULL)) ? (((/* implicit */unsigned long long int) arr_18 [i_5] [i_4] [i_5] [i_9 + 1])) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (max((13371798197526180726ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (arr_27 [i_3] [i_4] [i_5] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19269))))))))));
                            var_23 = ((/* implicit */signed char) arr_31 [i_3] [i_4] [i_3] [i_4] [i_5] [i_5] [(signed char)0]);
                        }
                        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) arr_24 [7LL] [i_9]);
                            var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_26 [i_3] [i_4] [i_4] [i_5] [i_9 + 1] [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64024)))))), (((unsigned long long int) arr_24 [i_3 - 2] [i_5]))));
                            var_26 = ((/* implicit */short) var_4);
                            arr_39 [8] [i_4] [i_5] [i_3] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (short)31249)) : (1927444375))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            arr_42 [i_5] [i_13] [i_5] [i_5] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_5] [i_5] [i_5] [i_5])) <= (var_8))))) % (arr_41 [16LL] [16LL] [i_3] [i_3] [16LL] [16LL]))))));
                            arr_43 [i_3] [i_3] [i_5] [i_3] [i_3] = (((!(((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_3] [i_3] [6ULL] [i_3 - 1] [i_3 - 3])))) ? (((/* implicit */long long int) 16777215)) : ((+(arr_24 [i_9] [i_4]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 20; i_14 += 3) /* same iter space */
                    {
                        var_27 = (!((_Bool)1));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                        {
                            arr_50 [i_4] [(unsigned short)8] [i_3] = ((/* implicit */unsigned short) ((((arr_10 [i_3]) <= (((/* implicit */long long int) 262143)))) ? (arr_48 [i_3 - 3] [i_14] [(unsigned short)17] [i_3 - 3]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4890)))))));
                            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1022)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_4] [i_4] [i_3] [(unsigned short)7] [i_15] [i_4] [i_5]))) : (arr_41 [i_3] [14LL] [i_3] [4] [18U] [i_3 + 1])))) ? (arr_32 [(short)1] [(short)1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
                        {
                            var_29 *= ((/* implicit */_Bool) (+((-(-2)))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)126)) || (((/* implicit */_Bool) arr_49 [10] [i_3] [i_5] [i_3] [i_3])))) && (((/* implicit */_Bool) 1815342416U)))))));
                        }
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -5938490989954030156LL)))))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 20; i_17 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_5]))));
                        arr_56 [i_3] [i_3] [i_3] [(unsigned short)17] = ((/* implicit */int) var_5);
                    }
                    var_33 |= ((/* implicit */signed char) arr_53 [(unsigned short)6]);
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (-(arr_48 [i_3] [i_3] [i_5] [i_3])))) ? (arr_12 [19ULL] [i_3 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4])))))))));
                }
            } 
        } 
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (arr_26 [i_3] [4] [i_3] [i_3] [i_3 - 3] [i_3 - 3]) : (max((arr_24 [(unsigned char)18] [12LL]), (((/* implicit */long long int) var_12))))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_41 [i_3] [i_3] [16LL] [16LL] [(signed char)10] [i_3 - 2])), (15024266705888305304ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3]))))))))) : (((int) arr_41 [i_3 - 2] [i_3] [i_3 + 1] [12U] [i_3] [(short)18])))))));
    }
    var_36 = ((/* implicit */unsigned short) var_12);
    var_37 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (var_9))), (((/* implicit */unsigned long long int) ((unsigned int) var_0)))));
}
