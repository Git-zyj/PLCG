/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192995
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_10)));
    var_21 *= ((/* implicit */signed char) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */_Bool) var_1);
                arr_5 [(_Bool)1] [11U] [i_0] = ((/* implicit */short) min((((((((/* implicit */unsigned long long int) var_12)) + (arr_2 [i_0] [i_0]))) - (((arr_0 [i_0 - 2]) << (((-118626731) + (118626776))))))), ((-(arr_1 [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-17484))));
}
