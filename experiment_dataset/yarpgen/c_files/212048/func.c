/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212048
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (((((+(((((/* implicit */int) (signed char)-121)) + (((/* implicit */int) arr_2 [i_0])))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1 - 1])) ? (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) << (((((/* implicit */int) (signed char)-68)) + (85))))) : (((/* implicit */int) ((short) (_Bool)1))))) - (131050))))))));
                arr_5 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-5583))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_0]))))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-17518)) : (((/* implicit */int) (_Bool)1)))) + (17539)))))));
                var_16 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_4 [(signed char)9] [i_1 - 1] [i_1])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) != (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1])) < (((/* implicit */int) arr_0 [(_Bool)1] [i_1])))))));
                var_17 *= ((/* implicit */_Bool) max((((short) (signed char)86)), (((/* implicit */short) (signed char)-99))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
}
