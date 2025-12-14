/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195859
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) | (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_9)), (var_7))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))), ((+(var_10)))))) + (var_5)));
    var_13 = ((/* implicit */signed char) (+(616959358)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1 - 1] = ((/* implicit */long long int) max((((/* implicit */int) var_4)), (arr_0 [i_1 + 3])));
                var_14 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_9))))) : (((((/* implicit */_Bool) arr_2 [i_0] [10LL] [10LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))))));
            }
        } 
    } 
}
