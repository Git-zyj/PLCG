/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195641
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [(_Bool)1])))) : (((/* implicit */int) ((unsigned char) var_9))))), (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (max(((short)-1), ((short)-31))))))));
                var_14 |= ((/* implicit */_Bool) var_7);
                var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0 - 2])) + (((arr_5 [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0)))))) - (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 2]))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) ((unsigned short) (_Bool)0)))) : (max((((/* implicit */int) ((((/* implicit */int) (short)-11163)) < (((/* implicit */int) var_12))))), ((~(((/* implicit */int) var_5))))))));
}
