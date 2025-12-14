/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19774
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 += ((/* implicit */unsigned short) ((max((arr_0 [i_1] [i_0]), (arr_0 [i_0] [i_1]))) || ((!(((/* implicit */_Bool) (unsigned short)0))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_4 [i_0] [i_1]))), (arr_4 [i_0] [i_0])));
                var_12 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0] [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (((max((var_2), (((/* implicit */int) var_8)))) >> (min((1918591406), (((/* implicit */int) (_Bool)0))))))));
}
