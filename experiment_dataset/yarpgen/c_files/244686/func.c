/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244686
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
    var_11 -= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [(short)10] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) arr_6 [i_2] [i_0] [i_0])) : (((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */int) arr_4 [i_0] [3LL] [i_0]))));
                    var_12 = min((((/* implicit */short) arr_4 [i_0] [i_1 + 2] [i_1 + 1])), (((short) arr_3 [i_1 + 1])));
                    var_13 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_1);
}
