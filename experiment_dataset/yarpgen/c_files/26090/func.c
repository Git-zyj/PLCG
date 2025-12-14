/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26090
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (signed char)40)) : (max((((/* implicit */int) (signed char)-47)), (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned short)52304))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((1505484227), (((/* implicit */int) (signed char)37))))), (arr_8 [i_0 - 2] [i_0 - 2])))) ? (((((/* implicit */int) arr_3 [i_0 - 2])) + ((+(((/* implicit */int) arr_9 [(unsigned char)17] [0LL] [i_1] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_5 [i_0 - 1])) : ((+(((/* implicit */int) (short)25467))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13327))) - (-1LL))))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned int) -402261874)))) & (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) var_9)), (1340809734U))) <= (var_15))))) : (var_10)));
}
