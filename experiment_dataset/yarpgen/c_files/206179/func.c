/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206179
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
    var_16 &= var_15;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(3478597908U)))) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (((((/* implicit */_Bool) arr_0 [i_0] [14LL])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */unsigned long long int) 816369387U);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(816369387U))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(var_10))) : (var_12))))));
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 3]))));
    }
    var_21 &= ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) (!((_Bool)1)))))));
    var_22 = ((/* implicit */short) var_0);
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_9)))) + (2147483647))) >> (((min((((/* implicit */long long int) (unsigned short)54743)), (6898655177490780273LL))) - (54733LL)))))) : (2497975539U)));
}
