/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32949
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
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0] [i_0 + 3])) ? (((/* implicit */int) ((short) arr_2 [i_1 + 2] [i_1 + 3] [i_1 - 1]))) : (((int) var_5))));
                var_15 = ((/* implicit */signed char) (-((-((+(var_11)))))));
                var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_1 [i_0 - 1] [i_0]))), ((+(arr_1 [i_0 + 1] [i_0])))));
                arr_4 [i_0] [i_0] [i_1 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                var_17 = ((/* implicit */int) max((var_17), ((~((~(((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */long long int) ((unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) var_13)))));
    var_19 *= ((/* implicit */unsigned short) var_4);
}
