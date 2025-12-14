/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194553
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
    var_10 = ((/* implicit */short) (~((-(((/* implicit */int) (_Bool)0))))));
    var_11 = ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) : ((~(((/* implicit */int) ((unsigned short) var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (((+(arr_3 [i_1 - 1] [i_1 - 1] [i_1]))) - (min((arr_3 [i_1 - 2] [i_1 - 1] [i_1]), (((/* implicit */int) var_1)))))))));
                arr_5 [i_1] [i_1 - 2] [i_1 + 1] = (!(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [(_Bool)1] [i_1 - 2]))) != (var_9))));
            }
        } 
    } 
}
