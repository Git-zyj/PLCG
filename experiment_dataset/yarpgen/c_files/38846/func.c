/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38846
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
    var_15 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned int) var_9))));
    var_16 &= ((/* implicit */unsigned int) (unsigned short)65535);
    var_17 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) var_3)), (var_1))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_12))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_0 [i_0] [i_0 + 2])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) arr_2 [i_1]);
        var_22 = ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (((5660424824437612379ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 1886805981))) ? (((int) (-(588441149403688499ULL)))) : (min((((((/* implicit */int) var_2)) - (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) var_5))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        var_24 = ((/* implicit */short) ((unsigned int) var_8));
        var_25 = ((/* implicit */_Bool) (short)-2427);
        var_26 = ((/* implicit */int) min((var_26), ((+(((/* implicit */int) var_5))))));
    }
}
