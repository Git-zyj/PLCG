/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208084
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((var_1), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)2494)) : (((/* implicit */int) (signed char)123)))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) min(((signed char)127), ((signed char)-112)))) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)42474)) : (((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */int) arr_1 [i_1] [12])) : (((/* implicit */int) max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned short) (signed char)-111)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((unsigned long long int) min((((long long int) arr_9 [i_3] [i_1] [i_1] [i_0])), (((/* implicit */long long int) ((unsigned short) var_7))))));
                                arr_14 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8655)) ? (((/* implicit */int) (_Bool)1)) : (var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_12 [(_Bool)1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0] [i_2]), (var_6))))))))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_4] [i_1] [i_1]))) == (var_4))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) min((((unsigned char) var_3)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)14] [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_10))))) ? (min((arr_4 [7LL] [i_1] [10LL]), (((/* implicit */long long int) var_6)))) : (var_1))) : (((((/* implicit */_Bool) ((unsigned short) 6280084067258710034LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [21LL]))) : (((((/* implicit */_Bool) 255154141)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (arr_4 [i_0] [i_1] [i_2]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        var_15 |= ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [(_Bool)1]);
                        var_16 = 8684810672404579922LL;
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) var_0);
                            var_18 = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) (signed char)43)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)45)) : (-1)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            var_20 += ((/* implicit */signed char) (_Bool)1);
                            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (signed char)-117))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_7]) : (((/* implicit */long long int) arr_8 [6] [6] [6] [i_7]))))) : (((((/* implicit */_Bool) var_6)) ? (arr_12 [i_0] [i_0] [(unsigned short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [3LL] [i_0])))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_20 [i_2] [i_5])) : (((/* implicit */int) arr_20 [i_5] [i_2])))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8669341627971550706LL)) ? (((/* implicit */int) (unsigned short)62707)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (arr_5 [i_0] [i_0] [i_2] [i_0]))))));
                        var_24 = ((((/* implicit */_Bool) -2147483633)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (-4052702501713183865LL));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        var_25 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) 896115265))))));
                        var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) : (var_1))) <= (((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (var_2))))));
                        var_27 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (signed char)117)) << (((((/* implicit */int) (signed char)102)) - (82))))));
                    }
                    arr_28 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_9 [(unsigned short)2] [(unsigned short)2] [i_2] [1LL])))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2])) ? (-4052702501713183865LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118)))))))) : (((/* implicit */long long int) var_8))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_0] [i_1] [i_10] [i_11]))) ? (min((arr_10 [i_1] [i_1] [(_Bool)1] [i_11] [3ULL] [i_11]), (((/* implicit */long long int) (signed char)117)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [(unsigned short)4]))))))))), (((((/* implicit */_Bool) ((unsigned char) (unsigned short)39841))) ? (((((/* implicit */_Bool) var_4)) ? (arr_12 [12LL] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_29 = ((/* implicit */short) var_4);
                        var_30 = ((/* implicit */signed char) ((unsigned short) ((short) ((((/* implicit */_Bool) -7993900542933416542LL)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_12 = 3; i_12 < 23; i_12 += 2) /* same iter space */
                    {
                        arr_36 [i_1] [i_0] [20] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [19] [i_1] [i_1] [10] [i_12 - 1] [i_1])) ? (arr_27 [i_1] [i_12 + 1] [i_10] [i_0] [i_0] [i_1]) : (((/* implicit */int) (unsigned short)7966))))) ? (arr_27 [21LL] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) ((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) > (arr_27 [i_0] [i_0] [i_10] [i_1] [(_Bool)1] [i_1]))))));
                        var_31 = ((/* implicit */int) arr_26 [i_0] [i_0] [(unsigned char)2] [i_1]);
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_10] [i_10] [i_12 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)84))) : (arr_2 [i_0])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (-7993900542933416532LL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39560))) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-8620)) : (((/* implicit */int) arr_17 [i_1] [i_1]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_31 [i_0])) : (((/* implicit */int) (unsigned short)2828)))) : (var_8))))));
                        arr_37 [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */int) ((max((var_8), (((/* implicit */int) (short)-30539)))) != (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))))))) + (((((/* implicit */_Bool) arr_5 [(signed char)19] [i_1] [i_12 - 3] [i_0])) ? (((/* implicit */int) ((-1727619729) == (((/* implicit */int) arr_32 [(unsigned short)15] [(unsigned char)15] [(unsigned short)15]))))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        arr_40 [i_1] [i_1] [i_1] [i_13 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_1] [i_13 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)2804)) : (((/* implicit */int) (unsigned short)7966))))) : (-340271533134379034LL)));
                        var_33 |= ((/* implicit */short) (((!(arr_13 [i_0] [18] [i_0]))) ? (((((/* implicit */_Bool) -4260888589929651620LL)) ? (-3600316609299714025LL) : (((/* implicit */long long int) var_10)))) : (arr_38 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12])));
                        var_34 = ((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_13 + 1] [i_13 + 1] [(signed char)8] [i_13]));
                        var_35 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_27 [(_Bool)1] [(_Bool)1] [(_Bool)1] [5] [(unsigned short)1] [i_1]))))));
                    }
                    arr_41 [i_1] = ((/* implicit */long long int) (_Bool)1);
                }
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-7529567585398986664LL) : (((/* implicit */long long int) var_8))))) ? (((arr_13 [i_0] [i_1] [i_1]) ? (arr_0 [i_1]) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)155)) ? ((((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)0)))))));
}
