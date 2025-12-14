/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54181
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
    var_17 = ((/* implicit */unsigned short) ((var_9) + (var_0)));
    var_18 = ((/* implicit */int) min((max((var_1), (((/* implicit */unsigned int) ((var_12) << (((((((/* implicit */int) (short)-3579)) + (3583))) - (4)))))))), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = max(((~(((int) var_1)))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1 + 1])) == (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1 + 1]))))));
                var_19 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)15163)) : (((/* implicit */int) (signed char)16))))))));
                var_20 = ((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_1])), (var_8)));
            }
        } 
    } 
}
