/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223483
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (4822016547498995190ULL)))));
                var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_9) & (((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))) > (((13624727526210556426ULL) >> (((((/* implicit */int) var_10)) - (21420)))))));
            }
        } 
    } 
}
