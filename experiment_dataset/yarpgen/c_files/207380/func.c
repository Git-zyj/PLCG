/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207380
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
    var_12 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_7 [(short)0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_0] [8ULL])) & (((/* implicit */int) (signed char)-107))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_0 [i_1])))) ? (((unsigned long long int) arr_4 [0ULL] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4294967295LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(arr_3 [i_0] [i_2])))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) 2753174300498944866LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (var_3) : (var_3))))))) : ((~(-640799210)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_16 [3LL] [i_1] [i_1] [i_3] [7U] [i_3] [(signed char)11] = ((/* implicit */short) arr_14 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1 + 3] [i_0]);
                                arr_17 [i_4] [4U] [i_2] [6ULL] [i_4] &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_2 [i_2]))))));
                            }
                        } 
                    } 
                    arr_18 [3ULL] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~((-(-640799209)))));
                    arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                    arr_20 [0U] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_6 [i_0] [i_1] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [7LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_1]))))) : (arr_3 [i_0] [i_1 + 3]))))));
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_31 [i_6] [i_5] [i_7] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_15 [i_6 + 2] [i_1] [i_0] [i_6] [i_7] [i_1 + 2])))) ? (min((arr_29 [8ULL] [i_1] [i_1] [i_1] [i_1 + 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_15 [(signed char)8] [i_5] [i_5] [i_5] [i_5] [i_5])) : (var_10)))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                                arr_32 [i_0] [i_1] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned char) arr_27 [i_1] [i_1 + 4] [i_5] [i_6] [i_7] [i_0]);
                                arr_33 [i_5] [8LL] [i_5] [i_5] [i_5] = ((/* implicit */long long int) -1082162620);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 10; i_9 += 1) 
                        {
                            arr_40 [i_0] [i_1] [i_9 + 1] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_8] [i_9])) : (arr_14 [i_0] [i_0] [i_9 + 1] [i_1 + 4] [i_9] [i_9 + 1] [i_0])))) ? ((+((+(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((-(arr_24 [i_9 + 2] [i_9 - 1] [(signed char)9] [i_9 + 2] [i_9 - 1] [i_9 + 1])))));
                            arr_41 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-31619)))));
                            arr_42 [i_0] [i_1] [i_5] [i_8] [i_8] [i_5] [i_9] = ((/* implicit */unsigned int) arr_36 [9ULL] [i_9 + 2] [i_9 + 1] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            arr_45 [9LL] [i_1] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_46 [i_8] [i_5] [i_8] [i_5] [i_5] [i_1] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -1082162589)), (9223372036854710272ULL)));
                        }
                        arr_47 [i_8] [i_8] = ((var_1) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)12)) ? ((~(-640799209))) : (((/* implicit */int) (signed char)107))))));
                        arr_48 [i_0] [7ULL] [9] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0])), (arr_22 [i_0] [i_1 + 1] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_5]))))) : ((+(7369328406306568159LL)))))));
                        arr_49 [i_0] [i_0] [i_1] [i_8] [i_8] [i_8] = var_1;
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        arr_53 [i_5] [i_1] [(signed char)11] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)16), (arr_8 [i_11] [i_1]))))) > (((((/* implicit */_Bool) 4271123956062470964ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 4]))) : (arr_22 [i_0] [i_1] [i_1]))))))));
                        arr_54 [i_0] [i_0] [i_5] [5LL] [i_5] [i_11] = var_0;
                        arr_55 [i_5] [i_11] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_51 [i_0])) ? (((/* implicit */int) (signed char)-107)) : (-640799210)))))));
                        arr_56 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) (signed char)-82))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)5)))))));
                        arr_57 [i_5] [i_5] [i_11] = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)107))))))));
                    }
                    arr_58 [i_5] [i_1 + 1] [i_5] = ((/* implicit */int) min(((((((_Bool)1) ? (arr_36 [i_0] [i_1] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_5] [i_5]))))) + (((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_1] [i_0] [i_1 + 1] [i_5])) ? (-9200441552460449868LL) : (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) (signed char)62))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 4) 
                        {
                            {
                                arr_64 [10ULL] [i_1] [i_5] [i_12] [i_13 + 1] = ((/* implicit */long long int) 1703789636U);
                                arr_65 [i_1] [i_5] [(unsigned char)7] [i_5] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_5 [i_13 + 2] [i_1 + 1])))), (((((/* implicit */_Bool) arr_5 [i_13 - 1] [i_1 + 4])) ? (((/* implicit */int) arr_5 [i_13 - 1] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_13 + 2] [i_1 + 4]))))));
                                arr_66 [i_12] [i_12] [i_12] [8] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 4278190080U))))))));
                                arr_67 [(short)3] [i_1] [i_12] [i_5] [i_13] [i_5] = ((/* implicit */long long int) var_8);
                            }
                        } 
                    } 
                    arr_68 [i_5] [i_1 + 2] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-1))));
                }
            }
        } 
    } 
}
