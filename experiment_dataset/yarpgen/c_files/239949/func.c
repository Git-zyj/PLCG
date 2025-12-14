/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239949
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
    var_19 = var_5;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(-16777216)))), (((((/* implicit */_Bool) arr_8 [i_2] [(_Bool)1] [i_1] [i_0])) ? (arr_8 [i_1] [i_1] [(_Bool)1] [i_2]) : (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2121343464)) ? (arr_8 [i_0] [i_0] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (var_2) : ((~(var_10)))))) | (((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)0] [i_0])) ? ((~(1383558085U))) : (arr_1 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_18);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 2911409225U)) ? (((/* implicit */unsigned int) 2147483647)) : (((2911409191U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-30570)))))));
}
