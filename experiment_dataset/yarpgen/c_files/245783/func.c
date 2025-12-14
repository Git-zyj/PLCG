/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245783
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2648248694390078306LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) : ((+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [6ULL])))))))));
        var_14 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(0ULL)))) ? (arr_1 [i_1] [(unsigned char)4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))))));
        arr_5 [i_1] = ((/* implicit */long long int) min((((unsigned char) arr_4 [i_1] [i_1])), ((unsigned char)0)));
    }
}
