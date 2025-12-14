/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193177
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_9);
                                var_18 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) ^ (arr_0 [i_0])))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (short i_6 = 4; i_6 < 13; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((int) 9U)))));
                                var_20 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [(unsigned short)3] [i_7]);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) arr_16 [i_1]);
                var_22 = ((/* implicit */unsigned char) ((3378597973453288595ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_23 &= min((((/* implicit */int) ((unsigned short) ((unsigned long long int) var_14)))), (var_11));
    /* LoopSeq 1 */
    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        var_24 = ((/* implicit */long long int) arr_3 [i_8]);
        var_25 = ((unsigned char) ((((/* implicit */int) var_8)) < (((/* implicit */int) ((_Bool) arr_6 [i_8] [2ULL] [(unsigned char)7] [i_8] [i_8])))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                {
                    var_26 = ((/* implicit */_Bool) var_0);
                    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_10])) || (((/* implicit */_Bool) ((unsigned short) 3378597973453288595ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)161)))) : (min((arr_4 [i_8] [i_8] [i_10]), (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_10])))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 2; i_11 < 7; i_11 += 3) /* same iter space */
        {
            arr_30 [i_11] = var_1;
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_39 [i_11] [(unsigned char)2] [i_14] [i_14] [(unsigned char)2] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_37 [i_11])) + (max((arr_7 [i_11] [i_12] [i_14]), (((/* implicit */unsigned long long int) (_Bool)1)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11 + 3] [i_11 + 2] [i_11] [i_11] [i_11])))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_2 [i_8] [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */unsigned int) arr_18 [i_8] [i_11 - 1] [i_11] [i_11 + 2] [i_14]))))) : (min((arr_17 [i_11]), (arr_15 [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_11])))));
                            var_29 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_11 + 3] [i_11 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_11 + 1] [i_8])))))));
                        }
                    } 
                } 
                arr_40 [i_11] = ((/* implicit */int) (~(((arr_6 [(unsigned char)11] [i_11] [i_12] [i_11 + 1] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_12]))) : (7889464686105829529LL)))));
                arr_41 [(unsigned char)8] |= ((/* implicit */int) arr_0 [i_8]);
                arr_42 [i_8] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), ((~(((/* implicit */int) (short)87))))));
            }
            arr_43 [i_11] [i_8] [i_11] = ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_8] [(_Bool)1] [i_8]));
            var_30 = ((/* implicit */short) ((signed char) (~(((int) arr_35 [i_8] [i_8] [i_8] [i_11 + 1] [i_11 + 1])))));
            var_31 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_14 [i_11 + 2]))))));
        }
        for (unsigned long long int i_15 = 2; i_15 < 7; i_15 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned char) ((var_14) << (((((/* implicit */int) var_7)) - (9032)))));
            arr_46 [i_8] [i_15 + 2] = ((/* implicit */unsigned long long int) var_1);
            arr_47 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_44 [i_15 + 1] [i_15 - 1]))))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (long long int i_17 = 3; i_17 < 8; i_17 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) 15068146100256263021ULL);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((long long int) arr_38 [i_18] [i_17 - 1] [i_15] [9] [i_15] [i_8])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_10)))))))));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)57486)) : (((/* implicit */int) arr_20 [i_17] [i_8]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_10))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_15 + 3] [i_15 + 2])) + (((/* implicit */int) arr_28 [i_15 + 1] [i_17] [i_17 + 2]))));
                            var_37 = ((/* implicit */_Bool) arr_51 [i_17] [i_17]);
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_16])) ? (arr_0 [i_17 - 1]) : (arr_25 [i_15 - 2] [i_16] [i_17 - 2])));
                            var_39 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_34 [i_17] [i_8] [i_8] [i_16] [i_8] [i_17])) ^ (((/* implicit */int) var_1))))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_26 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                            var_41 = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                        }
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_32 [8U] [i_15 - 1] [i_15 + 3]))))));
        }
        for (unsigned long long int i_21 = 2; i_21 < 7; i_21 += 3) /* same iter space */
        {
            arr_68 [i_8] = ((/* implicit */unsigned short) ((int) ((long long int) ((unsigned long long int) 3128900226U))));
            arr_69 [i_8] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) var_8))))))));
        }
        var_43 = ((/* implicit */unsigned char) ((short) ((arr_37 [(unsigned char)2]) / (((/* implicit */long long int) ((/* implicit */int) var_4))))));
    }
    var_44 = ((/* implicit */unsigned char) var_9);
    var_45 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_9)))) + ((~(var_11)))));
}
