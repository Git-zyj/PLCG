/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244936
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (short)29743)), (-1LL)))))) ? (((/* implicit */int) min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))) : (max((-1103698675), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))));
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((((/* implicit */int) (unsigned char)85)) >> (((-1103698688) + (1103698709)))))))) : (var_3)));
    var_14 *= ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)15632)))))) & ((~((~(10)))))));
}
