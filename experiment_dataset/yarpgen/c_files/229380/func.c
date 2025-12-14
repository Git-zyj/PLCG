/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229380
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_1))))))));
    var_16 = var_11;
    var_17 ^= ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) ((arr_2 [i_0 - 3] [6]) * (arr_2 [i_0 + 1] [(_Bool)1])))) / ((-(var_0))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))) << (((int) arr_4 [i_0]))));
                var_19 = ((/* implicit */unsigned char) (~(((arr_4 [i_0]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (signed char)-52))))));
                arr_6 [i_0] = ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_13)))))) >= (((/* implicit */int) ((signed char) var_1))));
            }
        } 
    } 
}
