/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35172
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) << ((((-(((var_7) << (((arr_5 [i_0] [i_1] [i_0]) - (4188589405U))))))) - (1275068407U)))));
                    var_20 = ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
                    var_21 = ((/* implicit */signed char) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((-734059763) % ((+(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (_Bool)0))))))))))));
}
