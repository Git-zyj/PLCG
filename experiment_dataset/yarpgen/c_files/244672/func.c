/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244672
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) -5357013621537560343LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((arr_1 [i_0]), (((/* implicit */unsigned int) (-2147483647 - 1))))))));
        var_13 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (101984864U) : (arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */int) arr_3 [i_1]);
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) + (arr_3 [i_1])))) ? (((5357013621537560357LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2] [i_2])) & (((/* implicit */int) min((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2]))))))), (max((4278326024394326296ULL), (((/* implicit */unsigned long long int) min((arr_3 [i_2]), (((/* implicit */long long int) 179218545)))))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(arr_5 [i_3]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                arr_11 [i_3] [i_3] [i_4 - 1] = ((/* implicit */short) (-(845453767)));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [4LL] [i_4 - 1])) ? (((((/* implicit */_Bool) arr_0 [10])) ? (((/* implicit */int) arr_0 [i_2])) : (-596288753))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1]))))))))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_4])) ? (-1071300047811529859LL) : (((/* implicit */long long int) arr_8 [4LL] [4LL])))))));
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_19 -= ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_2] [i_2] [i_5]));
                var_20 ^= ((/* implicit */unsigned int) ((arr_5 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_2]))))) : (arr_12 [i_2] [i_2])));
            }
            var_21 = ((/* implicit */short) ((((long long int) ((arr_1 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))) + (max((arr_3 [i_3]), (((((-4748628964657319746LL) + (9223372036854775807LL))) >> (((arr_1 [1U]) - (4171835350U)))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
            {
                arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_1 [i_2]);
                var_22 = ((/* implicit */long long int) (_Bool)1);
            }
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
            {
                var_23 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(-416610070)))), (min((arr_1 [i_2]), (((arr_1 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))))));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    var_24 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */unsigned int) arr_13 [i_7])) : (arr_1 [i_2])))) * (((arr_14 [i_2] [i_2] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [4LL] [i_2] [i_8]))))));
                    var_25 = ((/* implicit */signed char) min((var_25), ((signed char)-127)));
                    var_26 &= max((-1071300047811529883LL), (((/* implicit */long long int) (_Bool)0)));
                    var_27 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [10LL] [i_2] [i_2])) ? (((-5357013621537560357LL) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_7])) | (-845453781)))))) : (((/* implicit */long long int) ((int) -1907037946)))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((arr_2 [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6350014569156428921LL))))) : (((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_7])) ? (((/* implicit */int) arr_6 [i_2] [i_3])) : (((/* implicit */int) arr_2 [i_3])))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_21 [(unsigned char)1] [i_9])) : (arr_24 [i_2] [i_2])))) ? (((/* implicit */unsigned int) (-(262016)))) : (((arr_18 [6U] [i_3] [i_7] [i_7]) / (arr_18 [i_3] [i_3] [i_3] [i_3])))))) != (((((((/* implicit */_Bool) 4192982418U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8266819785297774579LL))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)23063))))))));
                    var_30 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [15U]))) > ((+(3037093969528588342LL))))) ? ((+(((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_7])) ? (arr_17 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_7])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_1 [i_2]) : (arr_1 [i_2]))))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2290785834U)) ? (((/* implicit */long long int) 55742272U)) : (4910550782317453948LL)))) && (((/* implicit */_Bool) ((arr_23 [i_2] [i_2] [i_2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_16 [6U] [6U] [6U]))))))));
                    var_32 = ((/* implicit */unsigned int) arr_0 [i_2]);
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 2147483647)) - (9223372036854775807LL)));
                    var_34 = ((/* implicit */int) arr_21 [i_2] [i_3]);
                    var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_7] [i_2])) ? (((/* implicit */long long int) arr_13 [i_2])) : (((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_2] [i_10])) ? (arr_23 [4] [i_3] [i_7] [4]) : (-5203832471922337114LL)))));
                }
                var_36 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -1981931409)) ? (5199690965317489005LL) : (((/* implicit */long long int) 1665253070)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 101984900U)))))));
            }
            arr_30 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4192982432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))));
        }
        var_37 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 144115188075855871ULL)) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_16 [i_2] [i_2] [7LL])))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2]))) < (((((/* implicit */_Bool) 1907037946)) ? (886271063724347LL) : (-3037093969528588348LL))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
    {
        var_38 ^= ((/* implicit */_Bool) max((max((arr_1 [(unsigned char)12]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_32 [i_11])))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)28635)))))));
        var_39 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4192982404U)) ? (((/* implicit */int) ((signed char) 9223372036854775807LL))) : (-2113692106)))), (max((((/* implicit */unsigned long long int) arr_2 [i_11])), ((~(18446744073709551615ULL))))));
    }
    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
    {
        arr_38 [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1082975923U)) / ((-9223372036854775807LL - 1LL))))) ? (((arr_34 [i_12]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) -2113692106))))) ? (((/* implicit */long long int) 2147483647)) : (-886271063724331LL));
        arr_39 [i_12 - 1] = ((/* implicit */unsigned char) ((((arr_35 [i_12] [i_12 + 1]) | (arr_35 [i_12] [i_12 + 1]))) + (((((/* implicit */_Bool) arr_35 [i_12 + 1] [i_12 - 1])) ? (arr_35 [i_12 + 1] [i_12 + 1]) : (arr_35 [i_12 + 1] [i_12 - 1])))));
    }
    var_40 = ((/* implicit */long long int) min((2113692105), (((/* implicit */int) (unsigned short)45511))));
    var_41 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) ^ (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))) & (var_6)));
}
