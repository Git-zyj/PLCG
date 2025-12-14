/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215062
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = arr_3 [i_1] [i_0];
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) < (((/* implicit */int) (unsigned short)11638))))) > (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) == (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) ^ (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_3 [i_1] [i_0]))))) << (((((/* implicit */int) arr_2 [i_0] [i_1])) - (23961)))))));
                var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_7)) - (23834)))))) ? (((/* implicit */int) min((arr_2 [i_0] [i_1]), (var_1)))) : (((/* implicit */int) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_7))))), (var_3)))) ? (((/* implicit */int) var_9)) : (min((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)45050))))))));
    var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20004)) ? (((/* implicit */int) (short)-21)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_0))))) : ((~(((/* implicit */int) (unsigned short)56191))))))));
}
