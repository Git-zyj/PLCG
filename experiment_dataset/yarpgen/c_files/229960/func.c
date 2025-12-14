/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229960
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
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) min((var_11), (var_7)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                var_12 = ((/* implicit */unsigned int) (signed char)9);
                var_13 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2413324863006453549LL)))) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)4)))) : ((-(((/* implicit */int) (unsigned char)89))))))));
    var_15 = ((/* implicit */_Bool) (signed char)-5);
}
