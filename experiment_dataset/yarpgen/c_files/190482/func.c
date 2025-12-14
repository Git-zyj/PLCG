/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190482
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) var_6);
                    arr_8 [10LL] [i_1] [2] |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_14)))) ? (((((/* implicit */_Bool) 3467365219U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) || (((/* implicit */_Bool) var_8)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_19))) ^ (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) var_15)) : (var_9))))))));
    var_22 = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_2)))))))), (var_17)));
}
