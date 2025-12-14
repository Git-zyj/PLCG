/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22581
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 += ((((/* implicit */_Bool) ((max((((/* implicit */int) arr_1 [i_0] [i_1])), (arr_0 [i_0]))) ^ (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [(signed char)5])) ? (((/* implicit */int) arr_4 [(unsigned short)11] [(unsigned short)11] [i_0])) : (((/* implicit */int) arr_7 [9] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [(signed char)7] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2])))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (arr_6 [i_0] [(signed char)1]) : (arr_6 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) > (min((arr_2 [i_2]), (((/* implicit */int) arr_3 [i_1 - 1] [i_0])))))))));
                    var_15 = ((/* implicit */unsigned int) arr_3 [10LL] [i_1]);
                    arr_8 [i_0] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */long long int) min((((arr_5 [i_0] [i_1] [i_1]) ? (((/* implicit */int) arr_5 [(short)5] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_2] [7] [i_0])))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_5 [i_2] [(short)11] [(signed char)4])))) : (min((((/* implicit */int) arr_7 [i_0] [(unsigned char)5] [i_2])), (arr_2 [i_0])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_10);
}
