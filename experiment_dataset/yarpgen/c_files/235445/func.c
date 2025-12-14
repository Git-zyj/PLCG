/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235445
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
    var_15 = ((/* implicit */int) var_13);
    var_16 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) max(((unsigned char)93), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7)))))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)163)) > (((/* implicit */int) arr_0 [i_0])))))))));
                arr_4 [(unsigned char)8] [i_0] [i_1] = var_9;
                var_18 = ((/* implicit */unsigned char) max((arr_3 [i_0] [i_1 + 2] [i_1]), (((/* implicit */unsigned short) var_13))));
                var_19 = ((/* implicit */unsigned long long int) (unsigned char)92);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_2);
}
