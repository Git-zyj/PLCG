/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241877
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
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (signed char)56)) ? (var_11) : (((/* implicit */long long int) 3266464506U)))) ^ (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_1]), (((/* implicit */unsigned short) arr_7 [i_2] [i_2] [i_2])))))) > (max((((/* implicit */long long int) (unsigned char)217)), (var_11))))))));
                    arr_9 [i_2 + 3] [i_0] = ((/* implicit */signed char) arr_3 [i_2]);
                    var_14 ^= ((/* implicit */short) (+(arr_5 [i_0] [i_2])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((max((var_5), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-4593741722701295505LL)))))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : (var_6))) - (16538488431231177112ULL)))));
    var_16 -= ((/* implicit */_Bool) 4593741722701295504LL);
    var_17 = ((/* implicit */short) ((((var_11) + (9223372036854775807LL))) >> (((/* implicit */int) var_9))));
}
