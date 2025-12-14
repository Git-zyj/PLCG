/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222228
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) var_4)))));
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 -= ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (17255650217391427788ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (_Bool)1)))))) ? (var_7) : (((/* implicit */int) ((((unsigned int) arr_2 [i_1])) != (min((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (arr_3 [i_1]))))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((7897111887095870971LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65531)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1])) == (((/* implicit */int) ((unsigned short) arr_2 [7])))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (short)10542)) & (((/* implicit */int) (_Bool)1))));
    }
    var_18 = ((/* implicit */_Bool) var_0);
}
