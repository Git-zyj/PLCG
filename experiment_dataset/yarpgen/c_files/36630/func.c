/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36630
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54726))) > (3922712572212847968ULL)))) > (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned short)30865)) : (((/* implicit */int) (unsigned short)30865)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)30874))))) ? (((/* implicit */int) (unsigned char)166)) : ((-(((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))));
                    var_18 = ((/* implicit */short) arr_5 [i_0] [i_1] [i_2]);
                    arr_7 [i_2] = ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (arr_5 [i_0] [i_1] [i_2])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((signed char) arr_9 [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2]));
                        var_20 = ((/* implicit */unsigned char) (unsigned short)19967);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] [12ULL] [i_2] [i_0] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_4])) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1])) : (((/* implicit */int) (short)32))))) ? (((var_16) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [i_0])) : (arr_5 [i_0] [i_2] [i_0]))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 1]))));
                            var_21 ^= arr_5 [i_3] [i_3] [i_3];
                            arr_14 [i_0] [i_1] [i_0] [i_2] [i_4] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) : (arr_9 [i_4] [i_3] [i_2] [i_2] [i_0 - 3] [i_0]));
                            var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 + 2] [i_0 - 2] [i_0 + 1])) ? (((((/* implicit */int) var_16)) * (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))) : (((arr_10 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_8 [i_4] [i_3] [i_0 - 1] [(signed char)19] [i_0 - 1])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_3] [i_3] [i_4] [i_3]))))));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned char)76);
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1] [(unsigned char)4])) || (((/* implicit */_Bool) arr_17 [i_2] [i_0] [i_2] [i_2 + 2]))));
                            arr_21 [i_0] [i_2] [i_2] [i_0] [i_0 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((16901694247283694293ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            arr_22 [i_0] [(unsigned short)13] [(unsigned short)13] [i_2] = ((((/* implicit */_Bool) arr_16 [i_2] [i_1] [i_6 - 1] [i_2 - 1])) ? (arr_9 [i_0 - 2] [i_0 - 1] [i_2] [(unsigned short)10] [i_5] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 + 2] [i_0] [i_2] [i_5] [i_6]))));
                            arr_23 [i_2] [i_0] [i_1] [i_2] [i_0] [i_5] [(signed char)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_17 [i_2] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_18 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1])) : ((-(((/* implicit */int) var_14))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (arr_19 [i_0] [i_0] [i_0] [10U] [(unsigned short)11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34650)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */int) (short)-289)))) : (var_11)));
                        }
                        for (long long int i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_2] [i_2] = ((/* implicit */_Bool) var_1);
                            arr_28 [i_0] [i_2] [i_2] [(signed char)6] [i_7] = ((/* implicit */signed char) arr_25 [i_0] [i_0 - 1] [i_0] [i_1] [i_2] [i_0 - 1] [i_7]);
                            arr_29 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)169))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_5] [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_2] [i_5])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [3] [i_2] [(_Bool)1])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 2) 
                        {
                            arr_32 [i_2] [i_1] [i_2] [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_2 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_2 - 1]))));
                            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)30874)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8] [i_1] [i_8]))) ^ (arr_24 [i_0] [i_1] [i_1] [i_5] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169)))));
                        }
                        var_25 = ((/* implicit */int) arr_25 [i_2 - 1] [i_1] [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_1]);
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_9] [i_9] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_31 [i_0 + 1] [i_2] [i_0 + 1] [i_9] [i_9]))));
                            arr_37 [i_2] [i_1] [14ULL] [i_5] [i_5] = var_0;
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_2 + 1]);
                            arr_42 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)169)) > (((/* implicit */int) arr_39 [i_0 + 2] [i_0] [i_2] [i_0 + 1] [i_0 - 2] [i_2 + 1]))));
                            var_27 = ((/* implicit */short) arr_12 [i_10] [i_2] [i_2] [i_2] [(unsigned char)8]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) ((arr_41 [i_5] [i_2] [i_5] [i_5] [i_5] [i_2] [i_2]) ? (((/* implicit */int) arr_41 [i_5] [i_2] [i_11] [i_5] [(unsigned short)8] [i_2] [13ULL])) : (((/* implicit */int) arr_41 [i_5] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_0]))));
                            arr_45 [i_2] [i_11] = ((/* implicit */signed char) (short)1053);
                        }
                        var_29 = ((((/* implicit */int) arr_1 [i_0])) > (var_3));
                    }
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_49 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)107))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned short)30876))));
                        var_30 = ((/* implicit */short) (unsigned short)34662);
                        var_31 += ((/* implicit */unsigned long long int) arr_16 [i_12] [i_2] [i_12] [i_12]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                {
                    var_32 = ((/* implicit */int) arr_16 [i_13] [i_13] [i_14] [i_14]);
                    var_33 = ((/* implicit */_Bool) arr_24 [i_14] [i_0 - 2] [i_14] [i_0] [i_0 + 1]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                for (short i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    {
                        var_34 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [15LL])) / (var_3)))) ? (arr_35 [i_0] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_41 [i_0] [i_15] [i_16] [i_16] [i_15] [i_16] [i_15]) || ((_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_65 [i_18] [i_15] [i_16] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_40 [i_18] [i_0] [i_0] [i_15] [i_18])) * (((/* implicit */int) (unsigned short)34670)))));
                            var_35 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_18 [i_17] [i_17] [i_18] [i_15] [i_0])) ? (((/* implicit */int) (unsigned short)12293)) : (var_3)))));
                        }
                        for (short i_19 = 0; i_19 < 21; i_19 += 2) 
                        {
                            var_36 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (signed char)-21)) ? (var_11) : (((/* implicit */int) arr_41 [(unsigned char)20] [(signed char)16] [i_15] [i_16] [i_17] [i_16] [i_19])))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_19] [i_17] [i_0] [i_16] [i_0] [i_0 + 2] [i_0])) ? (((((/* implicit */_Bool) -949033224)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)55368)))) : ((-(((/* implicit */int) arr_31 [14LL] [i_16] [i_16] [i_16] [i_0]))))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [i_0] [i_0 - 2] [i_15] [i_0] [i_15] [i_15])) || (((/* implicit */_Bool) arr_48 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2]))));
        }
        for (long long int i_20 = 2; i_20 < 17; i_20 += 3) 
        {
            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_57 [i_0])))) * (((((/* implicit */_Bool) arr_60 [13] [13] [i_0] [i_0] [13] [i_20 + 2])) ? (((/* implicit */unsigned long long int) 580458331)) : (arr_35 [i_20] [(unsigned char)16])))));
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_20] [i_20] [i_20])) ? (((/* implicit */int) arr_18 [i_20] [i_20 - 1] [i_20] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_20] [i_20] [i_20] [(_Bool)1] [i_0]))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 19; i_21 += 2) 
            {
                for (short i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    {
                        var_41 = ((/* implicit */short) arr_67 [i_0] [i_0] [i_20] [i_20] [i_21] [(short)4]);
                        var_42 += ((/* implicit */unsigned char) 6659672013124367464LL);
                        /* LoopSeq 1 */
                        for (unsigned char i_23 = 0; i_23 < 21; i_23 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                            arr_79 [i_0] [(signed char)12] [i_0] [(signed char)12] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_20] [i_20] [i_21] [i_22] [i_23])) ? (((/* implicit */int) arr_11 [i_0] [i_22] [i_20] [i_0] [i_23] [i_22])) : (((/* implicit */int) arr_1 [i_22]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32)) ? (((/* implicit */int) arr_2 [i_20] [i_22] [i_23])) : (((/* implicit */int) var_16))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) * (var_7)))));
                            arr_80 [i_20] [i_20] [i_21] [i_21 + 2] [i_22] [i_23] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_57 [i_0])))) * (((/* implicit */int) arr_51 [i_0] [i_22]))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_78 [i_0] [i_20] [i_20 - 2] [i_23] [i_0 - 3] [i_21 + 1] [i_21])) ^ (((/* implicit */int) arr_78 [i_0 - 3] [i_0] [i_20 - 1] [i_23] [i_0 + 2] [i_21 - 1] [i_0]))));
                        }
                    }
                } 
            } 
            arr_81 [i_0] [i_20] = ((/* implicit */_Bool) arr_55 [i_0 - 3] [17LL]);
            arr_82 [i_20] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) > (arr_17 [i_20] [i_20] [i_20] [i_20])));
        }
    }
}
