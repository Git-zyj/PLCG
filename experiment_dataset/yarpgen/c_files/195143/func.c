/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195143
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((long long int) ((int) ((((/* implicit */_Bool) 5905685049912079755LL)) ? (2301986141U) : (var_13))))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_5)))))))));
    var_18 = var_0;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (~(var_11))))) ? (((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((var_2) - (1268737360)))))))) : (min((((unsigned int) arr_2 [12U])), (((/* implicit */unsigned int) ((arr_0 [i_0]) << (((((((/* implicit */int) (signed char)-1)) + (12))) - (11))))))))));
        var_20 -= ((/* implicit */long long int) ((unsigned int) ((long long int) (~(var_5)))));
    }
    for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        var_21 = (~((~(arr_0 [i_1 + 1]))));
        arr_7 [i_1] = ((/* implicit */long long int) (signed char)0);
        var_22 = ((/* implicit */int) arr_3 [i_1]);
    }
}
