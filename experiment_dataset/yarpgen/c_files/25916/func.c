/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25916
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (short)5506);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)5521);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0]))));
                }
            } 
        } 
        var_21 = ((arr_5 [i_0] [i_0]) >= (arr_5 [i_0] [i_0]));
    }
    var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32743))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (((unsigned int) (short)-5499))));
    var_23 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_15)))))) - (((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))))));
}
