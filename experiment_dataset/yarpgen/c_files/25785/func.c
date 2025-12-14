/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25785
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) (+(1524439360U))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((min(((_Bool)1), (arr_8 [i_0] [i_0] [i_0] [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_4)))))))));
                        var_16 = ((/* implicit */short) min((((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (17179869182ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)123)), (1114827746U)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_0])) : (((/* implicit */int) (signed char)-120)))) : (((/* implicit */int) var_8))))));
                        var_17 *= 8ULL;
                        var_18 = ((/* implicit */short) arr_8 [i_1] [i_1] [i_2] [i_0]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                {
                    var_19 = (!(((/* implicit */_Bool) ((arr_2 [i_5 + 2] [i_0 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_2 [i_5 - 1] [i_0 + 1] [i_4 + 1])) : (((/* implicit */int) arr_5 [i_0 + 1]))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))) + (((/* implicit */int) ((((/* implicit */_Bool) 2040507341)) && ((_Bool)1))))))), (max((((/* implicit */long long int) var_7)), (min((arr_3 [i_0] [i_4]), (((/* implicit */long long int) -1525710531)))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */short) var_9);
                            arr_21 [i_0] [i_4 - 1] [i_5 + 3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                            var_22 -= ((/* implicit */unsigned short) arr_3 [i_4] [i_0 - 1]);
                        }
                        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            var_23 = var_4;
                            var_24 ^= ((486726886U) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2256440747603648291ULL)))))));
                            var_25 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((arr_10 [i_0]) - (1846027060U)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((((arr_10 [i_0]) - (1846027060U))) - (2173603045U))))));
                            var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)114))));
                        }
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            arr_27 [i_0] [i_4] [i_6] [i_6] [i_0] [i_0] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5 + 1] [i_4 + 1])) ? (arr_25 [i_5 + 2] [i_4 + 1]) : (arr_25 [i_5 - 2] [i_4 + 1])));
                            var_27 = ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_4 + 2] [i_5] [i_5] [i_6] [i_6] [i_9])) ? (5103405269040002540ULL) : (((/* implicit */unsigned long long int) ((arr_19 [i_9] [i_9] [i_6] [i_0] [i_0] [i_4] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1])))))));
                            arr_28 [i_0] [i_0] [i_0] [i_6] [i_9] = ((/* implicit */signed char) ((arr_0 [i_5 + 1]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-1587)))))));
                        }
                        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (17070854708193401577ULL) : (18446744056529682434ULL))))));
                        arr_29 [i_5] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_14)))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) -692711836)) + (9223372036854775808ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_4 + 2] [i_5 - 1] [i_5 - 1])))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_5 + 1] [i_0] [i_5 + 1] [i_5] [i_5])), (var_7)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 3]))))) : (min((((/* implicit */unsigned int) (signed char)7)), (arr_24 [i_0] [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5] [i_5])))));
                }
            } 
        } 
        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((arr_20 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_3), (((/* implicit */short) (_Bool)1)))))))) : (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (arr_7 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((1525710555), (((/* implicit */int) (signed char)100))))))));
    }
    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-(((((/* implicit */int) ((3168021930U) == (((/* implicit */unsigned int) -1525710560))))) & (((/* implicit */int) arr_33 [i_10])))))))));
        var_33 -= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-8)))) >= (((((/* implicit */int) (signed char)-18)) * (((/* implicit */int) (_Bool)1)))))) ? (arr_30 [i_10]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
        var_34 = (+(min((((/* implicit */unsigned int) arr_31 [i_10])), (arr_30 [i_10]))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((3494463152U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_9))))) ? (((18446744056529682434ULL) & (((18446744073709551601ULL) >> (((/* implicit */int) var_4)))))) : (((/* implicit */unsigned long long int) max((((arr_35 [i_10] [i_11]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) arr_33 [i_10])) < (((/* implicit */int) arr_35 [i_12] [i_11]))))))))));
                    var_36 += var_6;
                    var_37 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)18228))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_34 [i_11] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_12] [i_10]))) : (3241149707U)))));
                    arr_38 [i_10] [i_10] [i_11] [i_12] = ((/* implicit */signed char) (-(max((arr_31 [i_10]), (arr_31 [i_12])))));
                }
            } 
        } 
    }
    var_38 -= ((/* implicit */unsigned char) max((var_9), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
    {
        for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            {
                var_39 = ((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]);
                var_40 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 652724570U)), (5ULL)));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        {
                            arr_48 [i_13] [i_14] [i_14] [i_13] |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) min(((~(var_9))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) (unsigned short)64121)))))))) : (arr_36 [i_13] [i_13] [i_13] [i_13])));
                            arr_49 [i_16] [i_16] [i_15] [i_13] [i_14] [i_15] = (-(((((/* implicit */_Bool) min((arr_40 [i_13]), (((/* implicit */long long int) (short)23734))))) ? (((((/* implicit */_Bool) arr_24 [i_15] [i_14] [i_15] [i_15] [i_15] [i_14] [i_13])) ? (((/* implicit */unsigned int) -290352937)) : (876870323U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32754))))))));
                            arr_50 [i_13] [i_15] [i_13] [i_15] = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)44511)) ? (arr_3 [i_16] [i_15]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_13] [i_14] [i_13] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2702031900U)))))), (((/* implicit */long long int) min(((-(var_13))), (((/* implicit */int) arr_11 [i_16])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
