/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234293
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((((var_0) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) (short)64)) : (((/* implicit */int) (signed char)85))))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (max((4491428028860967344LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) min((arr_1 [i_0 + 4]), (((/* implicit */unsigned int) (unsigned char)25)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
}
