/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242849
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
    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)166)) - (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) 0)) : (var_5))) : (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)190)), ((unsigned short)37347)))), ((~(((/* implicit */int) var_15)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_18 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_15))))), (min((arr_1 [i_0] [i_0 - 2]), (arr_1 [i_0 - 2] [i_0 - 2])))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0])) : (min((var_0), (((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)8])))))) : (((/* implicit */unsigned long long int) (~(var_12))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) 0ULL))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)166))))));
            arr_9 [i_1] [i_2] = (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned char)165))))), (16978682325247382240ULL))));
        }
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_3]))) : (8094690833335940091ULL));
        arr_13 [(short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((17295522102912433221ULL) / (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_3] [1]) : (arr_3 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3])))));
        arr_14 [i_3] = ((/* implicit */unsigned char) var_3);
    }
    var_21 = ((((/* implicit */unsigned long long int) ((unsigned int) ((var_0) - (((/* implicit */unsigned long long int) 4582730355044376583LL)))))) >= (16978682325247382240ULL));
}
