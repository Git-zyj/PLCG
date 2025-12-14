/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23906
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (arr_1 [i_0])));
                arr_5 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                arr_6 [i_0] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (arr_1 [i_0])))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_5))))))) >> (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */int) (~(var_12)));
}
