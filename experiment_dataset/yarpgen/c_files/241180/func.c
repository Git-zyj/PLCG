/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241180
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
    var_20 = max((((/* implicit */int) (unsigned char)233)), (((int) max((((/* implicit */unsigned long long int) (unsigned char)121)), (15ULL)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-16))) ? (((/* implicit */unsigned long long int) (+(8359294162844283663LL)))) : (min((((/* implicit */unsigned long long int) var_8)), (var_1)))))) ? ((+(((unsigned int) (short)-27)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1 + 2] [i_0] = max((((/* implicit */int) ((unsigned char) (short)27))), ((+(((/* implicit */int) (unsigned char)68)))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_1] [17LL] [(signed char)9] [5] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_1])), (-5)));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [(signed char)18] [i_0] &= ((((/* implicit */_Bool) (short)-16)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_3] [i_1 + 1] [i_3 + 2])) : (((/* implicit */int) arr_5 [i_3] [i_1 + 1] [14])))) : (((/* implicit */int) arr_5 [i_3] [i_1 + 1] [i_3])));
                        var_22 = ((/* implicit */long long int) max((var_22), (arr_11 [i_0] [i_1 - 1] [i_0] [i_0])));
                    }
                }
                for (short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) 4294967295U);
                        arr_20 [i_5] [(unsigned char)11] [(unsigned short)10] [i_5] [(unsigned char)14] [i_1] = ((/* implicit */int) arr_5 [i_1] [(unsigned char)11] [14LL]);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1] = ((/* implicit */unsigned int) arr_15 [i_5] [i_1 + 2] [1U]);
                            var_24 = ((/* implicit */short) 8359294162844283649LL);
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_23 [(short)6] [i_4] [i_1] [(signed char)2] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_17 [i_1] [i_1 + 1] [(unsigned char)18] [i_1] [i_1 + 1]))))) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_4] [i_7] [i_7])) : (((/* implicit */int) arr_4 [i_1]))));
                        var_26 = ((/* implicit */int) arr_21 [i_1 - 1] [(unsigned char)5] [i_1] [i_7] [0U] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        arr_31 [i_1] [i_1] [(signed char)8] [i_8] [(unsigned char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 - 1] [i_4] [i_4] [i_8])) ? (((/* implicit */int) (short)12966)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (unsigned short)24163)) : ((+(((/* implicit */int) (short)26))))));
                        arr_32 [i_1] [i_1] [i_1] [i_8] = arr_25 [i_0] [i_1];
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 3) 
                    {
                        arr_37 [i_0] [i_4] |= ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) (unsigned char)1)), ((+(15070946665949016421ULL)))))));
                        var_27 = ((/* implicit */signed char) arr_11 [i_1] [i_1 - 1] [i_9 + 2] [i_9 + 2]);
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_42 [i_0] [i_1] = ((/* implicit */unsigned short) (+((+(arr_30 [i_10])))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_9 - 3] [(unsigned short)7] [(_Bool)1] [i_9])) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_9 + 2] [i_9 - 1])) ? (((/* implicit */int) arr_8 [i_9 + 2] [i_9 + 2] [i_0] [14U])) : (((/* implicit */int) arr_8 [i_9 - 2] [(_Bool)0] [(_Bool)0] [i_0])))) : ((+(((/* implicit */int) arr_4 [i_9 + 1]))))));
                            var_29 *= ((/* implicit */_Bool) ((int) max((((/* implicit */int) arr_15 [i_9 + 1] [i_9 - 1] [i_1 + 1])), ((+(((/* implicit */int) (short)19733)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            var_30 = (+(((arr_21 [i_0] [(unsigned short)9] [i_1] [(short)0] [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9] [i_9]))) : (1401269890U))));
                            arr_45 [i_11] [i_1] [i_4] [i_9 - 1] [(unsigned char)7] = ((/* implicit */unsigned char) (short)7);
                        }
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_43 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_49 [i_1] [i_1] = ((/* implicit */unsigned short) max((arr_2 [i_1 - 1]), (arr_11 [i_1] [i_4] [i_4] [i_12])));
                        var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-10))));
                        var_33 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1 + 2])) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 2]))));
                        arr_50 [i_0] [i_0] [i_1] [(unsigned char)14] [i_0] = ((/* implicit */_Bool) -1060780385);
                        arr_51 [i_1] [(unsigned short)14] [i_1] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1432031180)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) (unsigned char)187))));
                    }
                    var_34 = (+((+(11U))));
                    var_35 ^= ((/* implicit */unsigned int) arr_41 [(unsigned char)4] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]);
                    arr_52 [i_1] [i_1] = (+((+(((/* implicit */int) (short)-32766)))));
                }
                for (unsigned char i_13 = 1; i_13 < 18; i_13 += 2) 
                {
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (unsigned char)235))));
                    arr_56 [i_1] [i_1] [(unsigned char)13] [i_1] = ((/* implicit */unsigned char) ((int) 4294967291U));
                }
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    arr_59 [i_0] [i_0] |= ((/* implicit */int) (+(max((3741348070U), (((unsigned int) arr_26 [i_0] [i_0] [i_14]))))));
                    arr_60 [i_1 + 1] [i_1] = ((/* implicit */unsigned char) (short)32340);
                }
                arr_61 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_57 [i_1])))) ? ((+(((/* implicit */int) (short)-26536)))) : (((/* implicit */int) (short)(-32767 - 1)))));
                var_37 = (+(((/* implicit */int) arr_48 [i_1 + 2] [i_1 + 2] [i_0] [i_0] [i_1 - 1])));
            }
        } 
    } 
}
