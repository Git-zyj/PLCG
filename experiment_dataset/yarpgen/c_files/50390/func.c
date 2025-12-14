/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50390
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : ((+(3684792918U)))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_5)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(var_12)));
                var_17 |= ((/* implicit */int) arr_2 [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1599343001U)) && (((/* implicit */_Bool) (short)32767))));
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(-1922964587)))))))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_8))));
}
