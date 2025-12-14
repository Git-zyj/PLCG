/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207105
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
    var_15 = ((/* implicit */short) var_13);
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)6228))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */short) ((unsigned char) arr_2 [i_2] [i_0]));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_14)))) - (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */short) (signed char)57);
}
