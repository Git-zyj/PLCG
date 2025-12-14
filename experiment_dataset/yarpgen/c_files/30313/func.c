/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30313
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_18 = ((unsigned int) ((((/* implicit */_Bool) (short)-19688)) ? (((/* implicit */int) (unsigned char)255)) : (-1981564079)));
        var_19 = ((/* implicit */unsigned int) ((int) arr_1 [i_0]));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_12), (arr_2 [i_0]))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))))))) ? (((((arr_3 [i_0] [i_0]) - (var_3))) * (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (var_4)))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_2)))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)34284)), (2147483647)))) : (((var_5) & (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))));
        arr_6 [i_1] = ((unsigned short) ((2662970546U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    var_23 &= (~(((((((/* implicit */int) (unsigned short)51239)) + (-2147483647))) / ((~(((/* implicit */int) var_9)))))));
}
