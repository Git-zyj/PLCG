/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228233
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) (short)0))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) max((((/* implicit */short) var_11)), ((short)0)))) ? (var_10) : ((+(((/* implicit */int) (signed char)68))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 1] [i_1 + 1] [i_0] = ((/* implicit */int) 18446744073709551610ULL);
                    var_13 = ((/* implicit */int) arr_2 [i_0]);
                    var_14 = ((/* implicit */long long int) (~(((min((var_11), (arr_1 [i_0] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4925393)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [(unsigned short)5] [i_3] [i_3]), (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) arr_10 [i_3])))) : (((1509125947) * (((/* implicit */int) var_11))))))) : ((+(arr_2 [i_3])))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_19 [i_4] [i_4] [(short)11] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_4);
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))))));
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_6 - 1] [i_6 - 2])))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? ((~(-2349642009915328009LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_16 [i_0])))) : (((/* implicit */int) min(((unsigned short)8638), (((/* implicit */unsigned short) arr_15 [i_0] [i_3] [i_0] [i_3])))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 4; i_7 < 16; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (min((arr_12 [i_0] [i_3] [i_3] [i_3]), (-1509125948)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_7] [i_7 - 2] [(short)8]))))))))) : (max((var_0), (((/* implicit */unsigned long long int) var_9))))));
                        arr_26 [i_0] [i_3] [i_7] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_20 = ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_24 [i_0] [i_9] [i_0] [i_9]))));
            arr_29 [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
        {
            arr_32 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0] [i_10])) : (((/* implicit */int) arr_5 [i_0] [i_10]))));
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8638))) : (17710595833113578106ULL)))) ? ((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    for (short i_13 = 2; i_13 < 14; i_13 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                            arr_45 [(signed char)5] [i_11] [(unsigned short)10] [(signed char)5] [i_10] [i_11] [i_0] = ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)23307)) < (((/* implicit */int) var_4))))) : (((/* implicit */int) var_6))));
                            arr_46 [i_0] [i_11] [i_0] [i_12] [i_11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_38 [i_13 + 3] [i_13] [i_13 + 2] [i_11] [i_13])) : ((+(((/* implicit */int) (unsigned char)225))))));
                        }
                    } 
                } 
            } 
            var_23 = ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_21 [i_10] [i_0] [i_0])));
            arr_47 [i_0] [i_10] = ((/* implicit */short) (+(((arr_39 [i_10] [i_0] [6ULL] [i_0] [i_0]) * (((/* implicit */unsigned int) var_9))))));
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
        {
            arr_51 [i_14] [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))) : ((-9223372036854775807LL - 1LL))));
            arr_52 [i_14] [i_14] = arr_38 [i_14] [i_14] [i_0] [i_14] [i_0];
            var_24 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_5)))) & (((/* implicit */int) (unsigned char)62))));
        }
    }
    for (unsigned char i_15 = 2; i_15 < 14; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_16 = 1; i_16 < 14; i_16 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                arr_60 [i_16] = ((/* implicit */short) ((arr_48 [i_16] [i_16 + 2]) < (((/* implicit */long long int) arr_44 [i_16]))));
                arr_61 [i_15] [i_16] [i_17] = ((((arr_10 [i_15]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) & (((((((/* implicit */int) arr_4 [i_15] [i_16] [15])) + (2147483647))) >> (((var_10) - (1304641005))))));
                /* LoopSeq 3 */
                for (unsigned short i_18 = 1; i_18 < 16; i_18 += 3) 
                {
                    arr_66 [i_15] [i_15] [i_16] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8595703058715348413ULL)) ? (arr_57 [i_16] [i_16]) : (((/* implicit */int) (_Bool)1))));
                    arr_67 [i_16] = ((/* implicit */unsigned short) ((arr_42 [i_16] [i_16 + 1] [i_15] [i_15 - 1] [i_15]) == (((/* implicit */unsigned long long int) arr_30 [i_15 + 3] [(short)6]))));
                    arr_68 [i_15] [i_16] [i_15] [i_15] [i_15 - 2] [i_15] = ((/* implicit */short) arr_39 [i_15] [i_16] [i_17] [i_18 - 1] [i_18 + 1]);
                }
                for (short i_19 = 1; i_19 < 15; i_19 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_16 + 3] [i_16] [i_16] [i_15 + 1])) ? (((/* implicit */int) var_8)) : (arr_62 [i_16 + 1] [i_16] [i_16] [i_15 - 1])));
                    var_26 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                    var_27 = ((/* implicit */unsigned long long int) var_8);
                }
                for (unsigned short i_20 = 0; i_20 < 17; i_20 += 3) 
                {
                    var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_16 + 3] [i_16] [i_16 + 3] [i_16]))));
                    var_29 -= ((/* implicit */unsigned int) arr_54 [i_15]);
                    var_30 = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (var_9)))) : (((/* implicit */int) ((short) var_4)))));
                }
            }
            for (long long int i_21 = 0; i_21 < 17; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    for (unsigned int i_23 = 0; i_23 < 17; i_23 += 1) 
                    {
                        {
                            arr_82 [i_15] [i_16 + 3] [i_16] [i_22] = ((/* implicit */long long int) var_4);
                            arr_83 [i_15] [i_16] = ((/* implicit */unsigned long long int) 692230677758188869LL);
                            arr_84 [i_16] [i_16 - 1] [i_16 - 1] = ((/* implicit */unsigned short) arr_2 [i_16]);
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((((unsigned int) -1786944214)), (arr_80 [i_15] [i_22] [i_21] [i_15] [i_23]))))));
                        }
                    } 
                } 
                var_32 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((692230677758188869LL), (((/* implicit */long long int) var_8))))))))));
                var_33 -= ((/* implicit */int) min((((((((/* implicit */int) var_3)) > (arr_43 [i_15] [i_15]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_15] [i_16 + 1] [i_21])), (var_10)))) : ((+(var_0))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3)))))));
            }
            /* vectorizable */
            for (unsigned char i_24 = 0; i_24 < 17; i_24 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    for (int i_26 = 0; i_26 < 17; i_26 += 2) 
                    {
                        {
                            arr_95 [i_15] [i_15] [i_15] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_81 [i_26] [i_25] [i_24] [i_15 + 3] [i_15 + 3]))) | (9223372036854775793LL)))) ? (((((/* implicit */_Bool) arr_7 [i_15] [i_15] [i_15 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (15290141087444482454ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)51)))))));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) (+(arr_42 [i_15 + 2] [i_16] [i_24] [i_24] [i_15 - 1])));
            }
            var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_16] [i_16])) ? (max((((/* implicit */unsigned int) var_2)), (arr_31 [i_16 + 1] [i_16]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_16] [i_16])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_65 [i_16] [i_16] [i_15] [i_16 - 1])))))));
        }
        arr_96 [i_15] = ((/* implicit */int) var_1);
    }
    /* vectorizable */
    for (unsigned char i_27 = 2; i_27 < 14; i_27 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */int) max((var_37), (((-491525398) / (((/* implicit */int) arr_16 [i_27]))))));
        var_38 -= ((/* implicit */unsigned char) arr_80 [i_27] [i_27] [i_27] [i_27 + 1] [i_27]);
    }
    var_39 = ((/* implicit */unsigned int) var_6);
    var_40 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (unsigned short)65516))))) ? (min((var_10), (((/* implicit */int) var_4)))) : (((/* implicit */int) var_1))));
}
