/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248188
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) var_6);
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) arr_1 [i_0]))) - (((((/* implicit */_Bool) arr_3 [(short)4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) (short)22407)) - (((/* implicit */int) var_10))));
}
