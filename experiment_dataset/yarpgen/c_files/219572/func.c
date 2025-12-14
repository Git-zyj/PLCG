/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219572
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56088)) ? (((/* implicit */int) min(((unsigned short)56090), (var_11)))) : ((-(((/* implicit */int) arr_4 [i_1] [i_0]))))))) ? (((/* implicit */int) (unsigned short)56918)) : (((/* implicit */int) var_5))));
                var_16 -= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)9471)), ((~(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned short)37547))))) || (((/* implicit */_Bool) max(((unsigned short)10323), (var_4))))))));
    var_18 &= var_1;
}
