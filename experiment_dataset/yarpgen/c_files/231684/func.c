/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231684
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
    var_10 = ((/* implicit */_Bool) -4206112996789676776LL);
    var_11 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
    var_12 = var_0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (_Bool)1;
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((long long int) ((unsigned long long int) var_9))) & (((/* implicit */long long int) ((((/* implicit */int) min((var_6), (((/* implicit */signed char) (_Bool)1))))) / (((/* implicit */int) max((var_6), (var_6)))))))));
}
