/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44782
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
    var_17 ^= ((/* implicit */unsigned long long int) var_1);
    var_18 = ((/* implicit */_Bool) (signed char)-86);
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-29));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (((((_Bool)1) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (unsigned char)255)))) & (((((/* implicit */int) arr_4 [2U])) - (((/* implicit */int) arr_2 [i_1]))))));
                var_21 = ((/* implicit */long long int) max((max((50331648U), (((/* implicit */unsigned int) (short)-1156)))), (((/* implicit */unsigned int) var_9))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) var_8));
            }
        } 
    } 
}
