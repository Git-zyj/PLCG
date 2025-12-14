/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54956
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
    var_11 = ((/* implicit */unsigned char) (short)10224);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)2880))))))));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))) ? ((+(((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)62631)) : (((/* implicit */int) (short)14717)))))))));
            }
        } 
    } 
}
