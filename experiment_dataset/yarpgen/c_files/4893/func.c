/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4893
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
    var_19 = max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)57))))) ? (var_15) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) max((var_13), (var_9)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (short)-15695))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1 + 1] [i_1] = ((/* implicit */short) arr_0 [i_0]);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((38828116U) << (((((/* implicit */int) (short)16384)) - (16384)))))))) == (((min((((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1])), (4256139162U))) % (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)94)) ^ (var_15)))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [6ULL] [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_1]), ((short)-12715))))) : (((4256139165U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_1 - 1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (+(((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4256139152U))))));
}
