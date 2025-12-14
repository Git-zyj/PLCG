/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4271
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
    var_18 = ((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) min((((/* implicit */short) var_6)), (var_9))))))) - ((-(((/* implicit */int) (unsigned char)219)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) var_11);
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_1 [(unsigned short)15]))));
                arr_4 [i_0] [i_0] [11LL] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1] [i_1 + 2]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_4);
}
