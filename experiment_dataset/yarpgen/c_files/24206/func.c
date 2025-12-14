/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24206
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0 + 3] [i_1] = ((/* implicit */signed char) (short)0);
                var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) > ((+(((/* implicit */int) (_Bool)1))))))), (max((max((var_3), (((/* implicit */long long int) (short)-15108)))), (((/* implicit */long long int) arr_0 [i_0]))))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)48194))))), (var_7)))) ? ((-((((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 + 2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) -1941235108514159883LL))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_6);
}
