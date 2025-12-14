/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46730
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
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)125))))) ? (1291307951344891564ULL) : (((/* implicit */unsigned long long int) (~(-8111684744762942768LL)))))), (((/* implicit */unsigned long long int) ((int) min((4098431659U), (var_1)))))));
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_3 [15U] [i_0] [i_0]))))), (((int) arr_0 [i_0]))))) : ((~(var_6)))));
                var_21 = ((/* implicit */unsigned long long int) max((((unsigned int) var_3)), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_1])) ? (800482417U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) max((((/* implicit */int) var_15)), (var_5)))), (((((/* implicit */_Bool) 710370691U)) ? (3056415740U) : (800482397U))))), (((/* implicit */unsigned int) var_3))));
}
