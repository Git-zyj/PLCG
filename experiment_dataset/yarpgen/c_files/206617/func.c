/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206617
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
    var_15 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)17] [i_1] [(unsigned char)17] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) < (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_0]))))));
                arr_6 [11U] = ((/* implicit */signed char) arr_4 [i_0] [1] [i_0]);
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (max((3461557898562631785LL), (-3461557898562631816LL))) : (((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) * (((/* implicit */int) var_0)))))));
            }
        } 
    } 
}
