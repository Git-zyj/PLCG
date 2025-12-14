/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230690
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
    var_10 = var_3;
    var_11 = ((/* implicit */unsigned int) (+(948508147)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)11594))));
                var_13 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_0 [i_0]))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
        } 
    } 
}
