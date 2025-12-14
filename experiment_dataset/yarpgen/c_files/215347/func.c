/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215347
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
    var_20 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (short)-30609);
                    arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)36171);
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_10 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)30612)) : (((/* implicit */int) var_7))))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_15))))))));
}
