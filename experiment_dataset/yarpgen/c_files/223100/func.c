/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223100
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
    var_13 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((var_0) > (var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) max(((((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))) - (1040187392))), (((/* implicit */int) arr_3 [i_1 - 1] [i_0]))))) : (((/* implicit */unsigned int) max(((((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))) + (1040187392))), (((/* implicit */int) arr_3 [i_1 - 1] [i_0])))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_4 [(short)21] [i_1] [i_0])))))))) ? (min((-1040187374), (arr_1 [i_0]))) : (((1040187392) / (((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((short) ((-5444909245424311083LL) - (min((((/* implicit */long long int) arr_0 [i_1 - 1])), (-9223372036854775800LL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (1040187392) : (((/* implicit */int) (unsigned char)206))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (-1040187401)))))) : (((/* implicit */unsigned long long int) (+(var_4))))));
}
