/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241291
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_5))));
                arr_4 [i_1] = max((var_5), (((/* implicit */int) arr_1 [i_1])));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 279933993)) || (var_1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((int) var_5)))))) : ((~(((((/* implicit */int) (unsigned short)2687)) - (((/* implicit */int) (short)3571))))))));
}
