/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230022
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_2 [8ULL] [i_0] = ((/* implicit */_Bool) var_6);
        arr_3 [i_0] = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) var_4)) ? (var_2) : (var_4))) | (((/* implicit */unsigned long long int) var_7))))));
    }
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2013265920)) + (var_8)))) ? (4504323358752652905ULL) : (((/* implicit */unsigned long long int) var_3))));
    var_12 = ((/* implicit */int) var_2);
    var_13 = ((/* implicit */long long int) (~(var_2)));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~((-(var_6)))))) < (var_4)));
        arr_6 [18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) & (((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_4))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : ((+(((((/* implicit */unsigned long long int) var_7)) ^ (var_8)))))));
        arr_7 [i_1] = (-(((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
    }
}
