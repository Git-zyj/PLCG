/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22317
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
    var_10 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -479574776)) : (var_8))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 479574775)) : (var_0)))))));
    var_11 = ((/* implicit */unsigned char) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (var_8))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max(((-2147483647 - 1)), ((~(((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 1] [i_0 + 2]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_8 [i_0] = ((/* implicit */signed char) (-((-(-479574776)))));
                    arr_9 [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((long long int) 437635451U)) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_4))))));
                    var_12 -= ((/* implicit */unsigned int) ((signed char) 2147483647));
                    arr_10 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) (~(-479574776)));
                    arr_11 [i_0] [i_1] [13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) & (((unsigned long long int) var_4))));
                }
            }
        } 
    } 
}
