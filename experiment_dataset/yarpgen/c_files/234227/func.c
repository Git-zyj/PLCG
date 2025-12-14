/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234227
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                var_11 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [(unsigned char)15] [i_1]))))), (((arr_0 [(unsigned char)12] [i_0]) ? (-716969230292232198LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) : (arr_3 [i_1] [i_1] [i_0])));
                var_13 += ((/* implicit */unsigned char) (-((~((+(arr_2 [16LL] [i_1] [16LL])))))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((((6533728940574289432LL) & (9223372036854775807LL))) >> (((((min(((-9223372036854775807LL - 1LL)), (var_3))) - (-9223372036854775778LL))) + (49LL))))))))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 4294967295U)) : (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)147)))));
}
