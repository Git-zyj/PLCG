/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46646
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 3])) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                var_16 += arr_3 [(signed char)8] [i_1];
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) >= (var_1))) && (((/* implicit */_Bool) ((unsigned short) (signed char)-25)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60896)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-99)))))))))))));
    var_18 = ((/* implicit */unsigned short) (~(var_11)));
}
