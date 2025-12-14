/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2657
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = max((((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) var_9))))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])));
                var_21 &= ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned int) max((arr_2 [i_1] [i_0]), (((/* implicit */int) (unsigned char)10))))) % (((424055261U) % (((/* implicit */unsigned int) 290388513)))))));
                arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_4 [i_0] [i_1]) % (((/* implicit */int) (unsigned char)141))))), (max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0])), (arr_5 [i_0] [i_0]))))))));
                var_22 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(var_14)))) % (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) % (var_1)))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_19);
    var_24 += ((/* implicit */signed char) ((2766323706U) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
