/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221801
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
    var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? ((~(-975172152))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = (~(((/* implicit */int) arr_0 [i_0 - 1])));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((arr_0 [i_0]), (arr_2 [i_0]))) ? (min((134217712), (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))))) ? (var_4) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_2]))))) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) max((134217683), (((/* implicit */int) (short)-8192))))) ? ((-(((/* implicit */int) (short)0)))) : (((/* implicit */int) min((arr_2 [(_Bool)1]), (arr_0 [(unsigned short)17]))))))));
            arr_9 [i_1] [3U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_6))))))) ? (((/* implicit */int) arr_8 [0] [(unsigned char)1])) : (((/* implicit */int) arr_4 [(signed char)2]))));
            var_18 += (-((-(arr_7 [i_1] [(unsigned char)1] [i_2]))));
        }
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3])) || (((/* implicit */_Bool) var_3))))))), (((/* implicit */int) min(((unsigned char)247), ((unsigned char)14))))));
        arr_15 [i_3] [(unsigned char)8] = ((/* implicit */unsigned int) min((max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_3])))))), ((+(((/* implicit */int) max((arr_12 [i_3]), (((/* implicit */short) arr_0 [i_3])))))))));
        arr_16 [i_3] = ((/* implicit */_Bool) (signed char)-48);
        /* LoopSeq 4 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_19 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_3] [22U]))))), (((((/* implicit */_Bool) arr_17 [i_3])) ? (((((/* implicit */_Bool) 196608)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (-510992433121889842LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3])))))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((arr_0 [i_4]) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_3])))) : (min((((/* implicit */int) arr_12 [i_3])), (((((/* implicit */_Bool) (short)8200)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_3]))))))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_21 *= ((/* implicit */unsigned int) arr_18 [i_5 + 1] [5] [(_Bool)1]);
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]))), (((/* implicit */long long int) arr_13 [i_3] [i_3]))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) /* same iter space */
        {
            arr_28 [i_3] = arr_26 [i_6 + 2] [i_6 - 1];
            arr_29 [i_3] [i_3] = ((((/* implicit */int) arr_13 [i_3] [i_3])) < (196608));
            arr_30 [i_6] [i_3] [i_3] = arr_17 [i_6 - 1];
            var_22 = ((/* implicit */signed char) arr_27 [i_3] [i_6 + 1] [(_Bool)1]);
        }
        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
        {
            arr_33 [i_3] = ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_32 [(short)15])) : (((/* implicit */int) arr_32 [i_3]))))))) != (((((/* implicit */unsigned long long int) (+(134217707)))) + (11911838000288142482ULL))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_37 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_8] [i_8 - 1] [i_7 + 2])) ? (((/* implicit */int) arr_36 [i_3] [i_3] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_2 [i_8 - 1]))));
                /* LoopSeq 2 */
                for (signed char i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) arr_17 [i_8 - 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_44 [i_3] [15ULL] [i_9 + 3] [8ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_45 [i_3] [9] [i_8] [i_7] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_3] [i_7 - 1]))));
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7] [i_3]))));
                    }
                    arr_46 [i_3] [i_7] [i_7] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_27 [i_3] [i_7 - 1] [i_3]))));
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        arr_50 [i_3] = ((/* implicit */unsigned char) arr_17 [i_7 - 1]);
                        arr_51 [(unsigned char)2] [(unsigned char)0] [i_7] [i_8] [(unsigned short)10] [i_9 + 1] [i_3] = ((/* implicit */signed char) ((arr_34 [(unsigned short)0] [10ULL] [i_7 + 1] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7 + 1])))));
                        arr_52 [i_3] [8ULL] [(_Bool)1] [(short)0] [i_3] = ((/* implicit */short) ((arr_38 [i_3] [i_9 + 2]) / (arr_38 [i_3] [i_9 + 1])));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)67)) || (((/* implicit */_Bool) var_2))));
                        arr_56 [2ULL] [(unsigned char)22] [i_8] [i_9 - 1] [(signed char)20] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_12 + 1])) : ((-(((/* implicit */int) arr_2 [17U]))))));
                    }
                }
                for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    arr_60 [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_34 [i_3] [i_7] [i_8] [i_3])) ? (4525127797780955043ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62486)))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1489441672U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)6201))))) : (arr_22 [i_3] [i_13])));
                    arr_61 [i_3] [16LL] [i_8] [i_13] [i_13] = ((/* implicit */int) var_12);
                    arr_62 [i_3] = ((/* implicit */_Bool) arr_47 [i_7] [i_7] [i_8] [i_3] [i_8]);
                }
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
            {
                var_27 = (-(((/* implicit */int) (unsigned char)4)));
                var_28 *= ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_64 [(unsigned char)18]))))));
            }
            /* vectorizable */
            for (signed char i_15 = 2; i_15 < 22; i_15 += 3) 
            {
                arr_67 [i_3] [21ULL] [i_3] [i_15 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_7] [i_7 + 2])) ? (((/* implicit */int) arr_55 [i_7] [i_7 + 2] [i_3] [i_7 + 2] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_26 [i_7] [i_7 + 2]))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_71 [i_15] [i_16] [21LL] [i_16] [i_3] = ((/* implicit */int) var_8);
                    var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_63 [i_7 + 1] [i_7 + 2])) : (((/* implicit */int) arr_63 [i_7 - 1] [i_7 + 2]))));
                }
                var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_7 - 1] [i_15 - 2] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_7 + 1] [i_15 + 1] [(short)8] [i_7]))) : (arr_35 [i_7 + 2] [i_15 - 2] [i_3])));
            }
        }
    }
    var_31 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
    var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), ((~(min((var_7), (var_14)))))));
}
