/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229399
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((signed char)15), ((signed char)-16)))), (((((/* implicit */_Bool) 5399201678863043006ULL)) ? (4235593750U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))))));
                var_14 = min((min((arr_3 [i_1]), (arr_3 [i_1]))), (((/* implicit */unsigned short) var_12)));
                var_15 = ((/* implicit */long long int) max((var_15), ((-9223372036854775807LL - 1LL))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_11);
}
