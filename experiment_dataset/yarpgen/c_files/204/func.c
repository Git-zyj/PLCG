/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204
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
    var_12 = ((/* implicit */unsigned char) min((min((((var_6) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (((((~(((/* implicit */int) var_10)))) + (2147483647))) << (((((/* implicit */int) ((_Bool) var_8))) - (1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((((33538048LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-22964))))) + (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                var_13 = ((/* implicit */signed char) (short)32767);
                arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(2147483632))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_1) <= (((/* implicit */int) (signed char)-3)))) ? (var_5) : (var_4)))) ? (((/* implicit */int) var_6)) : ((+(((((/* implicit */int) var_9)) * (((/* implicit */int) var_8)))))))))));
}
