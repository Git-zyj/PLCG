/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32642
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
    var_12 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_6)))));
    var_13 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)14))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_11))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_1] = ((/* implicit */int) (unsigned char)64);
                    var_15 = ((/* implicit */short) var_7);
                    arr_8 [i_1] [i_1] = ((/* implicit */int) arr_4 [(signed char)14] [i_1] [i_1]);
                    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) max(((short)18952), (((/* implicit */short) (unsigned char)15)))))));
                }
            } 
        } 
    } 
}
