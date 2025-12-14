/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38259
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((arr_0 [i_1 - 1] [i_1]) && (((/* implicit */_Bool) arr_4 [i_1 + 3] [i_0]))))), (((arr_6 [i_1 - 1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_0] [i_1])))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) min(((~(((arr_0 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_5 [i_0]))))), (((/* implicit */unsigned long long int) var_9))));
                arr_9 [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_9)))) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))), (((((/* implicit */_Bool) ((arr_6 [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((+(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_10 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))), (((int) (_Bool)0))))));
    var_11 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(var_2)))))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_3)) - (2316)))))) ? (min((((/* implicit */unsigned long long int) var_1)), (var_6))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (152711564)))))));
}
