/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44923
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((int) max((((/* implicit */int) min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))), ((-(((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2065166665)) ? (((arr_3 [i_1 + 1] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))) : ((+(((/* implicit */int) ((_Bool) arr_5 [i_1])))))));
            }
        } 
    } 
    var_13 = var_4;
    var_14 = ((/* implicit */unsigned char) ((long long int) var_8));
    var_15 = ((/* implicit */unsigned short) var_9);
}
