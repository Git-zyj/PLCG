/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189596
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (-(var_10))))))) ? (min((((((/* implicit */_Bool) 134213632)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))), ((~(4094))))) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) min((arr_8 [i_0 - 3] [i_0 - 3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? ((~(((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) ((unsigned char) -4108))))))));
                    var_12 = ((/* implicit */unsigned short) ((unsigned int) -4112));
                }
            } 
        } 
    } 
}
