/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23864
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-8)))))) : (((((/* implicit */int) (signed char)7)) << (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)28))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 6239841715835193301ULL)))) ? (max((var_9), (((/* implicit */int) (unsigned short)36976)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_3) : (var_4)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((max(((_Bool)0), ((_Bool)1))) ? (((((/* implicit */_Bool) (signed char)-29)) ? (12695848484411060679ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((int) 15591371291743678508ULL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (var_13))))), (var_3)));
}
