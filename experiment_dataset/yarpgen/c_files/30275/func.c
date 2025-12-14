/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30275
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24435))) | (var_8)));
        var_10 = ((/* implicit */unsigned short) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (14060349353013064986ULL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 3910247210081941662ULL)))))));
        arr_4 [i_0] [14U] |= ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_11 &= ((/* implicit */unsigned short) var_8);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (unsigned short)62176)) - (62164)))))) + (var_8)))));
    var_13 = ((var_5) - (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)139)), ((unsigned short)29801))))))));
}
