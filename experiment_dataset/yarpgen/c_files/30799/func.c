/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30799
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
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)164)) ? (6462568444113570278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))));
                            arr_10 [i_0 - 1] [i_1 - 1] [i_0] [i_3 - 2] [i_3 + 3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2 + 3] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_3 - 3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 1] [i_2 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 3] [i_2 - 3] [i_1 - 1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_5)), (arr_3 [i_2 - 3] [i_0]))))));
                            arr_11 [i_0 - 3] [i_2] [i_0 - 1] [i_0 - 2] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2] [i_3 + 4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_0 - 2] [i_1 + 1] [i_2 - 3] [i_3 + 2]) ? (var_14) : (var_1)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) : (min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2])) ? (arr_4 [i_2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 3] [i_1 + 1] [i_2 - 1]))))), (min((arr_0 [i_0 - 1]), (arr_4 [i_2] [i_2])))))));
                        }
                    } 
                } 
                arr_12 [(unsigned char)2] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 + 1]))))) : (arr_4 [6ULL] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_1 + 1]))) : (arr_4 [(short)10] [(short)10])))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_0 - 2])) : (var_4))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
