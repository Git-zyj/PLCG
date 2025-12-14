/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249958
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [10U])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (_Bool)0))))));
                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5723907343879881301LL)) ? (((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2])) ^ (((/* implicit */int) (unsigned short)60000)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38511)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [12ULL])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */_Bool) var_9);
    var_18 = (+(((/* implicit */int) min((var_9), (((/* implicit */signed char) var_4))))));
}
