/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40416
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
    var_16 = ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (arr_3 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_1])), (arr_4 [(unsigned char)16] [i_0] [i_0]))))))))));
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1]) : (arr_3 [i_0])))) * (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10943)))));
                arr_6 [i_0 + 1] [i_0 + 1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)4192)) ? (-116704041) : (((/* implicit */int) (short)10943)))) - (((/* implicit */int) (short)14784)))))));
            }
        } 
    } 
}
