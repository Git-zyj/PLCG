/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237945
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_1 [i_0 - 3]))))))));
                var_19 = ((/* implicit */_Bool) ((signed char) (+(max((18446744073709551600ULL), (((/* implicit */unsigned long long int) var_6)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_1 + 1] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (var_4)))), (max((var_4), (15ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_15))))), (max((var_3), (((/* implicit */unsigned short) var_13)))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) 4721463320813253804ULL)) ? (18446744073709551611ULL) : (18446744073709551592ULL))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (816015519384573958ULL))))));
}
