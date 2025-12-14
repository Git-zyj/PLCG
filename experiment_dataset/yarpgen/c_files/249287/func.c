/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249287
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_11))))))))))));
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [(signed char)2] [(signed char)2] |= ((/* implicit */short) (+(arr_2 [i_0] [(signed char)12])));
                arr_6 [i_1] = ((/* implicit */short) (signed char)-10);
                var_15 = min(((~(arr_0 [i_0]))), (((((/* implicit */_Bool) ((unsigned long long int) 12874261234794217985ULL))) ? (2624645445634139114ULL) : (((15822098628075412490ULL) - (6732532547073107221ULL))))));
            }
        } 
    } 
}
