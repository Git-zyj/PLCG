/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21022
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
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) 2147483647);
                arr_7 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_0 + 1] [13U])), ((-(((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned short) var_13));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)235)) & (((/* implicit */int) (unsigned short)7))));
}
