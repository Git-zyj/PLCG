/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197101
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] &= ((/* implicit */int) var_7);
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned int) arr_2 [i_0] [i_0] [i_0 - 1]))))) | ((+(4294967295U)))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) : (arr_0 [i_0]))) >> (((var_9) - (143453301U))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20962))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((-809462665) - (-1924504990)))) : (var_14))))));
    var_22 |= ((/* implicit */short) ((((_Bool) max((((/* implicit */unsigned int) var_5)), (4294967283U)))) ? (var_17) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
}
