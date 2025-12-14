/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36634
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
    var_16 = ((/* implicit */_Bool) (-(((((var_8) * (((/* implicit */long long int) ((/* implicit */int) var_4))))) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)65535)))))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (var_1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 &= ((((var_2) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned short)65529))))) : ((-(((/* implicit */int) (unsigned short)65525)))))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) < (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_6)))))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((var_14), (((/* implicit */int) var_12))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_14)) : (var_8))))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)15)))) < (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_0)))))))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)27837)) ? (0ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                }
            } 
        } 
    } 
}
