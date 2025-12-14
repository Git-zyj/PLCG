/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53295
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max(((-(((15243751103130238009ULL) | (3202992970579313613ULL))))), (((/* implicit */unsigned long long int) var_10)))))));
    var_16 = ((unsigned int) (unsigned short)63702);
    var_17 ^= ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) ((int) 3202992970579313590ULL))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) 3202992970579313600ULL);
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) 3202992970579313613ULL)))), (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_1 + 1])) || (((/* implicit */_Bool) 1188619803))))));
                var_20 = ((/* implicit */long long int) ((int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)896)) == (1188619791)))));
                var_21 |= ((/* implicit */_Bool) var_2);
                arr_5 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1] [i_1])))), (((/* implicit */int) min((arr_0 [i_1 - 2]), (arr_0 [i_1 + 2]))))));
            }
        } 
    } 
}
