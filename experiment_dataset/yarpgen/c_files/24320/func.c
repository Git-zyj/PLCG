/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24320
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_16)))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41569)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)6)))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((+(arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)7] [i_0 - 2]))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)1)))))));
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) (+(((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    }
}
