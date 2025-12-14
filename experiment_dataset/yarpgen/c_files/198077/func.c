/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198077
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0] [1])) ? (((/* implicit */int) (unsigned short)30946)) : (((/* implicit */int) (unsigned short)30943))))))), (((unsigned int) max((arr_0 [i_0]), (((/* implicit */int) arr_3 [1] [i_0])))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)11] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [(unsigned char)19] [i_0]))))) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [4U] [(_Bool)1])) == (((((/* implicit */int) arr_2 [i_0] [i_0])) / (arr_0 [(unsigned char)2]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (arr_6 [i_1])));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)30943)) ? (33538048U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23)))))));
        var_21 ^= ((/* implicit */unsigned int) ((int) (unsigned short)34595));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_12 [21] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) : (-1447522283938512452LL)));
            arr_13 [i_2] [i_3] = ((/* implicit */short) arr_1 [i_2] [i_3]);
            arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (arr_10 [i_3] [i_2]) : (arr_10 [i_3] [i_2])));
            arr_15 [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2])) < (((/* implicit */int) ((unsigned short) arr_0 [(unsigned char)11])))));
        }
        arr_16 [i_2] = ((/* implicit */unsigned char) arr_0 [i_2]);
        var_23 ^= ((/* implicit */unsigned int) arr_8 [i_2]);
    }
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_4 + 3] [i_4 + 1])))) >= (max((2061198628U), (((/* implicit */unsigned int) (unsigned short)20033)))))))));
        arr_20 [i_4] [i_4] = ((/* implicit */long long int) min((((_Bool) ((unsigned int) 268435448U))), (((_Bool) ((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) arr_2 [i_4] [i_4])))))));
        var_25 = max((((/* implicit */int) (unsigned short)12288)), (2147483647));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_26 |= ((/* implicit */unsigned long long int) arr_10 [i_5] [i_4]);
            arr_23 [(short)12] [(short)12] [i_5] = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_4 + 3]));
        }
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_27 -= ((/* implicit */int) ((unsigned short) arr_18 [i_4]));
            arr_27 [(short)6] [i_6] [(short)6] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((unsigned int) (unsigned char)255))) != (arr_10 [16U] [i_6]))) ? (((((/* implicit */_Bool) arr_3 [i_4 - 2] [i_4 + 2])) ? (((/* implicit */int) arr_3 [i_4 - 1] [i_4 + 3])) : (((/* implicit */int) arr_3 [i_4 + 3] [i_4 + 3])))) : (((/* implicit */int) ((4252208474U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned char i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        {
                            arr_35 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [19LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_31 [i_4 + 2] [i_9 + 1])))) : (min((arr_10 [i_9 + 2] [i_6]), (((/* implicit */long long int) arr_25 [i_9 - 2] [i_7 + 1] [i_6]))))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((unsigned int) ((((/* implicit */_Bool) arr_34 [i_4 + 1] [i_4 - 1] [i_4 + 2] [(short)0] [i_7 + 2] [i_8 - 1])) ? (((unsigned long long int) (unsigned char)251)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 1]))))))));
                            arr_36 [19U] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((short) arr_7 [i_4 - 1]))), (max((arr_7 [i_4 - 2]), (arr_7 [i_4 - 2])))));
                            arr_37 [i_4] [(_Bool)1] [i_4] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [(unsigned short)15] [i_8])) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_25 [i_8] [i_7] [i_6])) ? (((/* implicit */int) arr_31 [(short)9] [i_6])) : (((/* implicit */int) arr_8 [i_4])))))) : (((long long int) arr_17 [i_9 - 2] [i_8 + 1]))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_1 [i_8 + 1] [i_9 - 3]))));
                        }
                    } 
                } 
            } 
            var_30 -= ((/* implicit */unsigned long long int) max((arr_30 [i_4 - 1]), (((arr_30 [i_4 + 3]) | (arr_30 [i_6])))));
            arr_38 [i_4] = ((/* implicit */int) min((((-1447522283938512436LL) % (8931515165070056809LL))), (((/* implicit */long long int) arr_21 [5U] [i_4]))));
        }
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15)))) != (((/* implicit */int) var_2)))))) >= (min((((((/* implicit */_Bool) var_13)) ? (var_13) : (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))))))));
    var_32 = ((/* implicit */long long int) var_0);
}
