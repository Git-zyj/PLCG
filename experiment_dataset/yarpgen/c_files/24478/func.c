/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24478
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = (+(((arr_1 [i_0]) % (((/* implicit */unsigned long long int) -4299955944540337125LL)))));
        arr_2 [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(2490494716U)))) <= (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ^ ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_15 -= ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((var_6) ? (((((/* implicit */_Bool) (unsigned short)63662)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) (signed char)1)))))) : (((/* implicit */int) var_4))));
}
