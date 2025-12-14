/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205540
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
    var_14 = var_13;
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_12))));
    var_16 = ((((/* implicit */int) var_9)) < ((((-(((/* implicit */int) (unsigned short)8015)))) & (((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)41))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((arr_2 [(unsigned char)16]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((-168827692222598774LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [11LL])))))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) var_9)))) ? (3410400833U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -144115188075855872LL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25836)))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_5))))))));
                var_18 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
}
