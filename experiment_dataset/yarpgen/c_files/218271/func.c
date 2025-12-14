/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218271
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!((_Bool)1)));
                    var_14 += max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) & (max((var_13), (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-61)), (-294617296)))) ? (-294617296) : (var_0)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((max((var_7), (294617302))), (min((((/* implicit */int) (unsigned char)196)), (var_0))))))));
}
