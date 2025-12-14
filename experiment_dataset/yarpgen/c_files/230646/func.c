/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230646
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
    var_17 = 9223372036854775807LL;
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((((long long int) arr_7 [i_0 + 1] [i_0] [i_0] [i_0 - 1])), (((/* implicit */long long int) var_9))));
                    var_20 = ((/* implicit */long long int) var_10);
                    var_21 = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
    } 
}
