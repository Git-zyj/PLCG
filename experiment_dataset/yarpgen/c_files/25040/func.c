/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25040
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
    var_18 &= ((/* implicit */_Bool) var_12);
    var_19 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1 + 3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)252))))) + (arr_5 [i_0 - 1] [i_1] [i_1])));
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) arr_3 [7LL]))), (var_8)));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_12))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (~(4294967295U)));
}
