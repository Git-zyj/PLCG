/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39783
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)37)), (var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-30))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)29)))) : ((+(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) arr_1 [i_0 + 1]))))) : (((/* implicit */int) ((((((/* implicit */int) arr_1 [(signed char)0])) & (((/* implicit */int) (short)32767)))) <= (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))) == (((/* implicit */int) arr_1 [i_1]))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_11))))));
            }
        } 
    } 
}
