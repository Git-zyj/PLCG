/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234221
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
    var_17 |= ((/* implicit */unsigned char) var_0);
    var_18 += var_8;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_10 [(unsigned char)11] [i_0] [2LL] [i_0] = var_6;
                    arr_11 [i_0] [18] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) ((((long long int) (unsigned char)1)) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
                }
            } 
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) var_7)));
}
