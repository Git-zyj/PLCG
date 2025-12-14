/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53613
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
    var_13 = ((/* implicit */_Bool) (+(134213632LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 3] [i_2])) ? (-1LL) : (arr_4 [i_0] [i_1 + 3] [i_2])))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_2] [i_1 + 1])) ? (arr_5 [i_0] [i_0] [i_0] [i_1 + 2]) : (((/* implicit */unsigned int) -200997179))))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_2] [i_1 - 1])))));
                }
                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)240))))) == (min((((/* implicit */unsigned int) (_Bool)1)), (8388607U)))));
            }
        } 
    } 
}
