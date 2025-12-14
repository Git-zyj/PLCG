/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192251
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
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) var_4)) + (9461)))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_8)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0)))))))));
                    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-18166))));
}
