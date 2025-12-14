/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46619
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
    var_11 = ((/* implicit */short) (_Bool)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((unsigned int) (short)1500)))));
        var_13 = ((/* implicit */unsigned char) var_0);
        var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) var_9)) ? ((+(var_9))) : (var_9)))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned int) (signed char)3));
    }
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((1516309241U) * (3495826322U))))));
        var_16 = ((/* implicit */unsigned long long int) 1516309256U);
    }
    var_17 |= ((/* implicit */short) var_4);
}
