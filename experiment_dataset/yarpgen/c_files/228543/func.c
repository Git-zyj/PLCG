/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228543
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = var_6;
                    var_15 -= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (min((-7382652233931905007LL), (((/* implicit */long long int) (_Bool)1)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0])) == (((/* implicit */int) arr_0 [(_Bool)1])))))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) min((var_3), (var_2))))))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)48))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (unsigned short)12933)))))))))));
}
