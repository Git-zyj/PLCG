/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202815
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(signed char)22] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2))))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min((((/* implicit */short) (signed char)-87)), (var_1)))))) : (((/* implicit */int) (!(arr_2 [i_0 + 1] [i_1 - 1]))))));
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_1))));
            }
        } 
    } 
    var_12 += ((/* implicit */long long int) (((((-(((/* implicit */int) var_8)))) * (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))))) / ((+(((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_6)))))))));
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (((-(((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (short)11696)))))) != (min(((~(((/* implicit */int) (unsigned char)205)))), (((/* implicit */int) (signed char)-98)))))))));
}
