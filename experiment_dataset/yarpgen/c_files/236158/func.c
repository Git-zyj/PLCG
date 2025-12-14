/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236158
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
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = (+((((-(((/* implicit */int) arr_1 [i_1] [i_0])))) * (min((446579567), (((/* implicit */int) var_6)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) (_Bool)0);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) 4294967295U);
                arr_8 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */int) (_Bool)1)) : (576634835)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_0))))));
                arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((576634843), (((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) -576634836))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((-576634814) & (-576634821))))));
    var_13 = ((/* implicit */_Bool) var_9);
}
