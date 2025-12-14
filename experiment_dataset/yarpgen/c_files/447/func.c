/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/447
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
    var_13 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)0)))), (((((/* implicit */int) (signed char)51)) * (((/* implicit */int) var_10)))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)79)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))))));
    var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (signed char)-116))))) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) max(((unsigned char)140), (((/* implicit */unsigned char) var_6))))), (((((/* implicit */int) (signed char)16)) / (((/* implicit */int) (unsigned char)168))))))));
                var_15 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
            }
        } 
    } 
}
