/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207870
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_10)), (-6190456396135403693LL))), (((6190456396135403693LL) + (-6190456396135403692LL)))))) ? (((/* implicit */int) ((signed char) 6190456396135403692LL))) : (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (var_15))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 2775366964U)) : (arr_0 [i_0] [2ULL]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((-6190456396135403711LL) + (9223372036854775807LL))) >> (((-3159392762435533678LL) + (3159392762435533741LL)))))) || (((/* implicit */_Bool) (unsigned short)47714)))))))))));
        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (17290561534763790573ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((4294705152ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? ((~(((/* implicit */int) var_16)))) : (1064349215)));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_3] = ((/* implicit */short) ((int) ((arr_8 [(unsigned char)10] [(unsigned char)18] [i_4]) ? (var_2) : (((/* implicit */int) arr_10 [i_3] [i_1 - 1] [i_3])))));
                        var_22 = 6190456396135403691LL;
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)14))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((1608856252U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) || (((/* implicit */_Bool) var_8)))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (signed char)36)) ? (6190456396135403692LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [14ULL] [i_2 - 1] [(unsigned char)15]))))));
                        var_26 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18))));
                    }
                    arr_16 [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_1 + 1])) / (((((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_3] [i_3] [i_1 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55975))) : (1156182538945761042ULL)))));
                    arr_17 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8))))) & ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_2] [i_1 + 1])) : (((/* implicit */int) var_12))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6190456396135403710LL)) ? (-6190456396135403692LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-44)))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_12)) - (130)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))));
    }
}
