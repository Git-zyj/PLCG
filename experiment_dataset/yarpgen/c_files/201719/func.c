/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201719
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [4] [3U] [i_0] = ((/* implicit */unsigned short) (+(((arr_5 [i_0 + 2]) - (var_13)))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((int) min((arr_2 [i_0 - 1]), (((/* implicit */unsigned char) arr_1 [i_0 + 2])))));
            }
        } 
    } 
    var_19 *= (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12372))) : (((((/* implicit */_Bool) 6748544017542707667LL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
    var_20 = ((/* implicit */short) 21523448U);
}
