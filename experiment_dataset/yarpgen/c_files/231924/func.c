/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231924
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
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (4209219006U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) == (var_14))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) var_12))), (((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) / (var_15)))));
                var_21 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) == (4294967295U))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) var_3)))))) - (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) min(((unsigned short)5469), ((unsigned short)46156)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_14))));
}
