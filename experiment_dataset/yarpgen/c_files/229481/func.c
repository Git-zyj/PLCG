/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229481
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
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [0U]))) : (((7505931927326811042LL) ^ (arr_5 [i_0 - 2] [i_0] [i_0] [i_0 - 2]))))))));
                    arr_6 [3LL] [i_1] [i_1] [i_1] = ((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_5 [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0]))) >> (((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_2]) >> (((var_18) - (7653247898719507794LL))))) - (902629486LL))));
                }
            } 
        } 
    } 
}
