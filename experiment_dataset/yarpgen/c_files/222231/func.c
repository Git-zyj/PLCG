/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222231
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8912656692437093461ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((int) var_1))))));
                var_21 = ((/* implicit */unsigned long long int) var_17);
                arr_7 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                arr_8 [(_Bool)1] = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_4 [(_Bool)1] [i_0] [i_0]))), ((((-(((/* implicit */int) (short)(-32767 - 1))))) & (((/* implicit */int) var_15))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) 8912656692437093461ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (var_11)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) != (min((8912656692437093446ULL), (((/* implicit */unsigned long long int) var_8))))))));
}
