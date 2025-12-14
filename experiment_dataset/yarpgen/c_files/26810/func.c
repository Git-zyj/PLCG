/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26810
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
    var_16 += var_6;
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (-2706190315324380765LL)))));
    var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_0)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1])));
                var_20 = ((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 + 2] [i_1]));
                var_21 = ((/* implicit */long long int) (short)-21587);
            }
        } 
    } 
}
