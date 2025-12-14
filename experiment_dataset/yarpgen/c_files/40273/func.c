/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40273
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)0))))))));
                arr_9 [i_1] [i_1 - 2] = ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8260104759089820344LL)))))) : (arr_7 [i_0] [i_1] [i_1]));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (+(var_0)));
}
