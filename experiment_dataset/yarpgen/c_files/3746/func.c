/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3746
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
    var_11 ^= (+(var_1));
    var_12 = (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (+(1567255031U))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_8 [i_0] [15LL] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) -3108654446853285428LL)) < (18446744073709551615ULL)))));
                    var_13 = ((/* implicit */unsigned long long int) (!(((arr_6 [i_0] [i_0] [i_0] [i_2]) < (((/* implicit */int) arr_0 [i_2] [i_2]))))));
                }
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))))) ? ((+(((/* implicit */int) arr_3 [i_1 - 1])))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                arr_10 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((1546885512488676836ULL) != (1546885512488676836ULL))))));
                arr_11 [i_0] [i_0] [i_0] |= (+((-(arr_5 [i_1 - 1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_3);
    var_15 = ((/* implicit */int) ((1546885512488676836ULL) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
}
