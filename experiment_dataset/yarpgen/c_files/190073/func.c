/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190073
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = min((max((546284550), (((/* implicit */int) (short)21972)))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_1]) : (arr_4 [i_0]))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) arr_1 [i_1])) ? (-4) : (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))), (max((max((((/* implicit */int) var_12)), (var_15))), (((/* implicit */int) var_3))))));
                var_18 = ((((-4) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65523))));
                var_19 &= ((/* implicit */unsigned char) (!(((var_8) >= (((/* implicit */long long int) (-(arr_2 [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_10);
}
