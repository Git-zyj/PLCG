/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31226
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
    for (int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 4] [i_1 + 1])) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0 + 1] [i_0 - 4] [i_2]))) : ((-(((/* implicit */int) (unsigned char)43))))));
                    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)145))));
                }
            } 
        } 
    } 
    var_12 |= ((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((var_1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7))))) : ((+(((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */long long int) var_2);
}
