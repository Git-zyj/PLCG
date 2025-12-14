/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197995
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_2 [i_0])));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(arr_2 [i_0]))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(arr_4 [i_0] [i_1])))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))))));
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_1]))))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2]))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_2])))) : ((-(((/* implicit */int) arr_6 [i_2]))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_3] [i_0] [i_2] = ((/* implicit */long long int) arr_9 [i_2]);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_4] [(unsigned char)3])) : (((/* implicit */int) arr_13 [i_2] [i_2]))));
                    }
                } 
            } 
            var_19 = ((/* implicit */short) (((~(((/* implicit */int) arr_14 [i_0] [i_2] [(_Bool)1] [(signed char)4] [i_2] [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_0] [10LL]))));
        }
        for (short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_6 + 2])))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_22 [i_5] [i_5] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_5])))))) && (((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 2]))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [11] [i_0] [i_0] [(unsigned char)2] [i_0])) * (((/* implicit */int) arr_9 [(unsigned short)0]))))) == (((((/* implicit */unsigned long long int) arr_7 [i_5])) ^ (arr_25 [i_0] [i_5] [(_Bool)1] [4ULL]))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_5] [i_5] [i_6] [i_7 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5])))))) + (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_25 [i_5] [(unsigned char)0] [(unsigned char)0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5])))))));
                }
            }
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_24 [i_0] [(short)0] [i_5] [i_5])) * (((/* implicit */int) arr_0 [i_5] [i_0])))) >> (((((/* implicit */int) arr_11 [i_5] [i_5])) + (20233))))))));
            /* LoopNest 3 */
            for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_26 = (!(((/* implicit */_Bool) (~(arr_1 [i_9])))));
                            var_27 = ((/* implicit */long long int) (~(arr_8 [i_0] [(unsigned char)19] [i_0])));
                            arr_34 [i_0] [i_0] [19LL] [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [7] [i_0] [i_5])) ? (((((/* implicit */_Bool) arr_16 [i_10] [i_9] [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [3LL] [i_5]))) : (arr_15 [i_0] [i_5] [i_8 - 1] [i_8 - 1] [i_10]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_9] [i_8] [i_5])) ? (arr_5 [i_0] [i_5]) : (arr_5 [i_0] [i_0]))))));
                            var_28 = arr_33 [i_5] [i_8] [i_5];
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (arr_15 [i_13] [i_13] [(signed char)6] [i_13] [i_0])));
                        arr_43 [i_13] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((arr_36 [i_13] [i_12] [i_0]) ? (arr_5 [5U] [i_11]) : (((/* implicit */int) arr_16 [i_0] [i_11] [i_12])))) != (((/* implicit */int) ((((/* implicit */int) arr_21 [i_13] [i_12] [i_0])) <= (arr_2 [i_0]))))));
                        arr_44 [i_13] [i_12] [i_11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_12]) ^ (((/* implicit */int) arr_33 [i_11] [i_12] [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_13] [1] [i_0]))) : (((arr_36 [i_11] [9] [i_11]) ? (arr_1 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_13])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                for (int i_15 = 2; i_15 < 18; i_15 += 3) 
                {
                    {
                        var_30 = ((arr_36 [i_15 - 1] [i_15 + 1] [i_11]) ? (arr_31 [i_15 - 2] [i_15 - 1] [i_15 + 2]) : (((arr_10 [i_0] [19ULL] [i_0] [i_14]) | (((/* implicit */long long int) arr_15 [i_0] [i_14] [i_11] [i_14] [19LL])))));
                        var_31 = (i_14 % 2 == 0) ? (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_14])) : (((/* implicit */int) arr_33 [i_11] [(signed char)13] [i_14])))) + (2147483647))) >> ((((-(arr_41 [i_15]))) - (1454870779)))))) : (((/* implicit */unsigned short) ((((((((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_14])) : (((/* implicit */int) arr_33 [i_11] [(signed char)13] [i_14])))) - (2147483647))) + (2147483647))) >> ((((-(arr_41 [i_15]))) - (1454870779))))));
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_14] [i_11])))))));
                    }
                } 
            } 
            var_33 = ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_0])) <= (arr_19 [i_0] [i_11] [i_11])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11]))))));
            var_34 = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_11] [(short)5] [i_0]))));
            /* LoopNest 2 */
            for (unsigned short i_16 = 3; i_16 < 19; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_20 [i_11]))));
                        var_36 = ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_16 - 2] [i_16] [i_16 - 2] [i_16 - 3] [i_16 - 2] [i_16]))) ^ (arr_39 [i_16 - 1] [i_16 - 3] [i_16 - 3]));
                        arr_57 [i_0] [i_0] [i_16] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_11])) && (((/* implicit */_Bool) arr_6 [i_11]))))) * (arr_41 [i_17])));
                        var_37 ^= ((/* implicit */short) (((+(arr_7 [i_0]))) % (((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_11] [i_11] [i_16 - 1] [i_17])) | (((/* implicit */int) arr_36 [(unsigned char)5] [i_11] [(short)3])))))));
                        /* LoopSeq 3 */
                        for (long long int i_18 = 3; i_18 < 19; i_18 += 1) /* same iter space */
                        {
                            arr_60 [i_18] [i_11] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_24 [i_18 - 2] [i_11] [i_11] [4U]) && (arr_51 [i_0] [i_11] [i_0] [i_17]))))));
                            var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_16] [i_17] [(signed char)1] [i_0]))));
                        }
                        for (long long int i_19 = 3; i_19 < 19; i_19 += 1) /* same iter space */
                        {
                            var_39 = arr_10 [i_0] [2] [(unsigned short)10] [i_11];
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_51 [i_0] [i_16 - 1] [i_17] [i_19]) ? (((/* implicit */int) arr_63 [i_0] [i_11] [i_16] [i_0] [i_19])) : (((/* implicit */int) arr_58 [i_11] [(short)15] [4LL]))))) || (arr_59 [i_19 - 3] [i_16 - 2] [i_0])));
                            var_41 = ((/* implicit */unsigned char) (-(arr_19 [i_19 - 2] [i_16 - 1] [i_16])));
                        }
                        for (long long int i_20 = 3; i_20 < 19; i_20 += 1) /* same iter space */
                        {
                            var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_11]) ? (arr_41 [i_0]) : (((/* implicit */int) arr_30 [i_11]))))) ? (((((/* implicit */_Bool) arr_6 [i_11])) ? (((/* implicit */int) arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_11])))) : (((/* implicit */int) arr_42 [i_16] [i_16] [i_16] [i_16] [i_16 - 1]))));
                            var_43 -= ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_11] [(short)4] [i_16 - 2] [i_20 + 1])) / (arr_37 [i_11])))) ? (((/* implicit */int) ((arr_53 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6]) > (((/* implicit */long long int) arr_12 [i_11] [i_11] [i_11]))))) : (((((/* implicit */_Bool) arr_67 [i_0] [(signed char)4] [i_16 - 3] [i_17] [i_20 + 1])) ? (((/* implicit */int) arr_64 [i_16] [5] [18LL] [i_16 - 1] [19LL] [i_16])) : (((/* implicit */int) arr_63 [i_0] [i_11] [(_Bool)1] [i_17] [i_20 - 1])))));
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_50 [i_16 - 2] [i_20 - 2]) || (arr_50 [i_16 - 3] [i_20 - 1])));
                        }
                    }
                } 
            } 
        }
    }
    for (short i_21 = 0; i_21 < 20; i_21 += 3) /* same iter space */
    {
        var_44 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_21] [i_21] [i_21])) ? (arr_7 [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [(signed char)8] [i_21])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_35 [i_21]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_21] [i_21] [i_21] [i_21] [i_21]))))))) : (min((arr_31 [i_21] [i_21] [i_21]), (((/* implicit */long long int) arr_0 [i_21] [i_21]))))))));
        arr_72 [i_21] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_19 [i_21] [i_21] [i_21])) ? (arr_19 [i_21] [i_21] [i_21]) : (arr_19 [i_21] [i_21] [i_21]))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_19 [i_21] [i_21] [i_21])) ? (arr_19 [i_21] [i_21] [i_21]) : (arr_19 [i_21] [i_21] [i_21]))) + (2104223830)))));
        var_45 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((arr_31 [i_21] [2U] [i_21]) != (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_21] [i_21])))))))), (max((((arr_49 [i_21] [i_21] [i_21]) ? (arr_10 [i_21] [(unsigned char)17] [i_21] [i_21]) : (((/* implicit */long long int) arr_19 [i_21] [i_21] [i_21])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_47 [i_21] [i_21] [i_21] [i_21])))))))));
        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_40 [i_21] [i_21] [i_21] [i_21]), (arr_40 [i_21] [i_21] [i_21] [i_21])))) || ((!(((/* implicit */_Bool) arr_40 [i_21] [i_21] [i_21] [i_21]))))));
        var_47 = ((/* implicit */long long int) min((var_47), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [19U])) ? (((/* implicit */int) arr_29 [9U] [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_21 [(short)12] [i_21] [6]))))) ? (((((/* implicit */_Bool) arr_25 [i_21] [i_21] [i_21] [(unsigned short)10])) ? (((/* implicit */long long int) arr_32 [i_21] [i_21] [(unsigned char)14] [i_21] [(unsigned short)16] [i_21])) : (arr_53 [i_21] [i_21] [i_21]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_21] [i_21] [i_21] [i_21] [i_21])) && (((/* implicit */_Bool) arr_53 [5LL] [i_21] [i_21]))))))))))));
    }
    var_48 = ((/* implicit */int) (-(max((max((((/* implicit */unsigned long long int) var_3)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) >= (var_6))))))));
    var_49 = ((/* implicit */unsigned long long int) ((var_7) << (((((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) - (892421201U)))));
}
