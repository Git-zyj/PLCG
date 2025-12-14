/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213728
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) min((min((var_4), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (min((10638276297030643489ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))));
                var_11 = ((/* implicit */signed char) min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967292U)))), (((/* implicit */long long int) min((min((((/* implicit */unsigned short) var_2)), (arr_3 [i_0]))), (((/* implicit */unsigned short) var_0)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((min((var_4), (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)81))))))), (var_9)));
    var_13 = ((/* implicit */unsigned short) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)174))));
}
