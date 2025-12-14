/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3306
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31575)) ? (((unsigned long long int) ((_Bool) var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_10)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4U))))))))))));
    var_19 *= ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((4U), (4U)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (short)-3421)) : (((/* implicit */int) (unsigned char)64))))) : (((unsigned int) 3730963528286288753ULL)))) : (((/* implicit */unsigned int) ((int) var_17)))));
                var_21 = ((/* implicit */short) (+(((((/* implicit */long long int) var_1)) ^ (min((((/* implicit */long long int) var_14)), (var_7)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min(((~(var_8))), (((/* implicit */unsigned long long int) 4U))));
}
