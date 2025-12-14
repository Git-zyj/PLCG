/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30012
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) var_8)), (var_1))))) ? (((unsigned long long int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10))))))))));
    var_12 += ((/* implicit */signed char) max((min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1))))))), (((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) >= (var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 - 1])) << (((arr_3 [i_0] [i_1 + 3] [i_0]) % (arr_3 [i_0] [i_1 + 2] [i_1])))));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (min((max((((/* implicit */unsigned long long int) ((var_8) <= (var_8)))), ((+(var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1 + 3])) ? (arr_3 [i_1] [i_1 + 3] [i_1 + 1]) : (arr_3 [i_1] [i_1] [i_1 + 3]))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(var_5))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_8)) < (((((/* implicit */_Bool) 1241249010)) ? (var_6) : (((/* implicit */unsigned long long int) (-(var_2)))))))))));
}
