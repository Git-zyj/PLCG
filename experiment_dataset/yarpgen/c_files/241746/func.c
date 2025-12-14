/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241746
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
    var_19 = max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-2739977559686559957LL))), (((/* implicit */long long int) var_14)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) -2739977559686559957LL))), (2739977559686559958LL)));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5545))) >= (((((/* implicit */_Bool) -2739977559686559957LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_18)))))) : (741789434U)))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_17))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) ((var_5) ^ (((/* implicit */unsigned long long int) var_18))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((signed char) min((2739977559686559957LL), (((/* implicit */long long int) ((17592186044415LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2739977559686559961LL)) || (((/* implicit */_Bool) 7127974395232366579ULL))));
}
