/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53630
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1] [i_2]))) : (arr_0 [i_2])))) || (((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_4 [i_0] [i_2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_10))))))));
                    var_13 = ((/* implicit */long long int) (+(min((var_10), (var_7)))));
                    arr_10 [i_0] [(short)4] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (var_11)))));
}
