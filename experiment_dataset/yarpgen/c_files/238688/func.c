/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238688
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 13U)) ? (13459658087331810071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) min((arr_0 [(unsigned char)9] [i_0]), (arr_0 [i_0] [i_1])))))))));
                var_18 |= ((/* implicit */_Bool) (-(((int) arr_1 [i_0] [i_1]))));
                var_19 -= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10))))), (min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (arr_4 [i_0]))))), (((/* implicit */long long int) arr_3 [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((/* implicit */unsigned long long int) var_14)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (4987085986377741545ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))))))));
    var_21 = var_10;
}
