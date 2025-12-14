/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40351
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)24521)) ? (((/* implicit */int) max(((unsigned short)24521), ((unsigned short)24521)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (-13) : (((/* implicit */int) (unsigned short)30307))))));
        var_18 = (~(arr_1 [6] [i_0]));
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)6))));
        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) << (((arr_1 [2] [i_0]) - (6984199019213009717ULL)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_0]))))) : (((long long int) (unsigned char)62))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_1]))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [2LL])) ? (((/* implicit */unsigned long long int) -13)) : (arr_2 [i_1] [i_1])))) ? ((-(var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16292)) ? (-24) : (((/* implicit */int) arr_4 [i_1])))))));
        var_23 ^= ((/* implicit */unsigned char) (+((+(arr_3 [i_1])))));
        var_24 = ((/* implicit */unsigned short) (signed char)2);
    }
    var_25 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -1212286373)) : (var_1))))));
}
