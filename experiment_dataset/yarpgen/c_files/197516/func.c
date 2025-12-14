/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197516
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1 + 2] [i_0] [i_0 - 2]))))), ((+(((((/* implicit */_Bool) 4294967295U)) ? (1858334117671149190LL) : (1858334117671149190LL)))))));
                arr_5 [i_0] [i_1 - 1] [i_1] = ((/* implicit */long long int) 2409461316U);
            }
        } 
    } 
    var_11 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) 1310720101516664140LL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20783)) ? (3005011668147814312LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33)))))))))));
    var_12 -= ((/* implicit */_Bool) var_5);
}
