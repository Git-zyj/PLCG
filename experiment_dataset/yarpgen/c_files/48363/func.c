/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48363
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
    var_13 = ((/* implicit */int) (short)20893);
    var_14 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned short)8] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0] [i_1])) > (((/* implicit */int) arr_1 [i_0] [i_1])))) ? ((+(2290893533U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1])) + (1646))))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (var_12)))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) arr_0 [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((2290893543U) - (2004073763U)));
}
