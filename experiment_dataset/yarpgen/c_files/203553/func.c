/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203553
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
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) 3026158219676730533ULL)))))) || (((/* implicit */_Bool) var_9))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_4 [i_1]))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) min(((-(arr_4 [i_0]))), (((/* implicit */unsigned long long int) var_4))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) var_5))))), (min(((+(var_8))), (((/* implicit */unsigned long long int) ((int) var_3)))))));
}
