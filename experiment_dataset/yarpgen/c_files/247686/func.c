/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247686
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 -= ((/* implicit */short) (-(arr_0 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) 8388607LL));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((short) max((4660440381424232647ULL), (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) 13786303692285318957ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1]))))))))))));
        var_22 = ((/* implicit */signed char) arr_2 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) max((((min((6643191246236214401LL), (((/* implicit */long long int) arr_5 [i_2] [i_2])))) >> (((var_7) + (5705006587574031990LL))))), (((/* implicit */long long int) arr_5 [i_2] [i_2]))));
        var_23 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_2])) / (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [2ULL]))) : ((+(var_5))))) >> (((max(((+(((/* implicit */int) arr_5 [i_2] [i_2])))), (((/* implicit */int) arr_7 [i_2] [i_2])))) - (31754)))));
    }
    var_24 *= min((((/* implicit */long long int) ((((((/* implicit */int) var_17)) * (((/* implicit */int) var_1)))) % (((/* implicit */int) var_10))))), ((((!(((/* implicit */_Bool) (short)-9707)))) ? (var_12) : (max((((/* implicit */long long int) var_11)), (var_16))))));
}
