/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202504
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
    var_10 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((arr_6 [i_1 + 3] [i_1 - 4] [i_1 + 1] [i_1 - 3]) + (arr_6 [i_1 - 1] [i_1 - 4] [i_1 - 3] [i_1 - 4])))));
                    arr_8 [i_0] [i_1] [i_1 - 3] [i_2] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                    var_12 = ((/* implicit */unsigned char) var_0);
                    var_13 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0])))))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])), (arr_5 [i_0] [i_1] [i_2]))))) << (((arr_5 [i_0] [14LL] [15ULL]) + (1063639829)))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */unsigned short) ((unsigned long long int) var_3));
}
