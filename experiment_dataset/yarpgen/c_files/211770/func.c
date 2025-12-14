/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211770
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
    var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) 11987013808857387047ULL)) ? (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_8))))) : (min((var_3), (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 ^= (((!((!(((/* implicit */_Bool) var_8)))))) ? (((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) 7495626628259543915LL)), (arr_0 [(signed char)9]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))));
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) : (6459730264852164569ULL))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (6459730264852164544ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) arr_3 [(short)13] [i_1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)0)) / (((/* implicit */int) ((signed char) arr_4 [i_1] [4])))))) : ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 1810433021U)) : (-3361533318053377812LL)))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_4 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)7] [i_1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((/* implicit */unsigned long long int) ((((var_9) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) >> (((((unsigned long long int) var_6)) - (18446744073496960484ULL))))))));
    }
}
