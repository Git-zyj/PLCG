/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41459
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
    var_20 = (unsigned short)13156;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (3635129752U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13185))) : (((unsigned long long int) (unsigned short)52380))))) ? (((/* implicit */int) (short)4095)) : ((~(((/* implicit */int) var_10))))));
                arr_6 [i_1] [(signed char)4] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) (signed char)35))) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_4 [i_1])))) : (((/* implicit */int) var_11)))), ((+(((var_9) ? (((/* implicit */int) (unsigned short)13185)) : (((/* implicit */int) arr_4 [i_1]))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
            }
        } 
    } 
}
