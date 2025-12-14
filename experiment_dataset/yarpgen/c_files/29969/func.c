/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29969
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
    var_15 = ((/* implicit */long long int) (+(((4U) / ((-(4294967291U)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), ((~(arr_2 [(unsigned char)0] [(unsigned char)0]))))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1852965291)) ? (((/* implicit */long long int) 4294967291U)) : (5443006685269871739LL))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 3684063432U)) ? (((/* implicit */int) (short)-32229)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 1568607330)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))))))) : (((/* implicit */long long int) 1568607334)))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_8 [4ULL] [i_2] [i_2] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (arr_0 [i_2 - 1])))) ? (((((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_2 + 1])) / (arr_4 [9U] [i_0] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((0ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10121327320115930850ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_7))))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) var_10)) * (((((/* implicit */int) var_11)) / (((/* implicit */int) var_9))))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (+(1568607330)))))))))));
                                var_21 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 1] [i_3] [i_3] [i_3])) ? ((~(((/* implicit */int) var_13)))) : (-2126465187))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_10 [i_4] [(signed char)0] [i_4 - 1] [i_4 + 1])) ? (arr_10 [i_2] [(signed char)6] [i_4 + 2] [i_5 + 1]) : (((/* implicit */int) arr_0 [i_5 - 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (signed char i_7 = 3; i_7 < 7; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((max((((8325416753593620754ULL) << (((1374408050) - (1374407989))))), (((/* implicit */unsigned long long int) arr_19 [i_7 + 3])))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (8325416753593620765ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_24 += var_11;
                }
            } 
        } 
        var_25 = ((/* implicit */int) max((var_25), (min((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_2))))), ((-(arr_16 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_0))));
        var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_21 [i_8])) + (2147483647))) >> (((((/* implicit */int) var_3)) + (92)))));
        /* LoopSeq 4 */
        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) ((arr_25 [i_8] [i_8] [(_Bool)1]) ^ (((/* implicit */int) arr_23 [i_8]))));
            var_29 += ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1683242650U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 2781318964U)) : (arr_22 [i_9] [i_9]))))));
        }
        for (int i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_29 [i_10 - 1] [i_10] [i_8])) : (((((/* implicit */_Bool) (unsigned char)229)) ? (arr_28 [i_8]) : ((-2147483647 - 1)))));
            var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_10] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_10 + 1]))) : (9223372036854775805LL)))) ? (var_8) : (((/* implicit */long long int) var_5))));
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 17; i_13 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            arr_41 [i_12 - 1] [i_13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_36 [i_8] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_23 [i_12 - 1]))));
                            var_33 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-11949))));
                            var_34 ^= ((/* implicit */short) -7352240305162688990LL);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_44 [i_12] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_3))))));
                            var_35 |= ((/* implicit */int) var_12);
                        }
                        for (long long int i_16 = 2; i_16 < 19; i_16 += 2) 
                        {
                            var_36 = ((/* implicit */int) max((var_36), (((int) 12567765326371032030ULL))));
                            var_37 = ((/* implicit */unsigned char) ((((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2781318964U))))));
                            arr_47 [i_8] [i_8] [i_12] [i_8] [10U] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_33 [i_8] [i_12] [i_13] [i_16])) > (0))));
                            var_38 |= ((/* implicit */signed char) (-(18275243093754129711ULL)));
                        }
                        var_39 = ((/* implicit */int) 5536848430787827872LL);
                        var_40 = ((/* implicit */signed char) ((arr_28 [(_Bool)0]) <= (((/* implicit */int) var_4))));
                    }
                } 
            } 
            var_41 += ((/* implicit */long long int) var_9);
        }
        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            arr_50 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-20369)) || (((/* implicit */_Bool) 1568607348))));
            arr_51 [i_17] = ((/* implicit */long long int) (+(((/* implicit */int) arr_27 [15ULL] [i_17] [i_17]))));
        }
    }
    var_42 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
    /* LoopNest 2 */
    for (long long int i_18 = 1; i_18 < 23; i_18 += 4) 
    {
        for (long long int i_19 = 1; i_19 < 22; i_19 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    for (long long int i_21 = 2; i_21 < 23; i_21 += 4) 
                    {
                        {
                            var_43 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)26973)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) * (((/* implicit */int) (_Bool)0))))) : (max((5U), (arr_60 [i_18] [i_19] [i_21])))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)52)), (arr_54 [i_18 + 1] [i_18 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) & (9266352138158721415ULL)))))));
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))) == (((((/* implicit */_Bool) -5536848430787827884LL)) ? (((/* implicit */unsigned long long int) 4U)) : (arr_62 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1])))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-115)) ? (((((/* implicit */_Bool) (-(1513648332U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_54 [i_18] [i_18]) : (((/* implicit */int) var_9))))) : (((unsigned long long int) 483175335)))) : (min((((((/* implicit */_Bool) -2LL)) ? (10679544860929087215ULL) : (((/* implicit */unsigned long long int) 1513648332U)))), (((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */long long int) -96487273)))))))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    for (int i_23 = 2; i_23 < 22; i_23 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_61 [i_23] [i_23 - 1] [i_23] [i_23 - 1] [i_23 + 2]), (arr_61 [10] [10] [10] [i_23 - 2] [i_23])))) ? (((((/* implicit */_Bool) arr_61 [i_23] [(_Bool)1] [i_23] [i_23 + 2] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_61 [i_23] [i_23] [i_23] [i_23 - 1] [i_23]))) : (min((arr_61 [i_23] [i_23 + 2] [i_23 + 2] [i_23 - 2] [i_23 - 2]), (arr_61 [(signed char)9] [i_19] [i_19] [i_23 - 1] [i_23])))));
                            arr_68 [i_18 - 1] [i_18] [i_18] [i_18 + 1] = ((/* implicit */signed char) ((((unsigned int) arr_56 [i_18] [i_18] [i_22])) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), (((unsigned char) (_Bool)1))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_24 = 0; i_24 < 24; i_24 += 2) 
                            {
                                arr_72 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-11949)))) != (max((((/* implicit */int) var_1)), (arr_63 [i_18 - 1])))));
                                arr_73 [i_18] [i_18] [i_18] [i_23] [i_24] = ((/* implicit */unsigned int) var_7);
                                var_47 = ((/* implicit */short) min((((/* implicit */long long int) 4294967295U)), (-5536848430787827873LL)));
                                var_48 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 172436386)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_18 - 1]))) : (arr_60 [i_18 + 1] [i_18] [i_22])))))));
                            }
                        }
                    } 
                } 
                var_49 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((int) arr_67 [i_18] [i_18] [i_18 + 1] [i_18]))))) : (max((((((/* implicit */_Bool) 5536848430787827872LL)) ? (var_12) : (((/* implicit */long long int) 2634348121U)))), (((/* implicit */long long int) var_5))))));
            }
        } 
    } 
    var_50 = ((/* implicit */signed char) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))), (((int) var_10))))));
}
