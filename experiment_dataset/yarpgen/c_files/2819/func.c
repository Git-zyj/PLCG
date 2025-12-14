/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2819
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) arr_0 [i_0]);
        var_17 -= ((/* implicit */signed char) var_9);
    }
    var_18 = ((/* implicit */unsigned char) (-(((((var_4) >> (((var_15) - (18980849))))) - (var_6)))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] = var_4;
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_5] [i_2] [i_4] [i_3] [i_3 - 3] [i_2] [i_1] = ((/* implicit */unsigned short) arr_16 [i_1]);
                            arr_20 [i_2] [i_2] [i_3] [i_2] [4LL] = ((/* implicit */unsigned short) arr_16 [i_2]);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_6 = 4; i_6 < 13; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned short i_8 = 2; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((var_12) ? (min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7] [i_2]))))))) : (max((min((((/* implicit */long long int) arr_22 [0LL])), (var_6))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) * (arr_28 [i_8] [i_2] [i_6] [i_7 + 1] [i_6]))))))))));
                            arr_29 [i_1] [(_Bool)1] [i_1] [i_2] [i_1] [9LL] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_6] [i_1])) ? (min((((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_7])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [4LL] [i_2]))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_25 [i_2] [i_2] [i_2] [i_2])))) ? (arr_15 [i_1] [i_8 + 2] [i_6] [1ULL] [i_6 - 1] [9ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [8LL] [(unsigned char)8])))))));
                            var_20 = ((/* implicit */long long int) arr_21 [i_1] [i_2] [i_8]);
                            arr_30 [i_1] [i_2] [i_2] [i_6 + 1] [i_7] [(unsigned char)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6 - 4] [i_6 - 2] [i_6 + 1] [i_6] [(unsigned short)4] [(unsigned char)9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((((/* implicit */int) var_11)) | (arr_0 [i_1]))))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((max((max((var_2), (arr_6 [(_Bool)1] [(_Bool)1] [i_1]))), (min((((/* implicit */long long int) (unsigned char)16)), (5286099481117369108LL))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_2 [i_1]))))) != ((+(arr_7 [10LL] [4LL])))))))))));
        }
        var_22 = ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (unsigned char)119)), (5286099481117369104LL)))))) ? (max((arr_7 [(signed char)10] [i_1]), (arr_7 [(signed char)6] [(signed char)6]))) : (var_4));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)9148), (((/* implicit */unsigned short) (_Bool)1))))), ((+(((/* implicit */int) arr_14 [i_11] [i_9] [i_9] [8ULL])))))))));
                        var_24 -= ((/* implicit */long long int) arr_31 [i_1] [i_1] [i_10]);
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((min((max((((/* implicit */long long int) arr_10 [i_1] [12LL] [i_11])), (arr_16 [i_1]))), ((-(arr_23 [i_1] [i_9] [i_10] [i_9]))))), (((/* implicit */long long int) arr_2 [i_10])))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((((arr_17 [i_1] [i_9] [i_1] [i_11] [0LL]) << (((((/* implicit */int) var_13)) + (63))))), (min((arr_17 [i_1] [i_1] [i_9] [i_11] [i_11]), (arr_17 [i_1] [i_9] [i_9] [i_11] [i_11]))))))));
                    }
                } 
            } 
            arr_38 [i_1] [i_1] = ((/* implicit */long long int) arr_26 [(_Bool)1] [(_Bool)1]);
        }
    }
    var_27 = ((/* implicit */unsigned char) ((((var_16) + (9223372036854775807LL))) >> (((var_9) - (124126903827917059LL)))));
}
