/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195832
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
    var_18 = (unsigned short)24316;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)202))))))));
                var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0])) - (24)))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) (!(arr_2 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_8)), (var_0)))))));
    var_21 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_10))))) ? (((((/* implicit */int) (unsigned char)65)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) var_15))))));
}
