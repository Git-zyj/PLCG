/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3741
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_8 [i_0] [(unsigned short)5] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_0 + 1] [i_0 + 1]), (arr_5 [i_0 - 1] [i_0 - 1])))) ? (arr_5 [i_0 + 1] [i_0 - 2]) : (max((arr_5 [i_0 + 1] [i_0 + 1]), (arr_5 [i_0 - 2] [i_0 - 1])))));
                var_14 *= ((/* implicit */signed char) min((min((((int) (_Bool)1)), (((/* implicit */int) ((59514080703743849LL) == (((/* implicit */long long int) var_5))))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_2])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_1]))))));
            }
            arr_9 [i_0] [10] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) min((var_12), (((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0])))))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (arr_6 [i_0] [i_0] [i_1]))))));
            arr_10 [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1]);
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8950))) / (var_13))))))) & (((/* implicit */int) min((arr_12 [i_3] [i_0 - 1]), (((/* implicit */signed char) arr_4 [i_0] [i_3]))))))))));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_0] = ((/* implicit */short) max((((/* implicit */int) ((signed char) arr_13 [i_0] [3LL] [i_0] [i_4]))), (((((((/* implicit */int) arr_7 [i_3] [i_3] [11U] [i_0])) > (((/* implicit */int) arr_7 [i_0 - 2] [i_0] [i_3] [i_4])))) ? (((((/* implicit */_Bool) arr_14 [4U] [i_3] [i_0])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_4])))) : (((/* implicit */int) arr_0 [i_0]))))));
                arr_17 [i_3] [i_0] [i_4] = ((/* implicit */signed char) min(((-(arr_13 [i_0 + 1] [i_3] [i_0] [i_3]))), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))));
                arr_18 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((signed char) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3])))))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
            {
                var_16 = ((/* implicit */long long int) (((((+(arr_13 [i_0 - 2] [i_3] [i_0] [i_3]))) <= (arr_14 [i_0] [i_3] [i_5 - 1]))) ? ((~(arr_13 [i_0 - 2] [i_5 - 1] [i_0] [i_5 - 2]))) : ((~(arr_15 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                    arr_27 [i_0 - 2] [i_0] [i_0 - 2] [i_6] = (~((~(var_5))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_3] [i_5] [i_3])) ? (arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_3]) : (arr_15 [i_5 + 1] [i_0 + 1] [i_0 + 1] [2])));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_33 [i_0] [i_7] [i_5] [i_5] [i_3] [i_0] = ((/* implicit */long long int) arr_32 [i_0]);
                        arr_34 [i_0] [i_0] [i_3] [i_5] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((arr_21 [i_0] [i_0] [i_7] [i_8]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_7] [i_8])))))));
                        arr_35 [i_0] = (~(arr_13 [i_0] [i_8] [i_0] [i_3]));
                        arr_36 [(short)11] [5] [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_3] [i_8] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((~(arr_14 [i_0] [(unsigned short)4] [i_8])))));
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_18 ^= ((/* implicit */long long int) arr_31 [i_9] [i_9] [i_7] [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                        arr_39 [i_9] [i_0] [i_7] [i_5] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_9] [i_3] [i_9] [(unsigned char)1] [i_9] [i_9]))));
                    }
                    var_19 |= ((/* implicit */unsigned short) ((long long int) arr_7 [i_5 + 1] [i_5 - 2] [i_0 - 2] [i_0]));
                }
                arr_40 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_29 [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_29 [i_0] [i_5 - 2] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_5] [i_0])))), (((/* implicit */int) max((arr_29 [i_0] [i_5 - 2] [i_0]), (arr_29 [i_0] [i_5] [i_0]))))));
            }
            for (signed char i_10 = 1; i_10 < 11; i_10 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) var_5);
                arr_43 [5LL] [i_0] [i_10] [i_3] = ((/* implicit */unsigned char) (!(var_0)));
                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(var_4)))) ? ((~(7221686773597657863LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))) > (((/* implicit */long long int) (+((~(((/* implicit */int) var_2)))))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) >> (((var_13) - (15906315948859275915ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3781515639U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_0] [i_3]))))) : (max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0])), (arr_15 [i_10] [i_3] [i_0 + 1] [i_0])))))) ? (((/* implicit */int) max((arr_3 [i_0] [i_10 - 1]), (arr_3 [i_0] [i_3])))) : (((int) ((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))));
            }
            arr_44 [i_0] [i_0] = ((/* implicit */unsigned short) (+(max((min((arr_23 [i_0] [i_3] [(unsigned short)9] [i_0] [(short)3] [(unsigned short)9]), (((/* implicit */unsigned int) arr_19 [i_3] [i_0] [i_0])))), (((/* implicit */unsigned int) ((var_12) <= (((/* implicit */int) arr_7 [(_Bool)1] [i_0] [i_3] [i_3])))))))));
            arr_45 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (~(max((var_13), (6742153312798046860ULL))))));
            var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(arr_22 [i_0] [i_0] [i_0] [i_0])))), (((long long int) arr_15 [0LL] [i_0 - 1] [i_0 - 2] [i_0 + 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                arr_54 [i_0] [i_11] = ((/* implicit */unsigned short) var_13);
                /* LoopSeq 1 */
                for (unsigned short i_13 = 3; i_13 < 11; i_13 += 4) 
                {
                    arr_57 [i_0] = ((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_11] [i_12] [i_13]))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18306511353423186422ULL)) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_11] [i_12])) : (((/* implicit */int) arr_19 [i_0] [i_11] [i_13 - 2]))));
                    var_25 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_11]))));
                }
            }
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_46 [i_0] [i_11])) == (((/* implicit */int) var_7))))) & (((/* implicit */int) var_7))));
            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_41 [i_0 + 1]))));
            var_28 = ((/* implicit */_Bool) max((var_28), (var_6)));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0 - 2] [i_0 - 2])) ? (arr_37 [i_0 - 2] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        }
        arr_58 [i_0] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2]))))) ? (((((/* implicit */_Bool) max((arr_14 [i_0] [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (arr_15 [i_0 - 2] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_0] [(unsigned char)5] [i_0])) >> (((arr_13 [(unsigned short)3] [i_0] [i_0] [i_0 - 1]) - (13238855607068740492ULL))))))));
        arr_59 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_0])) ^ (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_13 [i_0 - 1] [1U] [i_0] [8ULL]) / (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))))))));
        var_30 -= ((/* implicit */unsigned short) min(((+(((var_13) & (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))))), (((/* implicit */unsigned long long int) var_9))));
    }
    var_31 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_0)), (var_13))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-16)) * (((/* implicit */int) var_6))))) ? (((var_8) & (var_8))) : (var_5)))));
}
