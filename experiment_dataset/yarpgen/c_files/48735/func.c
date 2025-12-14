/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48735
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
    var_17 -= ((/* implicit */int) var_6);
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) var_11)), (var_0))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-127)) <= (((/* implicit */int) var_6)))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((arr_3 [i_0 + 1] [15LL] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_13)), (((unsigned char) arr_3 [i_0] [i_0] [i_0 - 3]))));
                var_20 = ((/* implicit */unsigned short) (-(-841666936)));
                arr_7 [i_0] [i_1] [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (signed char)11)))), ((~(((/* implicit */int) (signed char)17))))))) - (var_4)));
            }
        } 
    } 
}
