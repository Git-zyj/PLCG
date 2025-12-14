/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197531
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
    var_12 = ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)253)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))))) == (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)241)))))))), (max(((-2147483647 - 1)), ((-2147483647 - 1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (unsigned char)0;
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                var_13 = ((((/* implicit */long long int) ((((/* implicit */int) (short)-1174)) ^ (((/* implicit */int) (short)31646))))) >= (((((((/* implicit */long long int) 134217727U)) / ((-9223372036854775807LL - 1LL)))) - (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) / (9223372036854775780LL))))));
                var_14 = ((/* implicit */_Bool) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            }
        } 
    } 
}
