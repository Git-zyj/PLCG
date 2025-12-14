/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248488
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) var_6);
                arr_6 [i_0] [i_1] = ((/* implicit */int) (short)-6405);
                var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) (signed char)126))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 979074697564742793LL))))) * (((((/* implicit */int) var_4)) * (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_8))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_4);
    var_18 = ((((/* implicit */_Bool) max(((~(var_7))), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6409)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-117))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) -3121061389804881095LL)))))))) : ((-(((((/* implicit */_Bool) (short)-21435)) ? (var_11) : (var_11))))));
    var_19 = ((/* implicit */unsigned long long int) ((signed char) var_4));
}
