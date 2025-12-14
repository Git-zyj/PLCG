/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241296
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
    var_10 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [(short)14])))) == (((((/* implicit */_Bool) 1127468315)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_5))))));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) 9LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))));
    }
}
