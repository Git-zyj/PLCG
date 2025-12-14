/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228470
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
    var_17 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))), (var_1)))) ? (((/* implicit */long long int) ((((unsigned int) arr_4 [i_0])) - (((arr_2 [i_0] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)5] [i_1 - 1]))) : (arr_0 [i_0])))))) : (((((/* implicit */long long int) ((3234476225U) - (((/* implicit */unsigned int) -415618595))))) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27953))) - (var_14)))))));
                arr_6 [i_0] [i_0 + 1] [12U] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_0 [i_1])) - (min((((/* implicit */long long int) var_0)), (var_14))))) - (((/* implicit */long long int) max((((arr_0 [i_1]) - (var_2))), (((/* implicit */unsigned int) ((short) arr_3 [i_0] [i_0] [i_1 - 1]))))))));
            }
        } 
    } 
}
