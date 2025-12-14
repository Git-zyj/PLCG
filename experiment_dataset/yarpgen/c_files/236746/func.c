/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236746
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
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) var_0))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_3 [i_2])))))) ? (((((10930121934783883633ULL) <= (((/* implicit */unsigned long long int) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) : (((((/* implicit */long long int) var_1)) / (65535LL))))) : (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [3U])))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((min((arr_3 [i_0 - 4]), (min((((/* implicit */long long int) var_9)), (arr_3 [i_0]))))) % (((/* implicit */long long int) var_0))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (+(((var_11) << ((((+(var_6))) - (916946839U)))))));
}
