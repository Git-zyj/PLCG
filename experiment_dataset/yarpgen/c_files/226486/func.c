/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226486
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_2), (var_8)))) == (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = 8143410163042176661LL;
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_13 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        var_14 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) & (-8143410163042176656LL));
                        var_15 &= ((/* implicit */unsigned short) (short)15941);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_9 [i_0] [(short)11])))) != (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_17 -= ((/* implicit */_Bool) arr_11 [i_4] [i_4]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(16U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_12 [(_Bool)1])) : (9298650548293531147ULL)))) ? (arr_12 [i_4]) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-27826))))))) : (((/* implicit */long long int) (((_Bool)1) ? (((unsigned int) (signed char)68)) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_4] [i_4]), (arr_11 [i_4] [i_4]))))))))));
        arr_13 [i_4] [i_4] = ((/* implicit */long long int) arr_11 [i_4] [i_4]);
    }
    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        arr_16 [i_5] = ((/* implicit */_Bool) ((long long int) ((int) arr_15 [i_5 + 2])));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((7906147578014564009LL) | (((/* implicit */long long int) 7U)))))));
    }
    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
    {
        arr_21 [i_6 + 1] [(_Bool)1] |= max((var_2), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) var_0)))) < (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_6])), ((unsigned short)112))))))));
        var_20 = ((((min((((/* implicit */long long int) arr_11 [i_6 + 1] [i_6 - 1])), (max((((/* implicit */long long int) var_1)), (-1LL))))) + (9223372036854775807LL))) << ((((((-(((((/* implicit */_Bool) (short)12198)) ? (6977268625982984118LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 - 1]))))))) + (6977268625982984180LL))) - (62LL))));
    }
    var_21 = ((/* implicit */unsigned short) var_4);
}
