/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200921
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1])) * (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])))), (((/* implicit */int) max((arr_3 [i_1 - 2] [i_1 + 1]), (arr_3 [i_1 - 2] [i_1 + 1]))))));
                    var_16 = var_5;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) max(((short)-1), ((short)32767)))))) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))))) - (4294967071U)))));
}
