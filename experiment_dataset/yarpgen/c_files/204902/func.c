/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204902
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_14 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (arr_0 [(unsigned short)20])))) ? (((/* implicit */int) (unsigned short)28242)) : (var_1))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_11))) + (((((/* implicit */_Bool) (unsigned char)52)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) - (2078473290978709697LL)))));
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) arr_1 [i_0]);
    }
    var_15 = ((/* implicit */long long int) max((((min((((/* implicit */unsigned long long int) (short)32767)), (var_0))) ^ (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))))), (((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) var_8)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (var_10)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32762))) <= (var_8))))));
        arr_6 [i_1] = ((/* implicit */_Bool) var_10);
    }
}
