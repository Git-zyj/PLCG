/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191067
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            var_19 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
            arr_5 [i_0] [i_0] [i_1] = (!(((/* implicit */_Bool) 17783108726062282037ULL)));
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */int) ((long long int) arr_2 [i_0] [17LL]));
            arr_9 [5] = ((/* implicit */unsigned char) min(((+(arr_4 [i_0]))), (arr_4 [i_0])));
            arr_10 [6ULL] [i_2] = ((/* implicit */short) arr_1 [i_2]);
        }
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    {
                        arr_18 [i_5 + 2] [(_Bool)1] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (short)23648)), (-9223372036854775788LL))) <= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_21 = ((/* implicit */int) 2047U);
                        arr_19 [i_0] [i_3] [(_Bool)1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((((arr_3 [i_3] [i_4]) + (((/* implicit */unsigned long long int) -2752915143885790888LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((-11LL) > (((/* implicit */long long int) arr_4 [i_0])))))))) : (((/* implicit */unsigned long long int) ((long long int) ((long long int) arr_7 [(unsigned short)11]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((_Bool) ((long long int) 23))))));
        arr_23 [i_6] = ((/* implicit */unsigned short) arr_3 [i_6 - 3] [i_6]);
        /* LoopSeq 3 */
        for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) /* same iter space */
        {
            arr_26 [i_6] [i_6 + 1] [(short)2] = ((/* implicit */_Bool) (short)32758);
            arr_27 [i_6] [i_7] [i_7 - 3] = ((/* implicit */unsigned int) ((arr_6 [i_6] [(_Bool)1]) ? (((int) 663635347647269573ULL)) : (((/* implicit */int) (_Bool)1))));
            arr_28 [i_6] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) 17783108726062282043ULL))));
                        var_24 -= ((/* implicit */unsigned int) arr_14 [i_6 + 1] [17U] [i_9]);
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_6] [i_6] = ((/* implicit */unsigned short) arr_22 [i_6 - 3]);
                            arr_38 [i_6] [i_7] [i_8] [i_6] [3LL] = ((/* implicit */unsigned int) ((2147483647) != (((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                        {
                            arr_43 [i_6] [8U] [i_8] [i_9] [i_11] = (+(((((/* implicit */_Bool) min((((/* implicit */int) (signed char)28)), (-1492573292)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6 - 2] [(unsigned short)15] [i_8]))) : (7844282287875633875ULL))));
                            var_25 = ((/* implicit */long long int) (-((~(1536632651U)))));
                            arr_44 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) (_Bool)0)) : (arr_0 [i_6 - 2]))) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (3)))));
                            arr_45 [(short)5] [i_7] [i_7] [i_9] [i_11] [i_6] [i_8] = ((/* implicit */unsigned char) (unsigned short)622);
                            arr_46 [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)53))))) - (((3645827642U) + (1864710727U))))));
                        }
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                        {
                            var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8])) ? (((/* implicit */int) (unsigned char)12)) : ((-2147483647 - 1))));
                            var_27 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)38)) || (((/* implicit */_Bool) arr_47 [(short)8] [i_9] [i_8] [i_7 - 1] [(short)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_6])));
                        }
                        var_28 = ((/* implicit */unsigned long long int) (unsigned char)48);
                    }
                } 
            } 
        }
        for (unsigned char i_13 = 3; i_13 < 10; i_13 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_47 [i_6 - 2] [i_6 - 2] [i_13] [i_13] [i_6]))));
            arr_53 [i_6] [i_13] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2367)) >> (((/* implicit */int) arr_42 [i_6] [i_13] [i_6] [(_Bool)1] [i_6]))))) | (3701756163U)))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 3; i_14 < 10; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_15 = 1; i_15 < 10; i_15 += 1) /* same iter space */
            {
                var_30 = arr_22 [(_Bool)1];
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_16 [(_Bool)1] [i_14] [i_15 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (((unsigned long long int) arr_3 [i_6] [i_15 - 1])))))));
                arr_60 [i_6 - 3] [i_6] = ((/* implicit */int) arr_47 [3U] [i_14] [i_14] [0LL] [i_6]);
            }
            for (signed char i_16 = 1; i_16 < 10; i_16 += 1) /* same iter space */
            {
                arr_63 [i_6] [0U] [2LL] [i_6] = ((/* implicit */short) arr_55 [i_6] [(signed char)0]);
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) 1792540979U))));
            }
            for (signed char i_17 = 1; i_17 < 10; i_17 += 1) /* same iter space */
            {
                var_33 += ((/* implicit */unsigned short) (_Bool)1);
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [5ULL] [i_6])) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) arr_47 [i_6 - 2] [i_14 - 2] [i_14] [i_6 - 2] [i_6]))));
            }
            for (signed char i_18 = 1; i_18 < 10; i_18 += 1) /* same iter space */
            {
                var_35 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */int) arr_56 [(signed char)4] [i_18 + 1] [(signed char)4])) : (((/* implicit */int) (unsigned short)60410))));
                arr_70 [i_14 + 1] [i_6] = ((/* implicit */short) arr_33 [i_18 + 1] [i_6] [i_18 - 1]);
                arr_71 [i_6 - 1] [i_14] [i_6] = ((/* implicit */int) arr_50 [i_6 - 1]);
            }
            arr_72 [i_14 - 1] [i_14 - 1] [i_6] = ((/* implicit */signed char) (_Bool)0);
        }
        var_36 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_6] [(signed char)9]));
    }
    var_37 = ((/* implicit */short) var_7);
    var_38 = ((/* implicit */signed char) min((var_11), (var_11)));
}
