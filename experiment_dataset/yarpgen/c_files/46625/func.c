/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46625
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
    var_20 = var_8;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_3 [i_2] [(_Bool)1] [i_2]))));
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (unsigned short)39779)) : (((/* implicit */int) (unsigned short)39779))))) ? ((+(((/* implicit */int) (unsigned short)39795)))) : (((/* implicit */int) var_2)))) * (((/* implicit */int) ((signed char) var_17)))));
                    var_23 = ((/* implicit */signed char) var_10);
                }
            } 
        } 
    } 
}
