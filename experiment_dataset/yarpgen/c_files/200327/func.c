/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200327
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max(((~(arr_7 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) ((unsigned char) arr_7 [i_0] [i_0] [i_0]))))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_3 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) ^ (arr_0 [i_2]))) : (var_8)))) ? (var_1) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) 33554431LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))))));
                    var_18 &= ((/* implicit */unsigned int) ((long long int) var_1));
                    var_19 |= ((/* implicit */unsigned short) ((short) var_14));
                }
            } 
        } 
    } 
    var_20 = var_3;
}
