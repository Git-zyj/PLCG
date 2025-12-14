/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54096
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (max((var_7), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((16919983444886174203ULL) != (((/* implicit */unsigned long long int) 353227373))))))))) ? (((/* implicit */int) ((arr_1 [i_0 - 2]) < (((/* implicit */int) arr_3 [i_0 + 1]))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((var_14) | (((/* implicit */int) (_Bool)0)))) : (353227373)))));
                var_21 = ((/* implicit */unsigned short) min((((unsigned int) var_12)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 4])) & (((/* implicit */int) var_0)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_11);
}
