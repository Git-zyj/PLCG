/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215641
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) ^ (arr_0 [i_0 - 2] [i_0 - 2])));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 2; i_3 < 9; i_3 += 4) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned long long int) (short)0);
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_3 + 2] [i_2 - 2]))) : (arr_0 [i_0 + 1] [i_3 + 2]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((long long int) arr_12 [i_1] [i_3] [i_1] [i_1])) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)24)))) - (25737)))));
                        var_14 = ((/* implicit */unsigned long long int) var_4);
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)252)))))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(unsigned char)4] [i_2] [i_2 - 2])) ? (arr_11 [i_0] [i_0] [i_2 + 2] [i_3 - 2] [i_0]) : (arr_11 [i_0 + 3] [i_0 + 1] [i_1] [i_1] [i_1])));
                    }
                }
                for (long long int i_6 = 2; i_6 < 9; i_6 += 4) /* same iter space */
                {
                    arr_18 [i_6] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned char) var_8);
                    var_17 = ((/* implicit */signed char) (-(((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                }
                for (long long int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)1]))))));
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (var_5) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_7 - 1])))))));
                    var_20 = ((/* implicit */int) arr_5 [(short)6] [8ULL]);
                }
                arr_21 [i_0 + 3] [i_0 + 3] [i_2] [i_0 - 1] = ((/* implicit */long long int) var_4);
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    arr_24 [i_0 + 1] [i_8] [i_0 + 3] [i_0 - 2] [9LL] [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_0] [i_8]);
                    arr_25 [i_0] [i_0] [i_8] [i_8] [(unsigned short)8] [i_1] = ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0 + 1])) - (arr_1 [i_0] [i_1]));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)252))))) ? (arr_15 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1] [i_8]) : (arr_16 [5ULL] [i_2 + 2] [i_2])));
                }
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_2] [i_9] [0LL])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)248)))) << (((((int) arr_12 [i_0] [i_1] [i_0] [i_9])) - (784003936))))))));
                        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_2 - 2] [i_0 + 2] [i_0 - 1] [(_Bool)1]))));
                        var_24 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))))));
                        var_25 &= ((/* implicit */unsigned long long int) arr_12 [(unsigned char)2] [i_1] [(unsigned char)2] [i_1]);
                    }
                    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_26 &= ((/* implicit */unsigned char) var_9);
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((((/* implicit */int) var_11)) << (((var_5) - (1737408659)))))));
                    }
                    var_29 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_2)))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_30 &= ((/* implicit */unsigned char) var_8);
                        var_31 &= ((/* implicit */_Bool) ((arr_15 [i_2 - 1] [i_1] [i_2] [i_9] [i_12] [i_12] [(_Bool)1]) + (arr_15 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_12] [i_12] [i_0])));
                        var_32 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)247)) ^ (((/* implicit */int) (unsigned char)3))));
                    }
                    var_33 = ((/* implicit */short) (~(((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) var_2))))));
                }
                for (unsigned char i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    arr_40 [i_0 + 1] [i_1] [i_1] [i_13] [(unsigned char)10] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (unsigned char)8))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    var_35 -= ((/* implicit */int) arr_8 [i_0] [0ULL] [i_2] [i_14 - 1]);
                    var_36 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)3)))));
                    var_37 = (~(arr_34 [i_0] [i_1] [(unsigned char)2] [i_14] [(unsigned char)2] [i_0]));
                    var_38 = ((/* implicit */signed char) var_11);
                }
            }
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) var_5);
                            var_40 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) var_3)))));
                        }
                    } 
                } 
            } 
            arr_50 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) ((signed char) arr_42 [7LL] [7LL] [7LL] [i_0] [i_1])))));
            arr_51 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_42 [(unsigned char)10] [(unsigned char)10] [i_0] [10ULL] [(unsigned char)10]) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_1])))) : (((/* implicit */int) arr_5 [i_0] [i_1]))));
        }
        /* LoopSeq 4 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_56 [i_0] [0LL] = ((/* implicit */_Bool) var_1);
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                for (unsigned char i_20 = 2; i_20 < 9; i_20 += 2) 
                {
                    {
                        arr_63 [i_20] [i_0] [i_18] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0)))))));
                        var_41 = var_9;
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((signed char) var_6)))));
                    }
                } 
            } 
            arr_64 [i_18] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [2U] [i_18] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [2LL] [(unsigned short)8] [i_18])))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_0] [i_0 + 3] [i_0 + 3] [i_18]))))));
        }
        for (unsigned char i_21 = 4; i_21 < 8; i_21 += 2) 
        {
            arr_67 [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) | (((/* implicit */int) (unsigned char)250))))) ? ((~(((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [4LL] [i_0 + 2] [4LL])))) : (((/* implicit */int) arr_57 [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 3]))));
            arr_68 [i_0 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_27 [i_0 - 1] [i_0 + 2] [i_21 - 1] [i_21 + 1] [i_21 + 3] [i_21 - 4]));
            var_43 = ((/* implicit */signed char) min((var_43), (((signed char) ((((/* implicit */int) arr_27 [i_0] [i_21] [i_21] [i_21] [i_21] [i_21])) == (((/* implicit */int) arr_65 [i_0] [i_21] [i_0 - 2])))))));
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_44 = ((/* implicit */unsigned long long int) ((unsigned short) var_6));
            var_45 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)8))));
        }
        for (long long int i_23 = 0; i_23 < 11; i_23 += 3) 
        {
            var_46 = ((int) arr_1 [i_0 - 2] [i_0 + 2]);
            var_47 -= ((/* implicit */unsigned short) arr_31 [i_0] [i_0] [i_0] [9LL] [9] [i_23] [i_0]);
            /* LoopNest 2 */
            for (signed char i_24 = 1; i_24 < 9; i_24 += 2) 
            {
                for (short i_25 = 2; i_25 < 10; i_25 += 2) 
                {
                    {
                        var_48 |= ((/* implicit */long long int) (unsigned char)245);
                        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_0] [i_0])))))))))));
                    }
                } 
            } 
            arr_77 [i_23] [i_23] [i_0] = arr_60 [i_0] [i_0] [i_23] [i_0] [i_0];
            var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
        }
    }
    var_51 = ((/* implicit */_Bool) var_10);
    var_52 += ((/* implicit */unsigned int) ((unsigned short) (unsigned char)244));
    var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
}
