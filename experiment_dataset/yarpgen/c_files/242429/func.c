/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242429
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
    var_17 |= ((/* implicit */short) max(((((-(((/* implicit */int) (short)-32504)))) >> (((((var_15) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))) + (9436447407181033LL))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (unsigned char)102))))))));
    var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_14))) + (2147483647))) >> (((((/* implicit */int) var_0)) - (32084))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_1 + 2])) & (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_1 - 1])))))));
                var_19 = ((long long int) max(((unsigned char)189), (((/* implicit */unsigned char) (signed char)-70))));
            }
        } 
    } 
}
