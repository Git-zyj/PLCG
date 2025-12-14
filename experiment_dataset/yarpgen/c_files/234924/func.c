/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234924
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
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((4007433104U) ^ (287534194U)));
                arr_4 [(signed char)14] [17U] [i_0 - 2] = (signed char)(-127 - 1);
                var_17 -= ((unsigned char) ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [18LL])) && (((/* implicit */_Bool) (short)0)))))));
                var_18 = ((/* implicit */unsigned long long int) max((((arr_1 [i_0] [i_1 + 3]) & (arr_3 [i_1 + 3] [i_0 - 2] [i_0 - 1]))), (arr_3 [i_1] [i_1 + 3] [i_1 + 2])));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (unsigned short)19391);
    var_20 = ((/* implicit */unsigned char) var_9);
    var_21 = ((/* implicit */long long int) (+((~(4294967295U)))));
    var_22 = min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_4))))), (var_5));
}
