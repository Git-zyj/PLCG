/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22250
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
    var_13 &= ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) arr_1 [1]);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [13LL])) ? (var_12) : (((/* implicit */unsigned long long int) arr_0 [14] [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((-8465082050583927601LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) != (((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0] [i_0]))) != (((/* implicit */long long int) var_4)))))));
    }
    for (signed char i_1 = 4; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((unsigned short) (unsigned short)65535));
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_10) - (10103946314472415266ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (-8465082050583927601LL)))) ? (min((max((arr_4 [i_1]), (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_5 [i_1])), (var_9)))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)19)) >> (((/* implicit */int) (signed char)19)))))));
    }
}
