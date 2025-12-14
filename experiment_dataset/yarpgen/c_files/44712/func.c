/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44712
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 *= ((/* implicit */signed char) var_2);
                arr_7 [i_0] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_12)) ? (-185611866054095718LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) ((unsigned char) var_14))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (unsigned short)17127)))), (((/* implicit */int) var_2)))))));
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(var_14)))) ? (var_3) : (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_15))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_12)))))));
}
