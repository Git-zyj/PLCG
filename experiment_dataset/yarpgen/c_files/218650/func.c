/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218650
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
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (295710727U)))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 3999256567U)), (var_8))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)3)))))) ? (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) 978051217U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (984148175U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (var_11)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned short)8] |= min((max((arr_0 [i_0]), ((~(arr_0 [i_0]))))), (arr_0 [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)35868);
    }
}
