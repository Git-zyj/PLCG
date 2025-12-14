/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198011
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
    var_20 = ((/* implicit */long long int) var_17);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) arr_0 [i_1]);
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned short i_4 = 3; i_4 < 9; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_6 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_22 = ((/* implicit */unsigned char) max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 8930122059918576567ULL)) ? (6648065694778801259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_0] [i_0])))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2] [i_4 - 3])) >> (((/* implicit */int) ((arr_1 [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3])))))))))));
                            var_24 += ((/* implicit */unsigned long long int) ((short) var_18));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_1]);
            }
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
            {
                arr_17 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) var_13);
                arr_18 [i_0] [i_0] [i_0] [i_0] |= min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_0 [i_0]))))))), (arr_7 [i_0] [i_0] [i_0]));
            }
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (((long long int) var_0))));
                var_26 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
            }
            arr_23 [i_0] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) (~(min((arr_1 [i_0]), (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0]))))));
            var_28 = ((/* implicit */short) var_10);
            var_29 = var_9;
        }
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
        {
            var_30 = (+(((arr_27 [i_8] [i_0]) / (arr_27 [i_0] [i_0]))));
            arr_30 [i_0] [i_0] = ((/* implicit */long long int) var_12);
            var_31 = ((/* implicit */_Bool) var_3);
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_32 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (signed char i_12 = 2; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_33 += ((/* implicit */_Bool) ((int) arr_24 [i_0] [i_9] [i_10 + 2]));
                            var_34 = ((/* implicit */long long int) min((((var_7) ? (((/* implicit */int) arr_8 [i_10] [i_10] [i_10 + 3] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) arr_8 [i_9] [i_9] [i_10 - 1] [i_11 + 1] [i_10 - 1])))), (((/* implicit */int) ((_Bool) arr_19 [i_9] [i_9] [i_9])))));
                            var_35 += arr_38 [i_0] [i_0] [i_0];
                            var_36 = ((/* implicit */unsigned short) min((min((max((((/* implicit */long long int) var_8)), (arr_20 [i_0] [i_0]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_41 [i_0] [i_0] [i_12] [i_0] [i_0])), (var_12)))))), (((/* implicit */long long int) var_17))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        {
                            var_37 -= ((/* implicit */unsigned short) ((arr_16 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]) ? (((((/* implicit */_Bool) arr_45 [i_0] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_14])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_46 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_0]))))))))));
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 11798678378930750368ULL)) ? (8388607LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44246))));
                            var_38 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7))))));
                            var_39 = ((/* implicit */unsigned short) arr_31 [i_0] [i_0]);
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0]);
                var_41 = ((/* implicit */unsigned long long int) ((arr_48 [i_13 - 1] [i_13 - 1] [i_13 + 1]) || (((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13 + 1] [i_13 - 1] [i_13 + 1])))))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    var_42 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 + 1])) ? (arr_40 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]) : (arr_40 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]))));
                    var_43 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_13 - 1] [i_0] [i_0] [i_0]))))), (max((arr_40 [i_9] [i_9] [i_9] [i_9] [i_13 - 1] [i_13 - 1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_13 - 1] [i_0] [i_0] [i_0]))))));
                    var_44 += ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned int) arr_54 [i_0] [i_0] [i_0] [i_0]))));
                    var_45 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_13 - 1] [i_13 + 1])) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_17 = 2; i_17 < 10; i_17 += 4) 
                    {
                        arr_59 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_55 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 - 1]));
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_17 + 1] [i_17 + 1] [i_17 - 1]))) - (arr_1 [i_0])));
                        arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                    }
                }
            }
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                var_47 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (max((arr_33 [i_9]), (arr_33 [i_0])))));
                var_48 = ((/* implicit */short) ((arr_20 [i_18] [i_9]) != (arr_43 [i_0] [i_0] [i_0])));
                var_49 = ((/* implicit */unsigned long long int) max((((unsigned short) min((arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_18))))), (((unsigned short) var_1))));
            }
        }
        var_50 += ((/* implicit */long long int) arr_50 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (short i_19 = 1; i_19 < 8; i_19 += 2) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_51 = ((/* implicit */int) arr_35 [i_0] [i_0] [i_0]);
                    var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) 11798678378930750353ULL))))), (arr_15 [i_0] [i_0] [i_0])))))))));
                    var_53 = ((/* implicit */_Bool) max((((((((/* implicit */long long int) var_8)) != (arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((-(((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) 3130850898042568809ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_29 [i_0] [i_0])))))), (var_16)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_21 = 1; i_21 < 9; i_21 += 4) 
        {
            for (long long int i_22 = 0; i_22 < 11; i_22 += 3) 
            {
                {
                    var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) var_5))));
                    arr_74 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) min((var_17), (arr_25 [i_21 + 1] [i_21 - 1]))));
                    var_55 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_21 + 1])) && (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_21 + 1])))) ? (((/* implicit */int) min((arr_19 [i_21] [i_21] [i_21 + 1]), (arr_19 [i_0] [i_0] [i_21 + 2])))) : (((/* implicit */int) arr_19 [i_22] [i_22] [i_21 - 1]))));
                    arr_75 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
        arr_76 [i_0] [i_0] = ((/* implicit */long long int) var_7);
    }
}
