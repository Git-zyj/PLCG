/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249199
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) var_5);
                    arr_7 [i_1] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2])))))) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2439398502U))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)112))));
}
