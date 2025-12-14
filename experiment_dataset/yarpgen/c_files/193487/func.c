/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193487
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
    var_14 = var_4;
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1406192183U)))))) - (min((1406192183U), (2888775121U)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3476319067074332265LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)))) : (((var_12) ? (((/* implicit */long long int) -10)) : (var_6))))));
                arr_6 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (1406192183U)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((((((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (3476319067074332247LL))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (-2142784088))))), (((/* implicit */int) var_9))));
}
