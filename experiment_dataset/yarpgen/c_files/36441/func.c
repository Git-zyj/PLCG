/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36441
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (unsigned short)37295)), (11421735197707763493ULL))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (11421735197707763493ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)244)))))))));
                    arr_7 [(short)7] [i_1] [i_1] [i_1] = ((/* implicit */short) 11421735197707763486ULL);
                }
            } 
        } 
    } 
    var_19 = min((((/* implicit */unsigned long long int) var_7)), (max((max((18446744073709551615ULL), (63050394783186944ULL))), (((/* implicit */unsigned long long int) (-(1845814838)))))));
    var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11421735197707763493ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (11421735197707763496ULL)))))) ? (((/* implicit */unsigned long long int) var_16)) : (max((min((0ULL), (7025008876001788146ULL))), (var_4)))));
}
