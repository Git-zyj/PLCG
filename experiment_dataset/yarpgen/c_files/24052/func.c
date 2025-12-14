/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24052
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
    var_17 = ((/* implicit */signed char) var_7);
    var_18 = ((/* implicit */unsigned short) var_2);
    var_19 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_6)), (((unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    var_20 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] |= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_3 [i_1 + 1])), (var_9))) - (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_2])))));
                    arr_9 [i_0] [i_1 + 1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0])), (((var_6) ? (var_12) : (((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (3499490016U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)16])))))) : (((((long long int) (unsigned short)46674)) ^ (9223372036854775807LL)))));
                }
            } 
        } 
    } 
}
