/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223519
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~((-(arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned int) -666287915);
    }
    var_14 = ((/* implicit */long long int) max((var_2), ((~(min((var_5), (((/* implicit */unsigned int) var_9))))))));
    var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ? (140737488355327ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) || (((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned int) 460167764)))))))), (((((/* implicit */int) var_1)) << (((max((var_5), (((/* implicit */unsigned int) var_7)))) - (3809770824U)))))));
}
