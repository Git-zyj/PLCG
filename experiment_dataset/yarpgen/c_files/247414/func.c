/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247414
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
    var_16 = ((/* implicit */signed char) ((min((((unsigned int) var_4)), (((((/* implicit */_Bool) var_1)) ? (var_4) : (var_14))))) << (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (short)(-32767 - 1));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [3U] [i_2] = ((/* implicit */_Bool) min((((min((var_14), (arr_1 [i_0]))) << (((((/* implicit */int) arr_4 [i_0])) - (45623))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)13746))))))))));
                    arr_8 [10U] [(short)4] [i_0] [(_Bool)1] = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1113733179U)))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) 395726330U);
    }
}
