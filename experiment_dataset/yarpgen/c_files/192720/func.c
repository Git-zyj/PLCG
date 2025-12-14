/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192720
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) ((_Bool) (((+(arr_1 [i_0]))) != (max((arr_1 [i_0 - 3]), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        arr_8 [i_0 - 3] [i_0] [i_1 - 2] [i_2] [i_3] = var_5;
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_7 [i_2] [i_2]))));
                            arr_11 [i_0] [i_4] [i_2] [(unsigned short)14] [i_4] [i_0] [(unsigned short)14] = ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_7 [i_1] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 3] [i_1 - 3]))))) : (((long long int) arr_5 [i_0] [i_1] [i_2] [i_3])));
                            var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_0 - 2])) || (((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [(short)16]))))) : (((/* implicit */int) arr_2 [i_0]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) / (arr_13 [(unsigned short)8] [(short)7] [i_2])));
                            arr_15 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_12 [(_Bool)0] [i_2]) : (arr_13 [i_0] [i_0] [i_0]))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned char) var_8)))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_7 [18LL] [i_0]))))));
                            var_17 = ((/* implicit */int) ((unsigned char) (+(var_6))));
                        }
                        for (short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_7] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [(_Bool)1] [11U] [i_2] [i_1 - 3] [i_0]))) != (arr_12 [i_0] [i_0]))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned char) var_6)))));
                        }
                        var_19 = ((/* implicit */short) min((var_19), (arr_0 [i_2])));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_2] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) : (var_6)))) ? (min((((/* implicit */long long int) var_5)), (arr_13 [i_2] [i_1] [i_0 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_22 [i_0 + 3] [i_2] [i_2] [i_1] [i_1] [i_0 + 3])), (max(((unsigned char)117), (((/* implicit */unsigned char) (signed char)0)))))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_19 [i_9] [i_8] [i_0] [(unsigned short)10] [i_0]))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0LL)))))));
                            var_23 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))))))));
                            arr_29 [i_0] [i_1] [i_2] [i_8] [i_2] [5LL] [8ULL] = ((/* implicit */unsigned char) (+((~(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0]))) + (arr_9 [i_0] [i_0] [i_1] [i_2] [i_8] [i_9])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_24 = arr_26 [i_0];
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_1]))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (!(var_8))))));
                            arr_33 [i_0] [12LL] [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 + 3] [i_0 + 1] [i_0] [i_0] [i_0 + 3]);
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_19 [i_0] [i_2] [i_1] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_2 [i_11])) ? (((long long int) arr_9 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_1])) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        arr_37 [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1] = ((/* implicit */long long int) ((arr_25 [i_0]) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) 6201023534620146418LL)) || (((/* implicit */_Bool) (unsigned char)117))))))) + (8)))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((max((max((((/* implicit */long long int) arr_24 [i_0] [13ULL] [i_0 - 2] [i_0] [i_0] [i_0])), (arr_27 [i_0] [i_1] [i_1] [i_0] [i_0] [i_11] [i_0]))), (arr_20 [i_0] [i_0] [i_0] [i_0 - 3] [i_0]))), (((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_9)))))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((((arr_16 [i_0] [i_0] [i_0] [i_0]) | ((+(arr_32 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 3] [i_0 - 3] [i_0 + 3]))))), (min((min((((/* implicit */long long int) arr_19 [i_1 + 1] [i_12] [i_2] [i_1 + 1] [i_0 - 1])), (arr_36 [i_0] [i_0]))), (((/* implicit */long long int) var_8))))));
                            arr_42 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_26 [i_13])), (((((/* implicit */int) arr_26 [i_0 + 1])) + (((/* implicit */int) arr_26 [i_0 - 1]))))))));
                        }
                        var_30 = ((/* implicit */signed char) ((arr_17 [i_0] [i_0 - 3] [i_0] [6U] [i_2] [i_0]) ? (max((((((/* implicit */_Bool) arr_27 [i_0] [(unsigned char)2] [i_0 - 3] [i_0] [i_0] [i_0] [i_0 - 1])) ? (arr_35 [i_0 - 3] [i_0] [i_0] [(signed char)17]) : (arr_12 [i_0] [i_0]))), (((/* implicit */long long int) ((unsigned char) arr_4 [i_0 - 1] [i_0] [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (58720256U)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) (-((~(arr_35 [i_14] [i_2] [i_1] [i_0])))));
                            arr_46 [i_0] [i_0] [i_2] [i_12] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_2] [i_12] [i_12] [i_14])) || (((/* implicit */_Bool) var_4))))), (arr_22 [i_0] [i_0] [i_2] [i_0] [i_14] [i_14])))) : (((/* implicit */int) var_7))));
                            var_32 = var_3;
                        }
                        var_33 = ((/* implicit */int) (~(min((min((((/* implicit */long long int) (unsigned char)0)), (8825878709407696813LL))), (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [(unsigned char)17]))) : (arr_13 [i_1] [i_2] [i_2])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_20 [i_15] [3LL] [i_2] [i_0 + 3] [i_0 + 3]))))));
                            arr_49 [i_0] [i_0] [i_0] [8LL] [i_0 - 2] = arr_6 [i_0 + 1] [i_1] [i_1] [i_1];
                        }
                    }
                    arr_50 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_1 - 2] [(signed char)18] [(signed char)18] [i_0])), (((unsigned long long int) var_6))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-18871)))) ? (((/* implicit */int) ((unsigned char) arr_14 [i_2]))) : ((~(((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    }
    for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
    {
        var_35 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_16] [i_16] [i_16] [i_16] [i_16]))))) ? ((~(arr_43 [i_16] [i_16] [i_16] [i_16] [i_16]))) : (((((/* implicit */int) arr_39 [i_16] [i_16] [i_16] [i_16] [i_16])) ^ (((/* implicit */int) arr_21 [i_16] [10ULL] [i_16] [i_16] [i_16] [(_Bool)1] [i_16])))))), ((+(((/* implicit */int) (short)(-32767 - 1)))))));
        var_36 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)165)))) / (arr_35 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_16])))));
        var_37 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned short)65535))));
        arr_53 [i_16] = ((/* implicit */short) ((var_3) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_10))) || (((/* implicit */_Bool) min((8825878709407696816LL), (((/* implicit */long long int) (unsigned char)244)))))))))));
    }
    var_38 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_4)))))));
}
