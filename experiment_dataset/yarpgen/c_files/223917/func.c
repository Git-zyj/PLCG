/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223917
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6)));
        var_11 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57428))) | (0ULL)));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3298878811U)))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned short) 3239657856U)))));
    }
    var_15 -= ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */signed char) var_8);
}
