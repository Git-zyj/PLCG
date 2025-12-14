/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202651
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
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1 + 2] [i_0]))) : (arr_8 [8U] [2LL] [i_2] [(short)7])))));
                    var_10 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (1769671210U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)2] [i_1] [i_1 + 2]))))), (((/* implicit */unsigned int) max((arr_3 [i_0] [(_Bool)1] [i_1 + 2]), (arr_3 [i_0] [i_1 + 2] [i_1 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(arr_11 [(short)13] [(_Bool)1])))) | ((~((+(18446744073709551615ULL))))))))));
                arr_14 [i_3] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_11 [i_4] [i_3])), (((long long int) arr_12 [i_3] [i_3] [i_4]))));
                arr_15 [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_3])) ? (arr_10 [i_3] [i_4]) : (((/* implicit */long long int) arr_11 [i_3] [(unsigned short)11]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (((((/* implicit */_Bool) (signed char)-58)) ? (arr_10 [(signed char)14] [3ULL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_2);
}
