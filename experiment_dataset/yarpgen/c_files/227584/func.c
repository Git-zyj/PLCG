/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227584
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [1ULL])))))));
                    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [(unsigned char)7] [(unsigned char)7]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((var_9), (((/* implicit */unsigned char) var_4)))))));
}
