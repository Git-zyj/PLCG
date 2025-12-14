/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230695
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
    var_13 = ((/* implicit */signed char) var_7);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15688061909722461328ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) 3780466673U)) / (11878318743084734678ULL)))))) : (min((((/* implicit */unsigned long long int) 1816802418)), (var_12)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -337887171))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((3891128313282807365ULL) == (((/* implicit */unsigned long long int) var_4))))))))));
        arr_4 [9] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) (unsigned char)12))), (((((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (var_1))))) + (1298406853U)))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) < (((/* implicit */int) (unsigned char)31))))) != (((((/* implicit */_Bool) (unsigned char)253)) ? (arr_6 [i_1]) : (((/* implicit */int) (unsigned char)12))))));
        arr_8 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) * (arr_7 [i_1 - 2]));
    }
    for (long long int i_2 = 2; i_2 < 19; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (signed char)-57))));
        arr_13 [i_2 + 1] = ((((((((/* implicit */_Bool) 7340032U)) ? (((/* implicit */unsigned int) var_4)) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))) + (((unsigned int) ((((/* implicit */int) (unsigned char)246)) + (((/* implicit */int) (unsigned char)3))))));
        var_18 = ((((/* implicit */int) (unsigned char)19)) << (((((((((/* implicit */_Bool) -1133797582)) ? (1725350972) : (((/* implicit */int) (unsigned char)243)))) | ((~(((/* implicit */int) (unsigned char)12)))))) + (18))));
    }
}
