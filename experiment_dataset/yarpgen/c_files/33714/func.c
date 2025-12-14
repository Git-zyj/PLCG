/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33714
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)52)), (((unsigned char) (signed char)-53)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)52)) & (((/* implicit */int) arr_0 [(unsigned short)15]))));
        arr_4 [i_0] = (-(((/* implicit */int) (signed char)52)));
        var_16 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [4U])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        var_17 *= ((/* implicit */short) ((((/* implicit */int) (signed char)61)) >= (((/* implicit */int) (short)-1))));
    }
    var_18 += ((/* implicit */long long int) ((short) ((short) var_8)));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_7 [(signed char)9] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) min((1625790270), (((/* implicit */int) (short)-28191))))) / (((((/* implicit */_Bool) (signed char)52)) ? (-6056351523048751036LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31023)))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [(short)1] = ((/* implicit */signed char) min(((-(((/* implicit */int) (short)-3)))), (((/* implicit */int) max((((/* implicit */short) ((unsigned char) (signed char)49))), ((short)28192))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_19 [i_1] [i_1] [(unsigned char)12] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_1] [i_3 - 2])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((+(((((/* implicit */_Bool) arr_12 [(unsigned char)14] [i_2])) ? (((/* implicit */long long int) arr_5 [i_4])) : (-6056351523048751036LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_3])), (arr_16 [i_1] [i_1] [i_3] [i_4] [i_1] [i_3 + 1])))))));
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_0 [i_2]))))))))));
                        arr_20 [i_1] [2LL] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3] [i_1] [i_4] [i_4]))))) * (((/* implicit */int) min((var_10), (arr_13 [i_2])))))) >= ((-((-(((/* implicit */int) (unsigned short)39665))))))));
                        var_20 = ((/* implicit */short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) != (((/* implicit */int) var_10))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_26 [i_1] [i_5] = ((/* implicit */_Bool) arr_25 [i_3 + 2] [(short)14] [(unsigned short)16] [i_3] [i_3] [i_3] [i_3]);
                                var_21 = ((/* implicit */signed char) ((((unsigned long long int) arr_18 [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 2] [i_3 - 2])) | (((arr_10 [i_3 + 1] [i_3] [i_3 + 2] [i_3 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))))));
                                var_22 = ((/* implicit */short) (unsigned char)43);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (int i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_31 [i_1] [7U] [7U] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)28206)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28193))) : (0ULL)))));
                                var_23 = ((/* implicit */int) min(((~((-(var_12))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28191)) ? (-1403007451) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_3 + 1] [i_3 + 2] [i_8] [i_8 - 1]))) : (arr_10 [i_3] [i_3 - 2] [i_8 + 1] [i_8 + 1])))));
                                arr_32 [i_1] [i_7] [i_3] [i_7] [i_8] [i_2] = ((unsigned char) min((min((((/* implicit */unsigned int) (short)-14971)), (424805406U))), (((/* implicit */unsigned int) (short)-28164))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) arr_13 [i_1]);
                }
            } 
        } 
    }
    for (short i_9 = 4; i_9 < 10; i_9 += 1) 
    {
        arr_35 [i_9] [1LL] = ((/* implicit */unsigned short) ((_Bool) arr_13 [i_9]));
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) arr_27 [i_9] [(signed char)21] [(signed char)21] [5ULL]);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_10] [i_9]))) == (((((/* implicit */_Bool) ((unsigned long long int) arr_12 [(_Bool)1] [i_10]))) ? (((((/* implicit */_Bool) 2046LL)) ? (arr_34 [(unsigned short)9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28331))))))))));
            arr_39 [i_9] = ((/* implicit */unsigned int) (short)-16384);
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), ((unsigned short)10932)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_12 = 2; i_12 < 10; i_12 += 2) 
                {
                    var_28 |= (!(((/* implicit */_Bool) (signed char)127)));
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_2 [(unsigned char)5] [i_11]))));
                }
            }
            for (int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
            {
                var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(arr_30 [i_9 - 3] [i_9 - 3] [i_10] [i_13] [i_13]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_10] [i_9] [i_9 - 3] [i_9 - 3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3)) ? (arr_33 [i_9 - 3] [i_10 - 1]) : (((/* implicit */int) (short)-19429))))) : ((~(arr_6 [i_9])))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 1) 
                {
                    for (int i_15 = 1; i_15 < 8; i_15 += 3) 
                    {
                        {
                            arr_51 [(short)9] [i_9 + 1] [i_10] [i_13] [i_9] [4] = ((/* implicit */unsigned long long int) arr_41 [(signed char)5]);
                            arr_52 [(unsigned char)0] [i_10 + 1] [i_13] [2ULL] [i_13] &= ((/* implicit */unsigned short) (signed char)-1);
                            var_31 &= ((/* implicit */signed char) (+((~(arr_50 [i_10] [i_14] [i_15 + 2] [2] [5U] [1LL])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        {
                            arr_58 [i_9] [i_10] [i_10 - 1] [10] [10] = ((/* implicit */unsigned int) (signed char)0);
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_48 [i_9] [10U] [10U] [i_9]))));
                            arr_59 [i_9] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) min(((+(arr_30 [i_10 + 1] [i_10 - 1] [4LL] [4LL] [i_10 - 1]))), (((/* implicit */unsigned long long int) ((arr_30 [i_10] [i_10] [i_10 - 1] [21LL] [i_10 + 1]) > (arr_30 [i_10] [i_10] [8U] [i_10 - 1] [i_10 + 1]))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_23 [i_9] [(unsigned char)15] [i_9 + 1] [(unsigned short)18] [i_9 - 4]))) ? ((-((+(7234836217832378236ULL))))) : (((/* implicit */unsigned long long int) 4294967277U))));
                        }
                    } 
                } 
            }
        }
    }
    /* LoopNest 2 */
    for (long long int i_18 = 2; i_18 < 17; i_18 += 3) 
    {
        for (unsigned int i_19 = 0; i_19 < 20; i_19 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (short i_21 = 1; i_21 < 19; i_21 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_22 = 0; i_22 < 20; i_22 += 1) 
                            {
                                var_34 = ((/* implicit */long long int) (+(((arr_11 [i_21 - 1] [(unsigned char)18] [i_18 + 3]) ? (((/* implicit */int) arr_8 [i_18 - 2] [i_21] [i_20])) : (((/* implicit */int) (short)29780))))));
                                var_35 = ((/* implicit */unsigned int) (signed char)18);
                                var_36 = ((/* implicit */int) ((unsigned int) (short)-25892));
                                var_37 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                                var_38 = ((((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)109)))) + (2147483647))) << (((((-5903647206948052662LL) + (5903647206948052670LL))) - (8LL)))))) ? (((/* implicit */int) arr_2 [i_21] [(unsigned short)7])) : (((/* implicit */int) ((unsigned short) arr_69 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1]))));
                            }
                            var_39 += ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_12)))));
                            var_40 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_21 + 1])) ? (arr_30 [19U] [i_19] [(short)12] [i_19] [i_19]) : (((/* implicit */unsigned long long int) 2967287142U))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_70 [i_18 - 2] [(unsigned short)16] [9U] [i_21])) << (((/* implicit */int) (signed char)3))))) : (((unsigned int) arr_24 [i_18] [i_18 - 1])))));
                        }
                    } 
                } 
                var_41 += ((/* implicit */unsigned long long int) arr_0 [i_19]);
                /* LoopNest 3 */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        for (int i_25 = 2; i_25 < 17; i_25 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((_Bool) (short)5581)))));
                                var_43 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_70 [i_25 + 2] [i_23 + 1] [i_18 - 1] [i_24])))))));
                                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_18 - 1] [i_23 + 1] [i_25 - 2] [i_25] [i_25] [i_25])) ? (((/* implicit */int) arr_79 [i_18 + 2] [i_23 + 1] [i_25 + 2] [15ULL] [i_25] [i_25 + 2])) : (((/* implicit */int) arr_79 [i_18 - 2] [i_23 + 1] [i_25 + 1] [i_25 - 1] [i_25 + 1] [i_25 - 2]))))) ? (((/* implicit */int) arr_79 [i_18 + 2] [i_23 + 1] [i_25 - 1] [i_25] [(short)9] [(unsigned char)3])) : (((/* implicit */int) arr_79 [i_18 + 3] [i_23 + 1] [i_25 + 3] [i_25] [i_25] [i_25]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
