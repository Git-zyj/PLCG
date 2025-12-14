/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246106
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) ((var_10) ? (var_5) : (var_5)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_12 = var_8;
                    arr_9 [i_0 - 1] [i_2] = ((/* implicit */unsigned int) (((+((-(((/* implicit */int) arr_2 [i_1])))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) -8098058668500980187LL))) || (((/* implicit */_Bool) (+(0U)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_10))))))));
    var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)124))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_10)))))));
}
