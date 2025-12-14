/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228309
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
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((min((var_7), (((/* implicit */unsigned char) var_0)))), (((/* implicit */unsigned char) min((var_11), (var_0)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((short) var_12))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
        var_16 -= ((/* implicit */signed char) (+(var_13)));
    }
    for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */short) (((-(max((var_12), (((/* implicit */long long int) var_3)))))) / (((/* implicit */long long int) var_6))));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_7)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            arr_16 [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
            arr_17 [i_3] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_7)))));
            var_17 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) -712236685)))))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_1), (((/* implicit */short) var_11))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)241)))))));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(max((min((((/* implicit */int) var_11)), (var_6))), (((/* implicit */int) var_3)))))))));
        }
        arr_18 [i_3] = (-((+(var_12))));
    }
    var_20 = ((/* implicit */_Bool) (+(var_13)));
}
