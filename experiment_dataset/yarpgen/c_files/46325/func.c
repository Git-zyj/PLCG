/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46325
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_4 [i_0 - 1] [i_0]))))) ^ ((-(arr_5 [i_0] [i_0 + 1] [i_0])))));
                arr_7 [i_0] [6LL] [i_1] &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((short) (unsigned short)64980))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_0 - 2])))));
            }
        } 
    } 
    var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-1599199784373148804LL) : (var_8))))))));
    var_15 = ((/* implicit */long long int) var_11);
}
