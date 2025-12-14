/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26804
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)98)) ? (3629801963024344108LL) : (-3629801963024344109LL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_3 [(unsigned short)5] = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0]));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))))));
        var_15 = ((/* implicit */unsigned short) ((((var_2) >> (((((/* implicit */int) var_7)) - (46))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_5 [i_1] [i_1])) - (26)))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1])))))));
        var_16 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_5)))));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_2])))))));
        arr_12 [(unsigned char)2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_2])), (arr_2 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_4 [(unsigned short)7]))))) : (((/* implicit */int) var_7))))) : (arr_7 [i_2]));
    }
}
