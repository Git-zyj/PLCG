/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4013
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 += ((/* implicit */int) (((~(((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) arr_5 [12] [12] [(unsigned short)5])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2])))))));
                    var_13 *= ((/* implicit */short) (-(var_7)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_4)))))))));
}
