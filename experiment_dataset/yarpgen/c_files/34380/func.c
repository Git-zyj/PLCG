/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34380
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
    var_10 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (signed char)24)))))));
        arr_3 [(signed char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0 - 2] [i_0 - 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)155)) & (((/* implicit */int) arr_1 [i_0 + 3]))))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_6) : (arr_0 [i_0 + 2] [i_0 - 1])))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -4679291839540111210LL)) : (((unsigned long long int) 4679291839540111210LL))))));
    }
}
