/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233912
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) min((var_3), (((/* implicit */short) var_1))))))))))));
    var_13 ^= ((/* implicit */short) min((max((3145728LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) var_5))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((short) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) max(((short)8160), (((/* implicit */short) (_Bool)1))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2 + 1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_9);
}
