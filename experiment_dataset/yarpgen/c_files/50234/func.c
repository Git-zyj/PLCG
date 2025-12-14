/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50234
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) var_13);
                var_14 &= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((unsigned long long int) arr_1 [i_1])) : (((/* implicit */unsigned long long int) var_9)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */unsigned char) arr_4 [(unsigned short)22] [i_0 + 2] [(unsigned short)22])), (arr_3 [i_0] [i_0] [i_1]))), (arr_3 [i_1 + 1] [i_0 + 1] [i_0 + 3])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_7);
    var_16 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_11))));
    var_17 = ((/* implicit */_Bool) var_3);
}
