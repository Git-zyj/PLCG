/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4166
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
    var_10 = ((/* implicit */unsigned long long int) (-(var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 608618056U)) ? (((1421627383881345067ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12868))))) : (((/* implicit */unsigned long long int) var_4))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0])));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) var_1)))));
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
        arr_8 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 655705495U)), (1421627383881345057ULL)))))))));
    }
}
