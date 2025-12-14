/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242270
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
    var_19 |= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */int) var_7))))) ^ (((var_17) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), ((-(-1972958404345407727LL)))));
                    var_21 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_0 [i_2])))))))) ? (((((/* implicit */_Bool) min((1542624001615357670LL), (((/* implicit */long long int) (unsigned short)6882))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1]))) : (var_9))) : (((/* implicit */long long int) arr_6 [1] [i_1] [1])))) : (((/* implicit */long long int) var_0)));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */long long int) var_6);
}
