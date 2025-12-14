/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233050
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (18445618173802708992ULL) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_7)))))))));
    var_11 *= ((/* implicit */_Bool) (~((~((+(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
                arr_5 [i_0] [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_3 [i_1 + 2] [i_1 - 1])))));
            }
        } 
    } 
}
