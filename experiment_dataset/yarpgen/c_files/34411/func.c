/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34411
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
    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)34)), (2933218360788910476LL)))) ? (max((max((11923704356872972966ULL), (11923704356872972966ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62179))) + (var_5))), (var_2))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) 31ULL);
                var_18 += ((/* implicit */unsigned long long int) (signed char)57);
                var_19 = ((/* implicit */unsigned int) ((((unsigned int) 9505253235947551771ULL)) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 - 1])))))));
                arr_7 [i_0 - 1] [i_0 + 2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1 + 1]))) ? (((/* implicit */long long int) var_1)) : (arr_1 [i_1 + 1]))));
            }
        } 
    } 
    var_20 = var_9;
    var_21 = ((/* implicit */unsigned int) min((var_21), (var_13)));
    var_22 = ((/* implicit */unsigned short) ((var_2) ^ (var_11)));
}
