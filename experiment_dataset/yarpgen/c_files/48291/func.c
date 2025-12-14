/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48291
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
    var_16 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] = (-(min((0LL), (9223372036854775779LL))));
                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -929336841750475397LL)) ? (7928463451401207815LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))))))))));
                arr_5 [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_2 [5U] [5U] [5U]))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)101)) ? (((((/* implicit */_Bool) (+(9223372036854775779LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) var_11))));
                var_18 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_1]);
            }
        } 
    } 
}
