/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37182
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
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) 0ULL))), (max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) var_0)))), (((unsigned long long int) var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) min((max((min((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), ((((_Bool)1) ? (18446744073709551615ULL) : (13527920666371620183ULL))))), (((((/* implicit */_Bool) 4918823407337931414ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28510))) : (3ULL)))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */unsigned long long int) (short)-28510)), (16179585502272289976ULL))))));
                var_20 ^= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                arr_5 [i_0] [2LL] = ((/* implicit */signed char) (unsigned char)128);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned char) 3ULL));
}
