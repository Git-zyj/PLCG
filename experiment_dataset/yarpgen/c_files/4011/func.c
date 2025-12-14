/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4011
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [10ULL] [i_0] [i_0] = ((/* implicit */short) (unsigned short)8817);
                arr_7 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) max((max((arr_2 [i_1]), (((/* implicit */int) arr_0 [i_1] [i_1])))), ((+(((/* implicit */int) arr_4 [i_1] [(_Bool)1] [i_1]))))))), ((+((+(1944342932U)))))));
            }
        } 
    } 
    var_10 = ((/* implicit */long long int) (-(((/* implicit */int) ((14048390051007110855ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29683))))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (((((/* implicit */_Bool) 14048390051007110861ULL)) ? (14048390051007110876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))))) : (min((14048390051007110855ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14048390051007110830ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1685495221U))))))));
}
