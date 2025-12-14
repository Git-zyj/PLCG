/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196977
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
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) (~(((((var_14) ^ (var_8))) | (((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_15)))))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) var_13)) / (var_14)))))) && (((/* implicit */_Bool) (~((+(var_0))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_1);
}
