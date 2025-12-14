/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53544
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
    var_15 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (3251618089158386830ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                var_16 = var_12;
            }
        } 
    } 
}
