/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38264
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
    var_11 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_0)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [(unsigned short)6] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) 9223372036854775807LL))), ((+(arr_1 [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) (-(arr_6 [i_2 - 1] [i_1] [i_2 - 1] [i_0])));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */_Bool) ((arr_13 [i_0] [i_3 + 1] [i_2] [i_2] [i_3 + 1] [i_2 + 1]) << (((arr_13 [i_2 + 2] [i_3 + 2] [(signed char)9] [i_3] [i_4] [i_2 + 1]) - (4263776489U)))));
                            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)57))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) ((_Bool) var_8)))));
                        }
                    }
                    arr_16 [6LL] = ((/* implicit */_Bool) (+(((int) arr_3 [i_2 - 1] [i_2 - 1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((signed char) ((unsigned int) arr_13 [0] [i_1] [i_2] [i_5] [i_2 + 1] [i_0])))), ((+(arr_9 [i_2])))));
                        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [(_Bool)1] [(short)7] [i_1] [i_0]))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_4 [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (_Bool)1);
                                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (arr_22 [5ULL] [i_2] [(signed char)3]) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_12 [i_8] [i_8] [i_8] [i_8]))));
        var_22 = ((/* implicit */unsigned short) ((int) (_Bool)1));
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_6))))));
            var_24 = ((/* implicit */long long int) var_5);
            arr_34 [i_10] = ((/* implicit */_Bool) arr_8 [i_9] [i_10] [18] [i_9]);
            var_25 = ((/* implicit */unsigned char) var_0);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) min((arr_33 [i_9]), (((/* implicit */int) (unsigned short)13036))));
            arr_37 [i_9] [i_11] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)205))));
            var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_10 [(short)12] [i_11] [i_9] [i_11] [i_11]), (arr_10 [i_9] [i_9] [i_9] [9] [(unsigned short)7])))) ? ((-(max((((/* implicit */unsigned int) var_5)), (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_11] [i_9] [i_9]))) >= ((-(var_6)))))))));
            var_28 = ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), (var_4)));
        }
        var_29 = ((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
        arr_38 [i_9] = ((/* implicit */unsigned char) arr_11 [(unsigned short)8] [i_9] [i_9] [i_9]);
        var_30 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) >> (((((unsigned long long int) var_2)) - (22678ULL)))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((((/* implicit */int) arr_24 [i_12])), (((arr_24 [i_12]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_12])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 2) 
        {
            for (int i_14 = 2; i_14 < 10; i_14 += 1) 
            {
                {
                    var_32 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_12] [i_13 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_12] [i_13] [i_14])))))))) & (((arr_12 [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_14 - 1]) / (arr_12 [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_14 + 1])))));
                    var_33 = ((/* implicit */unsigned short) arr_27 [i_12] [20LL]);
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((var_3), (arr_44 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))))))));
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)39644)))))))) ? (arr_45 [i_14 - 1]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_39 [10] [i_13])))), (((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
        arr_47 [i_12] = ((/* implicit */long long int) var_4);
    }
    /* LoopSeq 3 */
    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        var_36 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)198)), (var_1)))))));
        /* LoopSeq 3 */
        for (unsigned char i_16 = 2; i_16 < 17; i_16 += 4) /* same iter space */
        {
            var_37 = ((((((/* implicit */_Bool) ((unsigned char) (signed char)-83))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 1506238581)) ? (((/* implicit */int) arr_10 [i_15] [4] [i_16] [i_16] [i_16 - 1])) : (((/* implicit */int) arr_10 [i_15] [i_16 + 3] [i_15] [7LL] [18])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_16 + 2]))))));
            var_38 = ((unsigned short) (-(arr_11 [i_16 + 1] [i_16] [i_16 + 1] [5])));
            var_39 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [12])) : (((/* implicit */int) arr_50 [i_16]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_51 [i_16]))));
        }
        for (unsigned char i_17 = 2; i_17 < 17; i_17 += 4) /* same iter space */
        {
            arr_56 [i_15] = ((/* implicit */long long int) var_10);
            var_40 = ((/* implicit */unsigned short) var_5);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                arr_61 [i_15] [i_15] [i_17] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_18])) ? (arr_33 [i_15]) : (arr_33 [i_17 - 1])));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_9))));
            }
        }
        for (unsigned char i_19 = 2; i_19 < 17; i_19 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) ((arr_30 [i_15] [i_19 + 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) arr_30 [i_15] [i_19 - 2])))));
            var_43 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_15] [i_19 + 3] [i_19] [(unsigned short)9])) ? (arr_12 [i_15] [i_19 + 3] [i_19] [i_15]) : (arr_12 [(_Bool)1] [i_15] [i_19] [i_19 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_29 [i_15]), (arr_29 [8])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)24345)))))));
        }
    }
    for (long long int i_20 = 0; i_20 < 17; i_20 += 3) 
    {
        var_44 ^= ((/* implicit */unsigned long long int) arr_15 [i_20] [(unsigned short)20] [i_20] [i_20] [i_20]);
        arr_66 [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 131064U)) ? ((((+(((/* implicit */int) var_10)))) >> ((((+(arr_64 [i_20]))) + (1908403206144191612LL))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned short)32770)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_49 [i_20]))))))));
        var_45 = ((/* implicit */unsigned short) 131064U);
    }
    /* vectorizable */
    for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
    {
        var_46 = ((/* implicit */int) arr_4 [i_21]);
        var_47 = ((/* implicit */unsigned short) max((var_47), (var_8)));
    }
    var_48 += ((/* implicit */signed char) min((((/* implicit */int) var_10)), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))));
}
