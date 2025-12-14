/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190267
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
    var_11 -= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_4 [i_1]))))));
                var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_0]))));
                arr_7 [i_0] = ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
}
