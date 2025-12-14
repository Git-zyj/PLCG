/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31113
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_1] [i_0]))))))) ? ((-(((((/* implicit */_Bool) (signed char)-64)) ? (1915136237U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (max((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1542480689U))), (365654283U))))))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((arr_2 [i_0] [i_1 + 1] [(_Bool)1]) ? (((/* implicit */int) arr_4 [i_0] [18U])) : (((/* implicit */int) arr_3 [i_0] [i_1] [2ULL])))) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [i_0] [(signed char)20])), ((short)-288)))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (_Bool)1);
}
