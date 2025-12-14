/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223124
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)-11768)) : (((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(unsigned char)5])))))))) : (((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((var_1), (((/* implicit */short) arr_1 [i_1] [i_0])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) > (((/* implicit */int) var_6))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)125)) & (((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_7);
}
