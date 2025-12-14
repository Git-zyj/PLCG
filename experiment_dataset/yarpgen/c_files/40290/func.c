/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40290
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)58799)), (2302657080U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1 + 1] = arr_0 [(_Bool)1];
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)65535)))), (min((((/* implicit */unsigned long long int) 2302657098U)), (var_2))))))));
                var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2302657092U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned short)1806)) - (arr_1 [i_1]))) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((int) (unsigned short)65526)) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -1150591500)))))))));
                var_16 = ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_17 = var_9;
}
