/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219813
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_5 [i_0 - 2] [i_1 + 1])))));
            var_15 = ((/* implicit */unsigned char) ((short) ((unsigned short) var_9)));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
            var_17 |= ((/* implicit */unsigned char) max((2486365492U), (2486365495U)));
        }
        for (unsigned short i_3 = 4; i_3 < 18; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2486365492U)) || (((/* implicit */_Bool) (signed char)70)))))) + (min((((long long int) var_8)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_0])) : (((/* implicit */int) var_1)))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) - (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_4] [i_0 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [i_0] [i_3]))))), (((arr_2 [i_3]) / (((/* implicit */long long int) arr_9 [i_0] [i_3] [i_3])))))))))));
                    var_20 = ((/* implicit */unsigned int) ((short) max((arr_10 [i_3] [(signed char)3]), (((/* implicit */unsigned short) arr_0 [i_3] [i_5])))));
                    var_21 = ((/* implicit */signed char) arr_0 [i_0] [(signed char)3]);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_6))));
                        var_23 = ((/* implicit */long long int) arr_14 [i_0] [i_3]);
                    }
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) max(((short)-18), (((/* implicit */short) ((max((0ULL), (0ULL))) <= (((/* implicit */unsigned long long int) 0U)))))));
                        var_25 = ((/* implicit */short) max((max((min((((/* implicit */unsigned long long int) var_10)), (var_9))), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_7])))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]))));
                    }
                    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (short)0)), (2486365495U))) ^ (arr_12 [i_4 - 3] [i_0])))), (var_9)));
                }
                for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (max((((/* implicit */unsigned short) arr_11 [i_3] [i_4] [i_0])), (arr_16 [i_0] [12U] [i_0] [12U] [i_0] [i_0])))))) & (((((/* implicit */_Bool) min((arr_16 [i_0] [i_3 - 1] [i_0] [i_8] [i_3 - 1] [i_8]), (arr_10 [i_0] [i_0])))) ? (((/* implicit */int) arr_11 [i_0] [i_3] [i_0])) : (arr_3 [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 4 */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_25 [i_0] [i_3] [i_0 + 2] [i_0 + 2] [i_3] = ((/* implicit */long long int) arr_14 [i_0] [(unsigned short)8]);
                        var_28 = arr_5 [i_0] [i_0];
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((short) max((arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [(short)12]), (((/* implicit */unsigned int) arr_14 [4ULL] [4ULL])))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (arr_12 [i_0] [i_0]))), (((4084253588U) * (1069547520U))))))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_3])) ? (((unsigned int) var_4)) : (arr_9 [i_3] [i_3] [i_3])));
                        var_31 = ((/* implicit */long long int) ((short) ((unsigned int) var_5)));
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) arr_18 [i_0] [i_3] [i_4] [i_11]);
                        var_33 = ((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0]))) << (((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_2)))) + (53718))));
                        arr_32 [i_0] [i_0] [i_4] [i_0] [i_8] [i_3] [i_0] = ((int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_8 [i_0] [i_3 - 2] [i_8]))));
                    }
                    for (unsigned int i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((int) (signed char)-23))))) | (1688978814168751891LL)));
                        arr_36 [i_0] [i_0] [3] [i_0] [i_8] [i_3] = ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_0] [i_3] [i_4] [i_3] [i_4])), (arr_1 [i_4 + 1]))))) + (((long long int) arr_1 [i_4])))) ^ (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) min((arr_1 [4]), (arr_16 [i_3] [i_3] [i_3] [i_3] [(short)3] [i_3 - 4]))))))));
                        var_35 &= ((/* implicit */short) ((((-4927496790838338816LL) + (((/* implicit */long long int) ((/* implicit */int) (short)28672))))) % (((((/* implicit */long long int) ((/* implicit */int) ((var_4) > (((/* implicit */int) arr_7 [1LL])))))) | (arr_27 [i_0 - 2] [i_12])))));
                        var_36 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((unsigned long long int) arr_1 [i_3])) : (((/* implicit */unsigned long long int) ((arr_31 [i_0] [i_0] [i_4 + 2] [i_8] [i_12]) ? (((/* implicit */int) var_10)) : (arr_26 [i_0 - 1])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_5)))))) % (((arr_2 [i_0]) - (((/* implicit */long long int) arr_26 [i_0])))))))));
                    }
                    var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (max((arr_20 [i_8] [i_8] [i_4] [i_8] [i_8]), (((/* implicit */unsigned char) arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8] [i_8 - 2]))))))), (min((((/* implicit */unsigned int) ((arr_13 [i_0] [i_3] [i_3] [i_3] [i_3] [i_8]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [17ULL] [17ULL])))))), (arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))));
                    var_38 = ((/* implicit */unsigned int) var_13);
                    var_39 = ((/* implicit */short) ((((/* implicit */int) var_10)) != (((int) arr_4 [i_4] [i_8]))));
                }
                var_40 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                var_41 ^= ((/* implicit */signed char) ((unsigned int) (unsigned char)25));
            }
            /* vectorizable */
            for (unsigned int i_13 = 2; i_13 < 18; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 1; i_14 < 16; i_14 += 2) 
                {
                    for (int i_15 = 3; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_42 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_13] [i_15])) << (((arr_27 [i_13] [i_0]) - (4075258307169462828LL))))) & (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)90))))));
                            var_43 = ((/* implicit */signed char) var_4);
                            arr_46 [i_0] [i_3] [i_0] [i_14] [i_15] = ((/* implicit */unsigned char) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 16; i_16 += 3) 
                {
                    for (short i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned short) var_5);
                            arr_53 [i_0] [i_0] [i_0] [(signed char)4] [i_17] |= ((/* implicit */short) arr_28 [5ULL] [i_3] [i_3] [5ULL] [5ULL]);
                            var_45 = arr_13 [i_0] [i_3] [i_3] [i_0] [i_16 + 3] [i_0];
                            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_3] [i_16] [i_17] [i_17])) ? (((/* implicit */unsigned long long int) 134217712)) : (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_3] [i_0] [i_0]))) : (18446744073709551607ULL)))));
                        }
                    } 
                } 
            }
        }
        for (int i_18 = 2; i_18 < 18; i_18 += 4) 
        {
            arr_56 [i_0] [i_0] [i_18] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) 4084253588U)) % (18442240474082181120ULL))));
            var_47 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_48 [i_0] [i_0] [i_0])), (arr_2 [(short)11])))) | (arr_33 [i_18] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((int) (unsigned char)253)), (((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (arr_8 [i_0] [i_0] [i_18 + 1])))))))));
            arr_57 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */int) min((arr_10 [i_0] [i_18]), (((/* implicit */unsigned short) var_2))))) << (((unsigned long long int) (signed char)7)))) >> (((arr_52 [i_0] [i_0] [i_0] [i_0] [i_0]) - (3617993312U)))));
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_18] [2U] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) arr_34 [i_0] [i_18] [i_18] [i_0] [i_0])) : (min((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(short)2] [i_18]))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))))));
        }
        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 1])), (arr_41 [i_0] [(short)8] [10LL] [i_0])))) - (3991))))) << (((max((((/* implicit */unsigned int) arr_26 [i_0])), (((unsigned int) arr_19 [i_0] [i_0] [i_0 - 1] [i_0])))) - (4294962218U))))))));
        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) arr_26 [i_0]))));
        var_51 *= ((/* implicit */short) min((((unsigned long long int) ((int) arr_15 [(short)8] [i_0] [i_0 + 3] [(signed char)14] [(signed char)14] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-29))) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)-29)))))));
    }
    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
    {
        arr_60 [i_19] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) var_12)), (arr_59 [i_19]))))), (((arr_59 [i_19]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_19])))))));
        var_52 *= var_1;
        var_53 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) min((arr_58 [i_19]), (arr_58 [i_19])))) && (((/* implicit */_Bool) var_2))))), (min((min((((/* implicit */int) (signed char)-32)), (0))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) var_3))))))));
        var_54 ^= ((unsigned short) max((min((arr_58 [i_19]), (arr_58 [i_19]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_58 [i_19])) == (((/* implicit */int) arr_58 [(unsigned char)17])))))));
    }
    for (unsigned int i_20 = 0; i_20 < 21; i_20 += 4) /* same iter space */
    {
        arr_65 [i_20] = ((/* implicit */unsigned char) var_6);
        arr_66 [7] [i_20] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_20])) ^ (arr_62 [(unsigned short)9] [20U])))), (min((-91375132270681065LL), (((/* implicit */long long int) -732792242))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_20]))) % (arr_64 [i_20]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_63 [i_20])) : (((/* implicit */int) var_3)))))))));
        arr_67 [i_20] &= ((/* implicit */signed char) max((((((/* implicit */int) arr_58 [i_20])) << (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) arr_61 [i_20]))));
        var_55 *= ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) (short)0))) & (((/* implicit */int) (unsigned char)228)))), (min((((((/* implicit */int) var_0)) | (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_61 [i_20])) | (((/* implicit */int) arr_58 [i_20]))))))));
    }
    var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_12))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */short) var_1))))) || (((/* implicit */_Bool) var_12))))))))));
    var_57 -= var_7;
}
