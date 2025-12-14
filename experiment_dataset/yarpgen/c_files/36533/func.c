/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36533
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */unsigned short) 0ULL);
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14117304251171797952ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-1))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((var_4), (((((/* implicit */_Bool) (unsigned char)188)) || (var_2)))))) : (((var_2) ? (((/* implicit */int) min((var_3), (((/* implicit */short) var_7))))) : (((((/* implicit */int) var_8)) - (((/* implicit */int) var_12))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_3 = 3; i_3 < 14; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                arr_18 [i_0] = ((/* implicit */unsigned short) arr_8 [(signed char)15]);
                var_15 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), ((~((-(arr_15 [i_4])))))));
            }
            for (int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            arr_27 [i_0] [i_3 + 3] [i_3 + 3] [11ULL] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 0U))))) : (((/* implicit */int) arr_22 [i_3 - 2] [i_3] [i_0])))) <= (((/* implicit */int) var_4))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_12))));
                            arr_28 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) arr_12 [(unsigned char)4] [i_6] [3U]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)27222), (((/* implicit */unsigned short) (unsigned char)28))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_3 + 3] [i_5])))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_7))))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (var_7)));
                }
                for (short i_9 = 2; i_9 < 14; i_9 += 1) 
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 3965374526192848706LL))));
                    var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_35 [i_0] [i_0] [i_5] [i_9] [i_5] [5LL])) * (arr_24 [i_3 - 1])))) ? (((/* implicit */int) arr_2 [2ULL] [2ULL])) : (((/* implicit */int) max((((/* implicit */short) var_2)), (arr_6 [i_5] [i_0])))))) > (((/* implicit */int) ((((((/* implicit */int) var_8)) | (((/* implicit */int) (short)-6818)))) >= (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (short)26952))))))))));
                    var_21 = ((/* implicit */unsigned long long int) var_7);
                    var_22 = ((/* implicit */unsigned int) var_12);
                }
                arr_36 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6818))) % (max((((/* implicit */unsigned long long int) var_8)), (13775844657940172108ULL)))));
            }
            var_23 += ((/* implicit */short) ((((/* implicit */int) var_12)) / ((~(((/* implicit */int) var_0))))));
        }
        /* vectorizable */
        for (long long int i_10 = 3; i_10 < 14; i_10 += 4) /* same iter space */
        {
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1808989946U)) < (13265218574485695635ULL)))) | (((/* implicit */int) (!(var_2))))));
            arr_41 [2] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)-13410)))))));
        }
        for (long long int i_11 = 3; i_11 < 14; i_11 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0])) ? (min((1038927158U), (((/* implicit */unsigned int) (unsigned short)38313)))) : (((3103419572U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (arr_31 [i_0] [i_0]) : (var_9)));
            var_26 = ((/* implicit */int) var_5);
            arr_44 [i_11] [i_11] = ((/* implicit */long long int) max((((/* implicit */int) var_3)), ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_2))))));
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((signed char) (((!(((/* implicit */_Bool) 3256040138U)))) ? (((/* implicit */unsigned long long int) 4294967292U)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551608ULL))))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_10))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_11))));
                            var_30 |= ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            } 
            arr_53 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_0] [i_11] [i_11 + 3] [i_11 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)));
        }
        var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((1038927157U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 0U)) ? (((var_6) % (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_15 [i_0]))))))))));
        arr_54 [i_0] = ((/* implicit */long long int) min((((var_11) ? (4U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))), (min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0)))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_12))))) : (min((var_6), (((/* implicit */unsigned long long int) var_0)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (18446744073709551615ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_15 = 3; i_15 < 15; i_15 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            arr_59 [i_15] [i_16] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3))));
            var_34 ^= ((/* implicit */int) var_1);
            arr_60 [i_16] = ((((/* implicit */unsigned long long int) -6884148300971207772LL)) + (0ULL));
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 3; i_17 < 16; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned short i_19 = 1; i_19 < 16; i_19 += 1) 
                    {
                        {
                            arr_70 [i_15] [i_16] [i_15] [i_18] [i_19] [i_18] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_52 [i_15] [i_17] [i_16] [i_15])) || (((/* implicit */_Bool) var_7)))) ? (var_6) : (((/* implicit */unsigned long long int) arr_24 [i_17 - 3]))));
                            var_35 += ((/* implicit */signed char) 4294967295U);
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_61 [i_15] [i_16]))));
        }
        for (int i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            arr_74 [i_15] [i_20] = ((/* implicit */long long int) (unsigned short)27210);
            var_37 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((var_11) && ((_Bool)1)))) : (((int) arr_8 [12ULL]))));
        }
        for (unsigned int i_21 = 2; i_21 < 15; i_21 += 3) 
        {
            arr_78 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))));
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (arr_57 [i_15] [i_21 + 2] [i_21 + 2]) : (var_6))))));
            /* LoopNest 3 */
            for (long long int i_22 = 1; i_22 < 16; i_22 += 3) 
            {
                for (unsigned int i_23 = 4; i_23 < 16; i_23 += 3) 
                {
                    for (int i_24 = 2; i_24 < 14; i_24 += 4) 
                    {
                        {
                            var_39 ^= ((((/* implicit */_Bool) (unsigned short)38332)) ? (((/* implicit */int) (unsigned short)2153)) : (((/* implicit */int) (unsigned short)38332)));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (arr_15 [i_22 - 1])));
                        }
                    } 
                } 
            } 
            var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
        }
        for (int i_25 = 2; i_25 < 16; i_25 += 2) 
        {
            arr_89 [i_15 + 2] [(unsigned char)7] = ((/* implicit */unsigned char) var_12);
            arr_90 [i_15] [i_25] [i_15] = ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (434805771U));
            /* LoopNest 2 */
            for (unsigned char i_26 = 3; i_26 < 14; i_26 += 1) 
            {
                for (long long int i_27 = 2; i_27 < 15; i_27 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_28 = 4; i_28 < 16; i_28 += 4) 
                        {
                            var_42 += ((/* implicit */unsigned char) ((4294967284U) & (2541805855U)));
                            arr_99 [i_28] [(_Bool)1] [2ULL] [2ULL] [i_26] [i_28] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16317237508143410635ULL)) ? (16317237508143410635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65125)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_29 = 1; i_29 < 16; i_29 += 4) 
                        {
                            var_43 = ((/* implicit */signed char) (unsigned short)38345);
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 486652104U)) ? (0ULL) : (((/* implicit */unsigned long long int) 0U)))))));
                        }
                        for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                        {
                            var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_94 [i_15] [i_27] [i_15] [i_15] [i_25] [i_15])) | (((/* implicit */int) var_3))))) ? (((/* implicit */int) (short)-9503)) : (((/* implicit */int) var_8)))))));
                            var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                            arr_105 [i_30 + 1] [i_26] [i_26] [(unsigned char)5] [i_26] [i_26] [(unsigned short)1] = ((signed char) var_0);
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (18446744073709551615ULL))))));
        }
        var_48 = ((/* implicit */int) arr_91 [(unsigned char)10] [i_15] [i_15 + 1] [i_15 + 1]);
        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_15])) - (((/* implicit */int) (unsigned short)38313)))))));
    }
}
