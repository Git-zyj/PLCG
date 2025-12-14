/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50744
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 1] [i_2 + 2] [i_2] [i_2] [i_2 + 2])) ? (arr_10 [i_2 + 2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) : (0U)));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_10)))) : (((((((/* implicit */int) arr_0 [(signed char)1] [(signed char)1])) + (2147483647))) << (((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) - (1343800271U))))))))));
                            var_13 = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 1] [i_2]))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [(unsigned char)2] [i_2])) : (arr_12 [i_2 - 1] [i_2] [i_2 + 2] [i_4] [i_4] [i_2] [(short)6])));
                            arr_15 [i_0] [i_2] [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 2] [i_1] [i_2] [i_3] [i_4]))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_2 [i_0])))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) 3932061114U)) != (9223372036854775807LL)));
            var_14 = ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])));
        }
        for (int i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1]))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_12 [i_5] [14LL] [(unsigned short)14] [i_0] [i_0] [14LL] [i_0]))));
        }
        arr_19 [19LL] = ((/* implicit */short) ((arr_2 [13ULL]) * (((/* implicit */unsigned long long int) ((4294967289U) | (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))))));
        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [i_0]));
        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) ^ ((-2147483647 - 1)))), (min((((/* implicit */int) var_3)), (arr_12 [i_0] [i_0] [i_0] [(short)10] [i_0] [6] [i_0])))));
        var_19 -= ((/* implicit */int) arr_8 [i_0]);
    }
    for (unsigned int i_6 = 4; i_6 < 13; i_6 += 3) 
    {
        arr_22 [i_6 - 4] |= ((/* implicit */int) ((((((arr_17 [(unsigned char)9] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [14]))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_6 [18])))) - (18689)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_6 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [16U] [(unsigned char)10] [i_6 + 4] [i_7] [i_7])) && (((/* implicit */_Bool) var_0)))))) : (arr_3 [i_6 + 1] [i_6 + 1])));
            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)18)) >> (7U)));
        }
        for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            arr_28 [i_8 + 1] [i_6] = ((((((/* implicit */_Bool) arr_24 [i_6 + 3] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_24 [i_6 + 4] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_4 [i_6] [i_6 - 3])))) < (((((/* implicit */int) arr_26 [i_6 - 4] [(signed char)10] [i_8 + 1])) - (((/* implicit */int) var_8)))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (unsigned char)139))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_6])) ? (var_6) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) arr_4 [i_6] [i_8 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8])) ? (((/* implicit */int) arr_26 [i_8] [i_8 + 1] [15U])) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6 - 3])))))));
            arr_29 [i_6 + 4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_8 + 1] [i_8] [16ULL] [i_8] [(short)15] [17LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [2LL])) ? (max((arr_23 [i_6] [i_6] [i_8]), (((/* implicit */long long int) (short)24424)))) : (min((-1LL), (((/* implicit */long long int) -2733873))))))) : (((((/* implicit */_Bool) 1038695499)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) : (10139260464695723291ULL)))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_6 + 4] [(signed char)6])) ? (((/* implicit */unsigned long long int) -155472122)) : (min((arr_27 [(short)8] [i_8 + 1]), (arr_27 [(unsigned short)5] [i_8 + 1]))))))));
        }
        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_25 += ((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_6 + 4] [i_9]));
            var_26 = (+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_6 + 2])) <= (((/* implicit */int) arr_5 [i_6 + 2]))))));
            arr_32 [i_6 - 3] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1038695500)) ? ((+(((/* implicit */int) arr_5 [i_9])))) : (((((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */int) arr_31 [(unsigned char)6])) : (((/* implicit */int) arr_4 [i_6 + 3] [i_6])))) | (arr_25 [i_6] [i_6] [i_6 - 3])))));
        }
    }
    var_27 *= ((/* implicit */short) var_6);
    var_28 ^= ((/* implicit */signed char) var_8);
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)0))))))) ? (((int) ((((/* implicit */_Bool) 1166531910)) ? (2134111533145588317ULL) : (((/* implicit */unsigned long long int) var_2))))) : (((/* implicit */int) var_3))));
}
