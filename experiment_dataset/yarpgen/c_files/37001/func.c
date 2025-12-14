/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37001
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
    var_13 = ((/* implicit */unsigned short) (-(var_2)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) var_0);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_9) : (((/* implicit */int) var_10))));
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)254);
        var_16 = ((/* implicit */unsigned long long int) (+((+(var_9)))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_17 = (unsigned short)65281;
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)254))))) ? (((/* implicit */int) ((unsigned char) 15461150206080456999ULL))) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_1 [i_1]) : (((/* implicit */int) arr_0 [i_1] [13])))))) == (((/* implicit */int) var_1)))))));
        var_20 *= ((/* implicit */signed char) var_10);
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_9))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) var_8))))));
}
