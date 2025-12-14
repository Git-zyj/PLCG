/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4926
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-57)), ((short)17524)))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 18U)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) var_0)))), (var_3)))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (1797158980U)))))));
                    var_15 ^= ((/* implicit */unsigned char) max((min((arr_2 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))), ((~(arr_2 [i_1] [i_1])))));
                    var_16 = ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) % (arr_4 [(_Bool)1] [i_0])))) ? (((((/* implicit */_Bool) (short)17524)) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((var_1) + ((~(4973070557489300372LL)))));
    var_18 = ((/* implicit */unsigned int) ((int) var_4));
}
