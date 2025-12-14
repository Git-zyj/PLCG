/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32083
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [6U] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (343679126))))))), (((arr_1 [i_0]) * (arr_5 [i_1 + 3])))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (short)6282);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_1 + 3])), ((~(343679126)))))), (arr_5 [i_0])));
                            arr_12 [2] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((max((arr_11 [i_2 - 3] [i_2 - 3] [i_2] [i_2]), (arr_11 [i_2 - 2] [(signed char)17] [i_2] [i_2]))), (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 - 3] [i_2] [i_2 - 1])) ? (arr_11 [i_2 - 2] [(short)17] [i_2] [i_3]) : (arr_11 [i_2 - 2] [(signed char)10] [i_2] [17])))));
                            arr_13 [(signed char)1] [i_2] [i_2] = ((/* implicit */long long int) (+(max((max((arr_9 [i_2] [i_2]), (2958703108868234104ULL))), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_2] [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-6283)) : (((/* implicit */int) (short)-6285)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)-30904))));
}
