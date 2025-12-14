/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192179
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_1] [3ULL] = ((/* implicit */short) ((unsigned long long int) min((var_5), (((/* implicit */unsigned short) (signed char)63)))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_3 [(short)4] [i_1]))) - (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_1 [i_1] [i_0]))))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) != (var_6)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_11);
}
