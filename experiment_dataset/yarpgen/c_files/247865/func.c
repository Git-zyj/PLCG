/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247865
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
    var_19 = var_17;
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((((((/* implicit */int) arr_0 [(unsigned short)6])) < (((/* implicit */int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0 - 4])));
                arr_5 [i_0 - 1] [i_1] = ((((/* implicit */_Bool) (+(-468752352)))) ? (min((min((((/* implicit */long long int) -468752345)), (4611686018427387904LL))), (((/* implicit */long long int) min((var_1), (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    var_20 = ((((/* implicit */int) (unsigned short)35853)) & (((/* implicit */int) (short)24576)));
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((468752331), (((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31422))))) ? ((~(((/* implicit */int) (unsigned short)29668)))) : (((((/* implicit */_Bool) (unsigned short)34129)) ? (((/* implicit */int) (unsigned short)34134)) : (var_1)))))));
}
