/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229092
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
    var_10 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) var_6)) : (var_8))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-10793)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((arr_1 [(signed char)11]) | (((/* implicit */int) (short)-10785))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (((((_Bool)0) ? (var_0) : (((/* implicit */int) (unsigned char)64)))) << (((/* implicit */int) (unsigned short)6))));
        var_12 = ((/* implicit */long long int) (+(var_0)));
    }
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (var_6))))), (((/* implicit */int) var_1))));
}
