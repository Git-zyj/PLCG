/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238343
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(signed char)14] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_6), ((unsigned char)80)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109)))))) : (max((var_13), (((/* implicit */unsigned int) (unsigned char)168)))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2035307502)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (33550336)))) : (((/* implicit */int) var_14)))))));
                arr_6 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_13))))));
                var_17 = ((/* implicit */long long int) max((var_17), (max((((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)80)))) % (var_3)))), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))) & (((/* implicit */long long int) max((((/* implicit */int) var_7)), (var_16))))))))));
            }
        } 
    } 
    var_18 = (-(((/* implicit */int) var_14)));
    var_19 = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) 1102480381U)))) ? (((/* implicit */int) var_6)) : (((var_7) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_10))))))));
    var_20 = ((/* implicit */_Bool) var_2);
}
