/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19354
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) <= (arr_9 [i_1] [i_1] [i_1] [13]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) arr_7 [15] [15] [15])), (arr_2 [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [11] [i_2])) ? (((/* implicit */int) (short)-20589)) : (2147483647))) : (((int) (-2147483647 - 1))))) : (((((/* implicit */_Bool) (short)16384)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)16387)) : (((/* implicit */int) arr_7 [17] [17] [i_2])))))));
                    arr_10 [i_0] [i_0] = arr_3 [i_0] [(_Bool)1];
                    var_21 = ((((/* implicit */_Bool) (+(-164638624)))) ? (min((((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */int) (short)-16385)) : (((/* implicit */int) (_Bool)0)))), (((arr_9 [i_0] [i_1] [i_1] [i_1]) | (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (+(1823236066)))) ? (((var_3) ? (arr_1 [(_Bool)1]) : (var_17))) : (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) (short)8064))))));
    var_23 |= var_17;
}
