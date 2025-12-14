/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48447
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) arr_2 [(unsigned short)7]);
                arr_6 [i_1] [i_1] [(short)3] = (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (11894983702037431075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) : (((unsigned long long int) arr_5 [i_1] [i_1] [i_0])));
                var_11 = var_7;
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)54841)) & (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    var_12 |= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))))));
}
