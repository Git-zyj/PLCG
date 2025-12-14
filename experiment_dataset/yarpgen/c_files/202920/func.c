/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202920
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((max((((/* implicit */unsigned int) arr_2 [i_0] [(unsigned short)20])), (1073741823U))) << (((var_5) - (2941102319U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [16U] [i_1] [i_2])))));
                    arr_11 [i_0] [i_0] [i_0] = (((((((~(arr_4 [i_0]))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_1])) - (55))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1]))) ^ (var_8))));
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) & (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11395)))))))) ? (((int) ((int) 3221225472U))) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) < (((unsigned int) var_13)))))));
}
