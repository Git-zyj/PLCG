/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244865
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) (-(((unsigned int) arr_4 [i_0 + 1] [i_1] [i_1]))));
                var_18 += (~(((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (901834325)))) ? (((((/* implicit */_Bool) (unsigned short)61362)) ? (((/* implicit */int) arr_5 [i_0] [(unsigned short)0] [i_0])) : (((/* implicit */int) var_2)))) : (-1764798788))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 1764798772)) ? ((-(((/* implicit */int) var_4)))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (1764798763)))))));
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (-1764798788) : (((/* implicit */int) var_4))))))) ? ((~(((1700681576U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
}
