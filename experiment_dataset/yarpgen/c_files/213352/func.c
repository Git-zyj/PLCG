/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213352
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
    var_14 = ((/* implicit */long long int) ((signed char) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) min((arr_4 [i_1] [i_0] [i_0]), ((signed char)105))))))), (var_3)));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((long long int) var_8)))))));
    var_18 = ((/* implicit */unsigned int) var_6);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((+((-(72057593501057024ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)122))))) || (((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_12)))))))))));
}
