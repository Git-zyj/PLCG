/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247957
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
    var_17 = ((((/* implicit */int) var_9)) * (((/* implicit */int) ((((((/* implicit */_Bool) 877847217U)) && (var_1))) && (((/* implicit */_Bool) 2147483647))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */signed char) ((((min((arr_3 [i_0]), (((/* implicit */unsigned int) (short)-8524)))) / ((~(arr_3 [i_0]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_1] [i_0])))))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((var_6) / (((/* implicit */int) ((((/* implicit */int) (short)26990)) < (((/* implicit */int) (unsigned short)60502)))))));
                }
            } 
        } 
    } 
    var_19 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6777038907279371189ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) var_11))))), (var_2));
}
