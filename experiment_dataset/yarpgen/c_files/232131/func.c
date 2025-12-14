/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232131
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> ((((~(var_6))) - (1847289399)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (15646120672656815140ULL)))))) : ((((!(((/* implicit */_Bool) 24ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */_Bool) 223080405)) ? (((/* implicit */long long int) -11)) : (-220606477604467117LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 3] [i_1] [i_0 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32764))) : (-9223372036854775796LL))))) ? (((/* implicit */int) (unsigned char)208)) : (min((35), (-11)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((signed char) var_3))))), (((/* implicit */int) ((short) ((int) arr_0 [i_1]))))));
            }
        } 
    } 
    var_11 -= max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-19)));
}
