/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219610
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
    var_13 = (~(((unsigned long long int) (unsigned char)74)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)38495)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)4685)) ? (6812364647622715298ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)9]))))))) - (10146)))));
                arr_5 [i_0] [i_0 - 1] = ((/* implicit */signed char) min(((~((~(var_1))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)62141)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((min((((var_10) / (((/* implicit */long long int) ((/* implicit */int) (signed char)72))))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) 1073741823)))))));
}
