/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22450
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
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) > ((+(var_3)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_0] [(short)3]) * (((/* implicit */unsigned long long int) ((arr_1 [i_1] [i_0]) ? (var_3) : (var_10))))))) ? (var_7) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (short)-2891)))))));
                var_15 *= ((((((/* implicit */_Bool) ((unsigned char) var_4))) && (((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [6LL])))))) ? (arr_4 [i_0] [i_0 - 1]) : (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))))) : (((/* implicit */unsigned long long int) var_2)));
                var_16 = ((/* implicit */short) ((unsigned short) var_11));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_7);
}
