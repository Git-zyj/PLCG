/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241680
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
    var_15 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? ((-(4881057349436023089ULL))) : (min((((/* implicit */unsigned long long int) 3940132814U)), (0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)210)), (2445789878460009143LL)))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0])))))));
                var_17 += ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                var_18 |= ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_1]));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_1]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_2 [i_1])))))))) : ((~(((unsigned int) var_7))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) << (((((/* implicit */int) min((arr_0 [i_0]), (arr_4 [i_1])))) - (200)))));
            }
        } 
    } 
}
