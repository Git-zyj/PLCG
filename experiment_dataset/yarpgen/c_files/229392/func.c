/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229392
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
    var_11 = ((/* implicit */long long int) (signed char)90);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), ((unsigned short)65521)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */int) (signed char)127)) >> (((((unsigned long long int) var_5)) - (221ULL))))) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (signed char)105)) <= (((/* implicit */int) arr_1 [i_1 - 1]))))), (arr_0 [i_1 - 1])));
                arr_7 [i_0] = ((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */unsigned int) arr_0 [i_1 - 1]))));
                arr_8 [i_0] [i_0] [i_1 - 1] |= ((/* implicit */int) ((arr_5 [i_1 + 1] [i_1 - 1]) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)105)))))));
            }
        } 
    } 
}
