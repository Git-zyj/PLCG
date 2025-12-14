/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24682
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13))), (((/* implicit */unsigned long long int) max((var_7), (arr_2 [i_0]))))))) ? (((((3464848569U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) var_3)))) : (max((max((arr_0 [i_0]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-113)) + (((/* implicit */int) (signed char)102)))))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((signed char) var_1))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)114))))))) ? (min((((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) min(((signed char)-113), (arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) 3464848569U)) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) (signed char)127)))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-113))))))));
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_4), (((/* implicit */unsigned int) arr_2 [i_1])))) < (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)127), ((signed char)(-127 - 1)))))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) var_4)) : (arr_0 [i_1])))) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */int) max((arr_1 [i_2]), (var_9)))) >> (((((unsigned long long int) (signed char)-101)) - (18446744073709551509ULL)))))));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_5] [i_4] [i_2] [i_2]))))) ? (((((/* implicit */int) arr_18 [i_3] [i_5] [i_4])) & (((/* implicit */int) var_6)))) : (((/* implicit */int) max((arr_1 [i_2]), (var_0)))))) & (((/* implicit */int) var_12))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            var_20 = max((((/* implicit */signed char) ((((/* implicit */int) (signed char)-72)) <= (((/* implicit */int) (_Bool)1))))), (arr_2 [i_4]));
                            arr_21 [i_2] [i_5] [(signed char)15] [i_3] [i_2] = ((/* implicit */signed char) ((unsigned int) (((-(arr_9 [i_2]))) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3 - 3] [i_2]))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_2] [i_3 + 1] [i_3 - 2])) : (((/* implicit */int) arr_13 [i_2] [i_3 - 2] [i_3 - 2]))))) ? (((/* implicit */int) max((arr_13 [i_2] [i_3 + 1] [i_3 - 1]), (arr_13 [i_2] [i_3 - 3] [i_3 - 1])))) : (((/* implicit */int) min((arr_13 [i_2] [i_3 - 1] [i_3 - 3]), (arr_13 [i_2] [i_3 - 2] [i_3 - 3]))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_16 [i_2] [i_4] [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5])) || (((/* implicit */_Bool) arr_0 [i_2]))))) : ((~(((/* implicit */int) arr_10 [i_3 - 2])))))))))));
                            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_7))))), (arr_14 [i_5] [i_5] [i_4])))) ? (min((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [i_6] [i_5] [i_2] [i_2] [i_2])), (var_4)))), (((((/* implicit */_Bool) 2366084607U)) ? (arr_9 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                        }
                        var_24 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) ((signed char) var_3))), (((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_10 [11U])) : (((/* implicit */int) (signed char)124)))) <= (((/* implicit */int) min(((signed char)-28), (arr_13 [i_5] [i_5] [i_5])))))))));
                        arr_22 [i_5] [i_2] [i_3] [i_3] [i_2] [i_2] = min((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 4245839319U)) <= (arr_8 [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0ULL)))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_3 - 3] [i_4] [i_5])) ? (1928882688U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))), ((+(((long long int) 2493608650U)))));
                        var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_12 [i_2] [i_5])) << (((((((/* implicit */int) var_6)) + (42))) - (15)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_12 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((-4690462143773331244LL), (arr_16 [i_2] [i_3] [i_5]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-8))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_19 [i_5] [i_5] [i_2] [i_4] [i_5] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)20321))))))));
                    }
                    arr_23 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_2]), (arr_9 [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (18446744073709551611ULL))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((/* implicit */long long int) (signed char)127)), (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) <= (1928882689U)))))))));
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_2])))) * (min((var_4), (var_4))))) & (min((((/* implicit */unsigned int) var_11)), (max((2366084607U), (((/* implicit */unsigned int) arr_18 [i_2] [i_3 + 1] [i_4]))))))));
                    arr_24 [(signed char)12] [6U] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)4)) ? (1928882687U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (min((var_2), (var_6)))))))));
                }
            } 
        } 
        arr_25 [i_2] = min((((max(((_Bool)0), ((_Bool)0))) ? (-3332863995443802295LL) : (arr_16 [i_2] [(signed char)15] [i_2]))), (((/* implicit */long long int) arr_12 [i_2] [i_2])));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((min((268304384U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) min(((signed char)0), ((signed char)0))))))) != ((~(-1363423688372071264LL))))))));
                    arr_30 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-(876256307U)));
                    var_29 = ((/* implicit */signed char) var_8);
                    var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-68)), (arr_16 [i_2] [i_2] [i_2])))))) ? (min((min((((/* implicit */unsigned long long int) arr_18 [(signed char)11] [i_7] [i_8])), (var_13))), (((/* implicit */unsigned long long int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8] [i_7] [i_7] [i_2])))));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-22))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_17 [i_8] [i_2] [i_8] [i_8])))) ? (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_1))))) : (max((arr_28 [i_8] [i_7] [(_Bool)1]), (((/* implicit */long long int) (unsigned short)4740))))))))));
                }
            } 
        } 
        arr_31 [i_2] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_2])))), (max((11116085062143627591ULL), (((/* implicit */unsigned long long int) (signed char)97))))))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_32 *= ((/* implicit */signed char) (_Bool)1);
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (1928882689U)))) ? (((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)61)))) : ((~(((/* implicit */int) var_0))))));
        /* LoopNest 2 */
        for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [(unsigned short)17] [i_10]))))) ? ((-(3418710988U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_35 [0U] [i_9] [i_10])) < (((/* implicit */int) arr_1 [i_11])))))))))));
                    var_35 = ((/* implicit */unsigned short) 4294967277U);
                }
            } 
        } 
        arr_41 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16336188123258131808ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(signed char)11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_38 [i_9] [(signed char)17] [i_9]))))) : (2366084607U)));
    }
    for (long long int i_12 = 3; i_12 < 8; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_49 [i_13])))))))) ? ((~(((((/* implicit */_Bool) 2147483646LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_12]))) : (12445076888571586756ULL))))) : (((((/* implicit */_Bool) max((var_1), (var_9)))) ? ((+(16930888834587675965ULL))) : (((/* implicit */unsigned long long int) arr_40 [i_12] [i_13]))))));
            arr_50 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 3418710988U)) ? (((/* implicit */unsigned long long int) arr_28 [i_13] [i_12] [i_12])) : (2110555950451419807ULL))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)21325)) ? (((/* implicit */int) arr_38 [i_12 - 2] [i_12 - 2] [i_12 - 3])) : (((/* implicit */int) arr_49 [i_13])))) < (((/* implicit */int) max(((signed char)54), ((signed char)-4))))))) : (((((/* implicit */_Bool) arr_39 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 2])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) arr_38 [i_12] [i_13] [i_12]))))))));
            arr_51 [i_12] [i_13] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_36 [i_12 - 3])) ? (((((/* implicit */_Bool) 72022409665839104ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65526)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_32 [i_12 - 2]))));
        }
        arr_52 [i_12] = ((/* implicit */signed char) min(((~(min((((/* implicit */unsigned long long int) arr_20 [i_12] [i_12] [i_12] [i_12] [i_12 + 1])), (10481666034876008954ULL))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1928882689U)) ? (1026269516084652272LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    }
    var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (var_6)))) ? (((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */int) var_1)) + (85))) - (9))))) : (((/* implicit */int) ((_Bool) (unsigned short)24908)))))) ? (min((((/* implicit */unsigned int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (min((((/* implicit */unsigned int) var_2)), (var_4))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_1))))));
}
