/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220814
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 3054007060658539292LL)) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)71)))))));
    }
    var_14 = ((unsigned short) ((((unsigned int) 5699729890311753864LL)) == (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) % (var_3))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (short)-13))))) ? (((/* implicit */long long int) (~(var_12)))) : (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) var_4))))) : (min((var_8), (((/* implicit */long long int) var_4))))))));
    var_16 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (min((2245469275761769396ULL), (((/* implicit */unsigned long long int) var_2)))))));
}
