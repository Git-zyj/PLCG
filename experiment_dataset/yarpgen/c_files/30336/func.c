/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30336
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) + (((/* implicit */int) max((var_0), ((signed char)-58))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_1]))));
                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)5)), (arr_4 [i_1] [i_0])))) : (((/* implicit */int) var_10)))) <= (((/* implicit */int) var_10))));
                var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-126)), (((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) (unsigned char)21))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) % (min((((/* implicit */int) max((var_12), (var_13)))), ((+(((/* implicit */int) var_11))))))));
}
