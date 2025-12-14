/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219279
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
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (signed char)61)))));
                    var_14 -= ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (216172782113783808LL))), (((/* implicit */long long int) ((arr_8 [i_2 - 1] [i_2 + 2] [i_0 - 1]) ? (((((/* implicit */int) arr_0 [(short)12])) * (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])))) : (((/* implicit */int) arr_0 [i_0 + 2])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)88))));
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))));
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((~(((((/* implicit */_Bool) var_5)) ? (var_11) : (var_11))))) : ((~(((/* implicit */int) (short)(-32767 - 1)))))));
    var_18 = ((((((var_5) > (var_9))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_1)))))) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))));
}
