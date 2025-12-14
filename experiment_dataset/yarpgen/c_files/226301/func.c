/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226301
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned char) arr_9 [i_1])), (max((arr_7 [i_2] [i_0]), (arr_3 [i_0]))))));
                    var_20 = min(((-(((((/* implicit */int) arr_9 [i_2])) * (((/* implicit */int) arr_9 [i_2])))))), (((((/* implicit */int) ((arr_1 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1])))))) | (min((arr_2 [i_0]), (((/* implicit */int) (signed char)112)))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
}
