/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219366
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) ((unsigned char) arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_1]))))));
        arr_9 [i_1] [(short)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17493))) : (15113148798644321710ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1])) : ((-(((/* implicit */int) arr_1 [i_1]))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) & (((/* implicit */int) arr_7 [14ULL] [14ULL]))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    arr_17 [i_2] [(_Bool)1] [i_4] [(_Bool)1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3333595275065229925ULL)))))))) ? (arr_10 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_2]), (arr_15 [i_4] [i_3] [i_2]))))));
                    arr_18 [i_2] [i_2] [4] [i_2] = (-(((/* implicit */int) ((unsigned short) 1019694233))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 7936ULL)) ? (arr_22 [i_6] [i_3] [i_4] [i_6 + 1] [i_6]) : (arr_22 [i_2] [i_3] [i_4] [i_6 - 1] [i_3]))), (((18446744073709543680ULL) - (arr_22 [i_2] [i_2] [i_2] [i_6 + 4] [i_6])))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3])) && (((/* implicit */_Bool) ((((7952ULL) > (arr_21 [i_2] [i_2] [i_4] [i_6 + 1]))) ? ((+(((/* implicit */int) arr_11 [i_2])))) : (((int) arr_14 [i_4])))))));
                                var_20 ^= ((/* implicit */unsigned short) arr_0 [i_5]);
                                var_21 = ((/* implicit */unsigned short) arr_5 [i_2] [i_3]);
                                var_22 &= ((/* implicit */long long int) arr_25 [i_3] [i_3] [i_5]);
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */_Bool) max((max((arr_14 [i_2]), (arr_14 [i_2]))), (((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (arr_14 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2])))))));
            }
        } 
    } 
    var_24 *= ((/* implicit */_Bool) ((unsigned short) var_6));
    var_25 = ((/* implicit */int) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) : (var_5)))) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) var_5)))) : (max((((/* implicit */long long int) var_3)), (var_6))))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))) - (33354)))));
}
