/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247305
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (short)20505)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-21187)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)29170)) : (arr_2 [i_0] [i_0]))))))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1065773303951591871ULL)) ? (((/* implicit */int) (short)-1)) : ((-2147483647 - 1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29157)) ? (54473979) : (-902214149)))))))));
            }
        } 
    } 
    var_20 = (-(((/* implicit */int) var_10)));
}
