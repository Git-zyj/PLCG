/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19460
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((+(((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)36911)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -4330113425237887781LL)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29211)) ? (var_11) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((3992050916U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))) : (((int) arr_7 [i_0] [i_1] [i_1]))));
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47689)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)20))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(1056964608U)))), (max((-1697748860843154399LL), (((/* implicit */long long int) 347349987U)))))))));
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) / (var_1)))))))));
    }
    var_20 &= ((/* implicit */unsigned int) ((unsigned long long int) var_3));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59961)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0))))), (4645739870591220660LL))))));
    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
}
