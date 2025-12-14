/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247370
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 2214429697372937266LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) ((short) ((long long int) var_3)));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_13))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((short) -9223372036854775785LL)))) - (max((((/* implicit */long long int) arr_0 [i_1] [4LL])), ((+(arr_4 [i_1] [i_1]))))));
        var_22 += ((/* implicit */_Bool) ((long long int) (((+(9223372036854775782LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)3]))))));
        var_23 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_1])) << (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) var_2))));
        var_24 = ((/* implicit */long long int) ((short) ((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_1])))));
        arr_8 [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) ((_Bool) var_17)))))) != (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [(_Bool)1] [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */long long int) ((short) max((6439890379425824456LL), (min((-9223372036854775787LL), (((/* implicit */long long int) (_Bool)0)))))));
        arr_13 [11LL] = ((/* implicit */_Bool) ((short) 9223372036854775787LL));
        var_25 &= ((/* implicit */short) (+(((/* implicit */int) ((short) arr_1 [i_2])))));
        arr_14 [(short)0] [i_2] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)4] [3LL])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (min((arr_5 [i_2]), (arr_11 [i_2]))) : (((long long int) var_1)))) / (((/* implicit */long long int) ((/* implicit */int) var_12))));
    }
    var_26 = ((/* implicit */long long int) (!(((_Bool) ((short) var_6)))));
}
