/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242842
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
    var_20 = ((/* implicit */unsigned long long int) (-((~((-(var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1 + 1] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [i_0] [i_1 + 1] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1])) ? (arr_4 [i_1] [i_1 - 2] [i_1]) : (arr_4 [i_0] [i_1 + 1] [7U]))))))));
                arr_7 [(unsigned char)0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_1 [i_1 - 1] [(short)13])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_3))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_16)) : (((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned int) var_16)))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_12))))))))));
    var_24 = ((/* implicit */signed char) var_11);
}
