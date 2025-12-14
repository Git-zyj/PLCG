/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212303
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                var_11 = ((/* implicit */int) ((short) ((short) var_9)));
                arr_7 [i_1] [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) arr_2 [i_0])))), ((~(((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) var_10)) - (7028)))))))));
                var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_5 [i_0] [i_1])), (min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(arr_5 [i_1] [i_1]))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_5)), (((long long int) var_8)))), (((/* implicit */long long int) (+(((/* implicit */int) ((short) var_4))))))));
}
