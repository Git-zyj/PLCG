/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53186
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_14 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) (+(((((/* implicit */int) min((arr_4 [i_1] [i_2]), (arr_4 [i_2] [i_2])))) * (((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_2 [i_3]))))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_5 [i_1] [i_2] [i_3]))));
                    var_17 *= ((/* implicit */unsigned char) arr_4 [i_3] [i_2]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((var_9) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_4))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4))))))));
}
