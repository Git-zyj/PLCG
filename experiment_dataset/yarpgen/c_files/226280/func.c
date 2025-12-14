/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226280
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((295222063) + (((/* implicit */int) (unsigned char)253))))))) ? (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) 536870911)))) : (((/* implicit */unsigned int) 295222063)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] [2ULL] = ((/* implicit */unsigned long long int) var_8);
                var_13 = ((/* implicit */unsigned char) arr_4 [i_0]);
                var_14 = (-(arr_3 [i_0] [i_1]));
            }
        } 
    } 
}
