/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214448
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)46593)) <= (((/* implicit */int) (unsigned short)65532)))))));
                arr_4 [i_0] [i_0] = (-(((/* implicit */int) (((~(arr_1 [i_0]))) == (var_2)))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) max((267911168U), (((/* implicit */unsigned int) (unsigned short)18))))) ? (((((/* implicit */_Bool) -2109452916)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65532), (((/* implicit */unsigned short) var_8))))))))));
}
