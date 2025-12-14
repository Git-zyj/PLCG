/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240950
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)122))));
    var_12 = ((/* implicit */int) max((3136033986U), (1158933309U)));
    var_13 *= ((/* implicit */unsigned int) ((((1545059667588599165LL) / (((/* implicit */long long int) 3136033986U)))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)-6289)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (short)-7725);
                var_14 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (-(-8693668826470784638LL)))) & (min((((/* implicit */unsigned long long int) (short)19561)), (0ULL))))), (((/* implicit */unsigned long long int) -8693668826470784657LL))));
                var_15 = ((/* implicit */long long int) (unsigned short)9987);
                var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))), ((-(max((((/* implicit */long long int) (short)0)), (9223372036854775807LL)))))));
            }
        } 
    } 
}
