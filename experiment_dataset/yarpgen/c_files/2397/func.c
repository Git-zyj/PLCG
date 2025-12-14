/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2397
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (var_9)))) ? (max((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0 - 2])))) : (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 0LL)) : (var_2))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0LL)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(-1821875470)))) | (((((/* implicit */_Bool) var_10)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
            var_15 = ((/* implicit */unsigned char) ((var_3) << (((arr_1 [i_0 + 1] [i_0 + 1]) + (1150411030)))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [i_0 - 2] [(unsigned char)14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2137683879))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                arr_15 [i_0 + 2] = ((/* implicit */unsigned char) (-((+(arr_6 [i_3 - 1] [i_0 + 2])))));
                var_16 = ((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_0 - 1] [i_0] [(_Bool)1]);
            }
            for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_11 [(unsigned short)3] [i_0 - 1] [i_0 + 3] [i_0 + 3])) : (arr_4 [i_0 + 2]))))));
                var_18 = 3727745041895268641ULL;
            }
            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                arr_22 [i_0 + 1] [i_2] [i_5] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_7))))));
                arr_23 [i_5] [i_5] [i_5] [i_0 - 1] = ((/* implicit */unsigned char) arr_16 [4LL] [i_2] [i_2] [i_2]);
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_29 [i_0] [i_2] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((-12LL) + (9223372036854775807LL))) << (((18446744073709551615ULL) - (18446744073709551615ULL)))));
                            var_19 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((-12LL) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))) * ((-(var_9)))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (arr_11 [(unsigned short)6] [13ULL] [i_2] [i_2]))))) == (var_2)));
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) % (((((/* implicit */unsigned long long int) arr_8 [i_0])) ^ (10300940485596254862ULL)))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)55)) * (((/* implicit */int) (unsigned char)9))))) ? (max((((/* implicit */long long int) min((((/* implicit */int) arr_19 [(signed char)2] [i_8] [i_0 - 1] [(signed char)2])), (var_0)))), (((-7775895301514103396LL) | (((/* implicit */long long int) 0)))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (unsigned int i_10 = 1; i_10 < 16; i_10 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) var_0);
                        arr_39 [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(max((arr_4 [(unsigned char)13]), (var_9)))))));
                        arr_40 [i_0 + 1] [i_0 + 1] [i_8] [i_8] [i_10] [i_10] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) arr_38 [i_0] [1U] [1U])), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) ? (5046778374150252496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4408))))))));
        }
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), ((~(arr_3 [i_0 - 1] [i_0 - 1])))));
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        var_26 = arr_11 [i_11] [i_11] [i_11] [i_11];
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) min((var_12), (((/* implicit */unsigned long long int) (unsigned char)22)))))) ? (min(((~(((/* implicit */int) arr_32 [i_11 + 1])))), ((~(((/* implicit */int) var_6)))))) : (max(((+(((/* implicit */int) (unsigned char)251)))), (((/* implicit */int) var_1)))))))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(0LL)))) ? (((arr_1 [i_11 + 1] [i_11]) & (arr_1 [i_11 + 1] [i_11]))) : (min((arr_1 [i_11 + 1] [(signed char)8]), (((/* implicit */int) (unsigned short)0)))))))));
        var_29 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) 12LL)))) ? (((((/* implicit */int) var_6)) / (arr_1 [i_11] [i_11 + 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))))))), (((1035131984) >> (((((/* implicit */int) (short)1428)) - (1403)))))));
    }
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)23322)) : (-7)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-6LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))) : (min((((/* implicit */unsigned long long int) -160376425)), (var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (max((var_12), (var_7))))))))));
}
