/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213344
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
    var_17 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-123)) + (2147483647))) >> (((((/* implicit */int) var_12)) + (10286)))))), (((((/* implicit */_Bool) 6546078380069258948LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    var_18 |= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((var_0), (((/* implicit */signed char) var_13)))), (var_11)))) ? (min((min((((/* implicit */unsigned int) var_15)), (var_6))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((_Bool) var_11))))))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))) / (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 2])), (arr_1 [i_0 - 2])))));
            }
        } 
    } 
    var_20 -= var_16;
}
