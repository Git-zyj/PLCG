/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244918
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)163)), (-521862996)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1248843082)))) >= (((unsigned int) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) arr_3 [i_0]);
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 3]))))) >= (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_4 [i_1]))))))));
            }
        } 
    } 
    var_21 = (((((~(((/* implicit */int) var_1)))) / (((/* implicit */int) (!(var_9)))))) == (((/* implicit */int) max((((/* implicit */short) var_8)), (var_7)))));
}
