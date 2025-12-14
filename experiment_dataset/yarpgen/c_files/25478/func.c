/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25478
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
    var_17 += ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 2] [(short)3] [i_1])) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (6676550079348665847ULL)))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 21; i_3 += 3) 
    {
        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            {
                arr_13 [i_3] [16ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_3 + 3])) : (((/* implicit */int) arr_10 [i_3 + 3]))))), (min((arr_12 [i_3 + 3]), (arr_12 [i_3 + 3])))));
                var_19 = ((/* implicit */unsigned int) max((var_19), ((((_Bool)1) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)53193))))) : (((((/* implicit */_Bool) 11700098758360517992ULL)) ? (4118391751U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53193)))))))));
            }
        } 
    } 
}
