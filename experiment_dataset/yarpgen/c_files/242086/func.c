/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242086
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_6 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (var_10) : (((/* implicit */int) var_0))))));
                var_13 &= (~(((/* implicit */int) min(((unsigned char)16), ((unsigned char)238)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -404115628)) >= (var_5)));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_10);
                }
            }
        } 
    } 
    var_14 = 1968691379;
}
