/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23321
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
    var_14 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) 4393751543808LL);
                    var_15 = ((/* implicit */short) -2147483624);
                    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) 7)) : (var_1))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_3 [i_2 - 3] [(signed char)18])) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                    arr_9 [7ULL] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_3 [(unsigned short)3] [i_1])), (((long long int) (unsigned short)1023))));
                }
            } 
        } 
    } 
}
