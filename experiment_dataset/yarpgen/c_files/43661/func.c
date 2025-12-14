/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43661
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_2 + 2] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
                    arr_7 [i_2] [i_1] [(unsigned char)0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) arr_4 [i_0] [(short)15]))))) % (((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1]))))));
                    var_16 = ((/* implicit */long long int) var_6);
                    var_17 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) >= (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_1]))))))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */long long int) ((_Bool) var_8));
    var_19 = var_2;
    var_20 = ((/* implicit */unsigned char) (!((_Bool)0)));
}
