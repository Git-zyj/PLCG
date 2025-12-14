/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26851
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = var_3;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)7), ((unsigned short)65520)))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12)) ^ (((/* implicit */int) (short)-30738)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)));
}
