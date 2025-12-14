/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40965
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
    var_14 = (~(((((/* implicit */_Bool) ((unsigned char) 780548381))) ? (((((/* implicit */_Bool) (unsigned short)64167)) ? (4294967295U) : (0U))) : (min((4294967280U), (var_8))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) (+(arr_0 [i_0])));
        var_16 = ((/* implicit */int) (signed char)13);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((long long int) arr_1 [i_0]))));
    }
    var_17 = ((/* implicit */short) 14352160745255800033ULL);
    var_18 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((63ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
}
