/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246544
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
    var_10 = ((/* implicit */unsigned short) max(((~(-6913498799355313293LL))), (((/* implicit */long long int) ((_Bool) (signed char)(-127 - 1))))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), ((~(-7950499460196765191LL)))))) ? (min((4046215401035662584LL), (((/* implicit */long long int) max((var_1), (var_2)))))) : (((/* implicit */long long int) var_9))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((signed char) var_6))), (min((-6087262686660063498LL), (-6913498799355313293LL))))), (((min((7950499460196765180LL), (((/* implicit */long long int) 3768489081U)))) % (((/* implicit */long long int) ((/* implicit */int) (short)-13273)))))));
        var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) & (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)105), (((/* implicit */unsigned char) (_Bool)1)))))) & ((~(4611686018427256832LL)))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)32756)))), (((/* implicit */int) arr_2 [i_1]))));
        var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (short)32726)), (arr_3 [i_1] [i_1]))) > (((arr_3 [i_1] [i_1]) - (arr_3 [i_1] [i_1])))));
    }
}
