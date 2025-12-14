/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229909
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
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_4))))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)65025)))))))));
    var_14 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_0)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((unsigned char) var_1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) arr_2 [i_0] [i_0]))) : (((/* implicit */int) arr_4 [i_0] [i_4])));
                                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) var_5);
                                var_16 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_4 - 1] [i_4] [i_4] [(unsigned char)8]))));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_12 [i_4] [i_0] [i_4] [i_4] [i_4]);
                                var_17 = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) (+(var_6))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_0]) : (var_6)))));
                }
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_19 [i_0] = (unsigned short)65027;
                    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [(unsigned char)5]))))) ? ((~(((/* implicit */int) arr_12 [(short)7] [i_0] [i_5] [i_0] [i_0])))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_3))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 7; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) (+(((/* implicit */int) min((arr_22 [i_0] [i_1] [i_0] [i_7] [i_6 + 2]), (arr_22 [i_0] [i_1] [i_0] [i_1] [i_6 - 1]))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)31)) ^ (min((((((/* implicit */_Bool) (unsigned short)509)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_3))))));
                                var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_24 [i_0])) ? ((-(arr_23 [i_0] [i_1] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (402431603))))))));
                            }
                        } 
                    } 
                }
                arr_26 [i_0] = var_11;
                var_23 = (-(((/* implicit */int) arr_17 [(unsigned short)5] [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0])))) && (max((arr_25 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1]), (arr_25 [i_8 - 1] [i_8 + 1] [4ULL] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                            var_25 = ((/* implicit */unsigned char) (~(max((((arr_0 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) arr_8 [i_1] [i_9]))))));
                            var_26 = ((/* implicit */long long int) var_11);
                            /* LoopSeq 2 */
                            for (unsigned char i_10 = 3; i_10 < 7; i_10 += 3) /* same iter space */
                            {
                                arr_35 [i_0] [i_1] [i_0] [i_9] [i_10] = ((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_8] [i_9] [i_10 - 3]);
                                var_27 = ((/* implicit */long long int) max((var_27), (max((min((arr_1 [(unsigned short)6]), (((/* implicit */long long int) ((arr_7 [i_1] [i_8] [i_10]) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [1]))) : (arr_31 [(short)4] [(unsigned char)8] [(short)6] [i_9]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_3))))))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_11 = 3; i_11 < 7; i_11 += 3) /* same iter space */
                            {
                                arr_38 [i_11] [i_0] [i_0] [(unsigned short)9] = ((/* implicit */unsigned short) (-(((int) var_0))));
                                var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [8LL])));
                                var_29 = ((/* implicit */unsigned char) var_8);
                                var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_0] [2ULL] [i_8])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
    {
        arr_41 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_8)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12])) ? (((/* implicit */unsigned int) var_8)) : (var_6)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))) : (((long long int) var_6))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                {
                    var_31 -= ((/* implicit */short) ((unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_44 [2] [i_13] [i_13])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_43 [i_12])))));
                    var_32 |= ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) var_10)))));
                    arr_47 [i_12] = ((((/* implicit */_Bool) arr_45 [i_12 + 1] [i_13 + 1] [i_14] [i_14])) ? (((/* implicit */long long int) ((var_8) << (((arr_45 [i_12] [i_12 - 1] [i_13 + 1] [i_14]) - (7579621112814099194LL)))))) : (min((((/* implicit */long long int) var_4)), (arr_45 [i_12] [i_13] [i_14] [i_14]))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [i_12])) > ((~(((((/* implicit */int) arr_40 [i_12])) | (((/* implicit */int) arr_42 [i_12]))))))));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (((unsigned short) arr_43 [i_12]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_43 [i_12 - 1])) : (((/* implicit */int) var_1)))))));
    }
    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
    {
        var_35 = ((/* implicit */short) ((unsigned long long int) var_1));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)511)) + (((/* implicit */int) (unsigned char)3))));
    }
    var_37 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) ((unsigned char) var_10)))))));
}
