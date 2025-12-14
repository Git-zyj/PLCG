/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27631
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-27014))))) ? (((/* implicit */int) max((var_6), (((/* implicit */short) var_8))))) : (((((/* implicit */int) (short)-27020)) + (((/* implicit */int) (unsigned short)15643)))))) / (((/* implicit */int) (unsigned char)51)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */signed char) var_6);
                arr_5 [i_0] [(unsigned short)11] [i_1] = ((/* implicit */signed char) ((short) ((unsigned long long int) 14624097913509354475ULL)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned int) var_3)), (4294967287U)))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((4069706815319463200ULL), (((/* implicit */unsigned long long int) (unsigned char)58))))))) || (var_0)));
}
