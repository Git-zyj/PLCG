/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4028
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
    var_15 = ((/* implicit */short) (+(((((/* implicit */long long int) var_13)) / (min((var_2), (((/* implicit */long long int) (signed char)12))))))));
    var_16 = ((/* implicit */unsigned short) (signed char)-3);
    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_13))))) ? ((~(((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (_Bool)0)) : (var_9))))) : (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
            arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_0])) ? (var_11) : (((/* implicit */long long int) (-(((/* implicit */int) var_14))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned char)87)) : (arr_1 [i_0 + 1] [i_1])));
                var_20 = ((/* implicit */_Bool) (~(arr_2 [i_1 + 3] [i_1 + 4] [i_1 + 2])));
            }
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (unsigned char)104)))) : (arr_3 [i_0] [i_1 + 4] [i_0])));
        }
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) | (127U)))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)6] [i_0] [i_0]))) : (var_2)))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1]))));
        }
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((var_13) - (((/* implicit */int) arr_9 [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = (~((~(13316832025621437327ULL))));
                    var_26 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)4] [i_6]))))) << (((((((/* implicit */long long int) arr_1 [i_6] [i_5])) - (arr_6 [i_4]))) - (6157310789340053076LL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) == (((((/* implicit */int) (signed char)1)) << (((((/* implicit */int) arr_17 [6LL] [i_4] [i_4] [i_6])) - (58659)))))));
                        arr_25 [i_0] [i_4] [i_0] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_7] [i_0] [i_7])) : (((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33812)))))));
                        var_27 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-12))));
                        arr_26 [i_4] [i_5] [i_6] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_7] [i_0 - 1] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) var_10)))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    arr_29 [i_5] [i_0] = ((/* implicit */signed char) (~(17996806323437568LL)));
                    var_28 = ((/* implicit */_Bool) (~(var_13)));
                }
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5129912048088114288ULL)) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
            }
            var_30 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) < (-17996806323437569LL)))) << (((arr_6 [i_4]) + (6157310787670098094LL)))));
        }
        for (signed char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
        {
            arr_32 [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_17 [i_9] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_17 [1ULL] [1ULL] [i_9] [i_9]))));
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_20 [i_0 - 1]) ^ (arr_20 [i_0 - 1])));
            var_31 = ((/* implicit */int) (~(arr_12 [i_0 + 1] [i_0 + 1])));
            var_32 = ((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [(unsigned short)13]);
        }
        var_33 |= ((/* implicit */unsigned long long int) 388666987);
        var_34 = ((/* implicit */int) var_14);
        var_35 = ((/* implicit */short) (~(((((/* implicit */_Bool) 15049474269215257713ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_22 [23LL] [23LL] [i_0] [i_0] [i_0 + 1] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 4) 
    {
        var_36 = ((/* implicit */unsigned char) var_4);
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                var_37 = ((((/* implicit */_Bool) 15049474269215257702ULL)) ? (((11171442131834473438ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [7ULL]))) & (var_2)))));
                arr_43 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 3369953196U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */int) arr_11 [i_12] [i_11] [i_12]))))) : (((unsigned long long int) (unsigned char)4))));
                var_38 |= ((/* implicit */int) (((_Bool)1) ? (arr_19 [i_10] [6ULL] [i_10] [i_10] [i_10] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 11171442131834473438ULL))));
                arr_44 [i_10 + 3] [i_10 + 3] [8U] [i_10 + 3] = ((/* implicit */_Bool) var_3);
            }
            var_40 = ((/* implicit */int) (unsigned short)1146);
            arr_45 [i_10] [i_11] [i_10 + 2] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (15049474269215257701ULL));
            /* LoopSeq 2 */
            for (long long int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                var_41 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                arr_49 [i_10] [i_13] = ((/* implicit */unsigned char) (signed char)-12);
                var_42 *= ((/* implicit */signed char) var_7);
            }
            for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                arr_52 [i_11] = ((/* implicit */unsigned char) ((((arr_40 [i_10 + 1] [i_10 + 3] [i_10 + 4]) + (2147483647))) << (((arr_20 [i_10 + 1]) - (2972452685620632313LL)))));
                var_43 = (+(arr_2 [i_10 + 3] [i_10 + 3] [i_14]));
                arr_53 [0] = ((/* implicit */unsigned char) var_7);
            }
        }
        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 4) 
        {
            arr_56 [i_10] [i_15] = ((/* implicit */long long int) ((arr_51 [i_15 + 1] [i_15 + 1]) / (arr_51 [i_15 - 1] [i_15 - 1])));
            var_44 = ((/* implicit */signed char) arr_15 [i_15] [23LL] [i_10]);
        }
        var_45 *= ((/* implicit */unsigned int) arr_14 [i_10] [i_10] [i_10]);
    }
    var_46 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1139)) ? (925014109U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33)))));
}
