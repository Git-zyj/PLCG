/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5147
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
    var_17 &= ((/* implicit */short) (~((+(((/* implicit */int) var_16))))));
    var_18 = ((/* implicit */signed char) var_16);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (signed char)123))));
            var_19 = ((/* implicit */long long int) (signed char)-123);
        }
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) /* same iter space */
        {
            var_20 -= arr_4 [i_0];
            arr_9 [i_2] = ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_2 - 2] [i_2 + 2]))));
            arr_10 [i_2] = ((/* implicit */signed char) ((((arr_8 [i_2] [i_2 - 3] [i_2 - 3]) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2 + 3] [i_0])))) >= (((/* implicit */int) (unsigned short)40430))));
        }
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            arr_13 [(signed char)6] [i_3] = (~(2742810263U));
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_2 [i_6]);
                            var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-27))));
                            arr_22 [i_6] [i_5] [i_3] [i_4] [i_3] [2U] [2U] = (!(((/* implicit */_Bool) arr_20 [i_3])));
                            arr_23 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */signed char) (~(-3991227688899456089LL)));
                            var_22 = ((/* implicit */_Bool) ((signed char) (signed char)21));
                        }
                        arr_24 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_5]);
                        var_23 = ((/* implicit */unsigned char) ((long long int) arr_12 [i_3 + 1] [i_4 + 1]));
                        var_24 += ((/* implicit */unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-2932))));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_7] = ((/* implicit */_Bool) max((arr_16 [i_0] [i_7]), (min((((/* implicit */short) arr_14 [i_0] [i_7] [i_0] [i_7])), (arr_16 [i_0] [i_7])))));
            arr_28 [i_0] [i_7] = arr_18 [i_7] [i_7];
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) arr_29 [i_7] [i_7]);
                var_26 = ((/* implicit */unsigned char) min((var_26), (arr_20 [i_8])));
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_27 = (!(((/* implicit */_Bool) arr_20 [i_7])));
                    var_28 = ((/* implicit */signed char) ((_Bool) 712519220433202708ULL));
                    arr_33 [i_0] [i_9] [i_0] [i_0] |= ((/* implicit */signed char) arr_2 [i_8]);
                }
                for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
                {
                    arr_36 [i_0] [i_0] [i_7] [i_7] [10LL] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_10]))))) : (arr_18 [i_7] [i_10 + 1])));
                    var_29 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((var_10) != (((/* implicit */int) var_6))))) : (((/* implicit */int) arr_1 [i_10 - 2]))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (-687752739)));
                }
                for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    arr_39 [i_11] [i_11] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_30 [(signed char)1] [(signed char)1])))) ? (((/* implicit */int) arr_16 [i_0] [i_7])) : (((/* implicit */int) arr_8 [i_7] [i_8] [i_11]))));
                    var_31 *= ((/* implicit */signed char) ((arr_2 [i_0]) / (arr_2 [i_8])));
                    arr_40 [i_7] [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) -1370868425);
                    var_32 = ((/* implicit */short) arr_3 [i_7]);
                }
                var_33 -= ((/* implicit */unsigned int) var_7);
            }
        }
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57943)) ? (((/* implicit */unsigned long long int) var_14)) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((((/* implicit */_Bool) (unsigned char)35)) ? (13835058055282163712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85)))))))));
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */int) max(((signed char)51), (arr_6 [i_0] [2LL])))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_8)))))))));
        var_36 -= ((/* implicit */long long int) (-((~(arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 2; i_13 < 13; i_13 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((signed char)92), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_44 [i_12])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_12] [12ULL] [i_12] [(unsigned char)0] [i_13 + 1] [i_12]))) : (min((arr_15 [i_12] [i_12] [i_12]), (arr_15 [i_13 + 2] [i_13 + 2] [i_12])))));
            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)105)) ? (((((/* implicit */_Bool) (short)-11)) ? (-7598821894008128799LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))));
        }
        arr_46 [i_12] [(signed char)12] |= ((/* implicit */_Bool) (signed char)-96);
        var_39 = ((((/* implicit */long long int) (~(arr_34 [i_12] [i_12] [(signed char)1] [i_12] [i_12])))) - (((((/* implicit */_Bool) arr_2 [i_12])) ? (arr_31 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_12] [i_12])) || (((/* implicit */_Bool) arr_1 [i_12])))))))));
        var_40 += ((/* implicit */unsigned int) ((long long int) (-(arr_43 [i_12] [14LL] [i_12]))));
    }
    for (unsigned char i_14 = 3; i_14 < 9; i_14 += 1) 
    {
        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_25 [i_14] [i_14])) : (((/* implicit */int) (short)-32052))))) ? (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) 4026531840U)) : (5LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_14] [i_14] [i_14] [i_14] [1LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (914666727U))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_14]), (11ULL)))) ? (arr_43 [i_15] [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_14] [2U])))))) ? (((/* implicit */unsigned int) ((arr_17 [12LL] [8LL] [i_15] [i_14 + 2] [i_14 + 2] [12LL]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [(signed char)10] [(signed char)10]))))))) : ((~(var_14)))));
            arr_51 [i_14] [i_15] [i_14] = (signed char)-6;
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 10; i_16 += 3) /* same iter space */
        {
            arr_56 [(unsigned short)10] [i_14] = ((/* implicit */signed char) var_7);
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_37 [7U] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_14 - 1]))));
            arr_57 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_14 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_4 [i_16 - 3])));
            var_44 = ((/* implicit */unsigned char) (signed char)-1);
            var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) ^ (((/* implicit */int) (unsigned char)4)))))));
        }
        /* vectorizable */
        for (int i_17 = 3; i_17 < 10; i_17 += 3) /* same iter space */
        {
            var_46 -= ((((/* implicit */_Bool) arr_35 [i_14 + 2] [(signed char)11] [14LL])) ? (((/* implicit */int) arr_35 [i_14 - 3] [i_14 - 3] [i_14])) : (((/* implicit */int) (unsigned char)236)));
            arr_61 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_17 - 1] [i_17 + 3] [i_17 - 1] [i_17] [i_17 - 2])) ? (((/* implicit */int) arr_6 [i_14 + 1] [i_14])) : (((/* implicit */int) arr_47 [i_17 + 1] [i_17]))));
            var_47 ^= ((/* implicit */signed char) ((((_Bool) arr_26 [i_14])) ? (((/* implicit */long long int) (~(-1681707594)))) : (arr_60 [i_14] [i_17 + 3] [(signed char)6])));
        }
        for (signed char i_18 = 1; i_18 < 10; i_18 += 2) 
        {
            var_48 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967283U)) > (2192305083933704961LL)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)1)), (arr_25 [i_14] [i_14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) arr_50 [i_14])) : (((/* implicit */int) arr_3 [i_14 - 3]))))) : (((arr_50 [i_14]) ? (((/* implicit */unsigned long long int) var_2)) : (arr_38 [i_18])))))));
            arr_65 [i_14] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_14 - 1] [i_18 + 3])) <= (((/* implicit */int) arr_54 [i_18 - 1] [i_18 + 3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4197764897U)) ? (arr_11 [i_14]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_14] [i_14]))) : (((((/* implicit */_Bool) arr_43 [i_18 - 1] [i_18 - 1] [i_18])) ? (arr_31 [i_14 - 2] [i_14 - 1] [i_14] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))))))));
        }
        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (-(((((/* implicit */_Bool) 2183586825852024396ULL)) ? (((/* implicit */unsigned long long int) 2027396139)) : (0ULL))))))));
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
    {
        var_50 = ((/* implicit */_Bool) var_1);
        var_51 += ((/* implicit */long long int) ((((/* implicit */_Bool) -2147483619)) ? (((/* implicit */int) (unsigned short)44134)) : (((/* implicit */int) (unsigned char)127))));
        var_52 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_66 [i_19]) : (arr_66 [i_19])));
        /* LoopNest 3 */
        for (signed char i_20 = 2; i_20 < 17; i_20 += 4) 
        {
            for (long long int i_21 = 1; i_21 < 16; i_21 += 2) 
            {
                for (long long int i_22 = 2; i_22 < 19; i_22 += 1) 
                {
                    {
                        arr_76 [i_22] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 828346168U)))) ? (((/* implicit */int) var_6)) : ((~(arr_71 [i_22 - 2] [i_19] [16U] [i_19])))));
                        var_53 = ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */int) (unsigned short)23146)) : (((/* implicit */int) (signed char)124)));
                    }
                } 
            } 
        } 
    }
    var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((var_3) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))) - (140))))))));
}
