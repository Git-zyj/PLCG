/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194481
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
    var_13 -= (!(((/* implicit */_Bool) var_11)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [i_2] |= ((/* implicit */int) (((+(min((var_9), (((/* implicit */unsigned int) arr_1 [i_0])))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2 - 1])))));
                var_14 *= ((/* implicit */unsigned long long int) var_5);
                arr_7 [i_0] [i_1] [i_2] [i_2 - 1] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2]))))) < (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2])) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2]))))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_5 [i_0 - 1] [i_1] [i_1] [i_0 - 1])))))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    var_16 |= ((/* implicit */unsigned int) arr_8 [10]);
                    var_17 *= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -255288451)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)25893)))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [10U])) ? (((((((/* implicit */long long int) var_8)) < (arr_8 [i_0]))) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_5 [(short)3] [i_3 - 1] [i_2 - 1] [i_0 - 1])))) : (((/* implicit */int) max((max((((/* implicit */short) var_7)), (var_5))), (((/* implicit */short) arr_5 [i_1] [i_2 - 1] [i_3 - 1] [i_3]))))))))));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_4 + 1] [i_2 - 1] [i_0 + 1]), (((/* implicit */unsigned int) ((arr_11 [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_1])))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(arr_11 [i_2]))))) * (max((arr_0 [i_4] [i_1]), (arr_0 [i_1] [(unsigned char)2]))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_4 + 1] [i_2 - 1] [i_1] [i_0 - 3])), ((~(((/* implicit */int) var_12))))))))))));
                    var_20 *= ((/* implicit */_Bool) max(((signed char)53), ((signed char)53)));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_1] [i_1] [i_1]) != (((/* implicit */unsigned int) arr_13 [i_4 + 1] [i_4 + 1] [i_0] [i_1] [i_0]))))) - (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))))))), ((+(max((((/* implicit */long long int) var_5)), (arr_0 [i_1] [i_2]))))))))));
                    var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max(((-(var_4))), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) == (((/* implicit */int) arr_11 [i_0])))))))) | ((((!(((/* implicit */_Bool) arr_3 [i_4] [(_Bool)1])))) ? (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) arr_1 [i_0 - 3]))))));
                }
            }
            var_23 ^= (+(((/* implicit */int) ((arr_9 [i_0 - 2] [i_0] [i_0] [i_0 + 1]) && (((/* implicit */_Bool) max((arr_12 [i_0] [12] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_2)))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_24 ^= ((signed char) (-((-(arr_17 [i_5] [i_0])))));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((max((var_7), (arr_15 [i_8]))) ? (min((((arr_1 [i_5]) & (((/* implicit */int) arr_15 [i_8])))), (((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_7] [(short)0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_8))));
                            var_27 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [5ULL] [i_6] [i_5]))) - ((+(5035202449716445842LL)))));
                        }
                    } 
                } 
                arr_26 [7] [i_5] [i_0] &= ((/* implicit */_Bool) ((unsigned short) max(((+(((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6] [i_6])))), ((-(((/* implicit */int) var_5)))))));
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_22 [i_9]), (((/* implicit */unsigned short) var_5))))) - (((/* implicit */int) ((arr_18 [i_9] [i_5] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_5] [i_5] [i_5] [i_9]))))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 2]))) + (var_1))))))));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_13 [i_10] [i_5] [i_0 + 2] [i_0 - 1] [i_0 - 1]) >= (((/* implicit */int) arr_32 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 2]))))))))));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0 + 2]) - (arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)19), (((/* implicit */signed char) (_Bool)1)))))) : (max((var_3), (((/* implicit */unsigned long long int) arr_1 [i_0 - 3])))))))));
                }
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
                {
                    var_31 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)12)), (1546920319)));
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) var_4)), (arr_35 [i_9] [i_0] [i_0 + 1] [i_9])))))));
                }
            }
            for (long long int i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
            {
                var_33 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0 - 2])) >> (((((/* implicit */int) arr_28 [i_0] [i_0] [i_0 - 2] [i_12])) - (44)))))), (((((/* implicit */_Bool) 21LL)) ? (-86419739745786875LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_34 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (short i_15 = 1; i_15 < 11; i_15 += 4) 
                {
                    {
                        var_35 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) % (((arr_40 [i_0 + 1] [(short)8] [i_0]) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_13] [i_0] [i_15 - 1] [i_13])) : (((/* implicit */int) arr_20 [i_14] [i_14] [i_14] [i_13] [i_0])))))))));
                        var_36 += ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_32 [i_0] [i_13] [i_0] [i_15] [i_15] [i_15]))))))) >= (((((/* implicit */_Bool) arr_34 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) != (var_11))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_16 = 1; i_16 < 12; i_16 += 2) 
            {
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((unsigned int) (+(((/* implicit */int) var_5))))))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((((((/* implicit */_Bool) arr_23 [i_16 + 1] [i_16 + 1] [i_17] [i_16] [i_17] [i_0 - 3] [i_0])) ? (((/* implicit */long long int) arr_23 [i_16 + 1] [i_0 - 3] [i_17] [i_0] [i_17] [i_0 - 3] [i_0])) : (arr_8 [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0]))))))))));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_0] [i_17] [i_17] [i_18])) < (((/* implicit */int) arr_52 [i_18] [i_17] [i_17] [i_16] [i_13] [i_0 - 1]))))), (((((/* implicit */unsigned long long int) max((729281111U), (((/* implicit */unsigned int) (_Bool)1))))) | (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_17] [i_16] [i_13] [i_0]) : (((/* implicit */unsigned long long int) var_0)))))))))));
                            var_40 = ((/* implicit */_Bool) min((var_40), (((max((((((/* implicit */_Bool) var_5)) ? (var_2) : (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_2 [i_18] [i_13] [i_0]))))))) >= ((((!(((/* implicit */_Bool) var_0)))) ? (arr_35 [i_17] [12U] [i_0 + 2] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) var_6))))))))))));
                        }
                    } 
                } 
                var_41 *= ((/* implicit */short) ((((((unsigned long long int) (signed char)30)) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0])) >> (((((/* implicit */int) arr_33 [i_0] [i_0] [(unsigned char)12] [i_0] [i_0] [i_0])) - (12398)))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_13] [i_13] [i_16] [i_16]))) : (var_2))))))))));
                var_42 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_50 [i_16] [i_16]))))) % (((arr_29 [i_16]) ? (arr_1 [i_16]) : (((/* implicit */int) arr_52 [i_16 + 2] [i_0] [i_0] [i_0] [4] [i_0]))))))), (((long long int) min((((/* implicit */unsigned int) (_Bool)1)), (0U))))));
            }
            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_0 - 2] [i_13])) : (((/* implicit */int) arr_19 [i_0] [i_0 - 3] [i_13]))))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 3] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0 + 2] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0 - 1] [i_13])) >= (((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 2] [i_13])))))))))));
        }
        var_44 ^= ((/* implicit */signed char) (((-2147483647 - 1)) < (((/* implicit */int) (short)9057))));
    }
    var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) (~(var_9))))));
}
