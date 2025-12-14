/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214769
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
    var_14 = ((/* implicit */short) (~(((/* implicit */int) (signed char)106))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (18446744073709551607ULL)));
    var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((18446744073709551613ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_2))))))), (((/* implicit */unsigned long long int) var_8))));
    var_17 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */int) ((arr_3 [i_1 - 3] [i_1 - 3] [i_1]) > (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_1 + 1]))))) == ((-(arr_1 [i_0] [i_1 + 1])))));
                var_18 = ((/* implicit */short) arr_2 [i_1 - 1]);
            }
        } 
    } 
}
