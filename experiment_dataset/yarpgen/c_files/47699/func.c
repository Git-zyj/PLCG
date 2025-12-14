/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47699
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
    var_12 = ((int) var_2);
    var_13 -= (+(max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) var_0)), (var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) min((max((arr_2 [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))))))));
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= ((~(((/* implicit */int) arr_1 [i_0 + 1]))))));
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_1])) || (((/* implicit */_Bool) arr_3 [i_1] [i_1] [(unsigned short)8]))))) & (var_7)))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (((((/* implicit */_Bool) (~(var_7)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1))))));
}
