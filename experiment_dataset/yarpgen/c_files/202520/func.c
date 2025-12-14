/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202520
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [(short)0] = ((/* implicit */short) ((int) ((int) arr_4 [i_2 - 2] [i_2 - 4] [i_2 + 1])));
                    var_16 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]);
                    arr_10 [i_2] [i_1] [i_0] = min((((max((arr_3 [i_0]), (arr_8 [13]))) | (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46))))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_3 [7])) ? (arr_8 [i_2]) : (arr_3 [i_1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_3);
    var_18 = ((/* implicit */int) var_1);
}
