/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240103
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) arr_4 [i_1]);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [16] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1048576LL)))))) : (1U)))));
                        var_10 = ((/* implicit */unsigned int) arr_3 [i_3] [(short)15] [i_1]);
                        var_11 |= ((/* implicit */short) (-(arr_2 [i_2 + 1])));
                        arr_12 [i_0 + 2] [i_0 + 1] [(short)12] [i_0] = ((/* implicit */unsigned char) (-(var_9)));
                        arr_13 [i_3] [i_3] [i_0] [i_1] [(unsigned short)21] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 878577057U)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) var_6)))));
                    }
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        arr_16 [i_0 + 1] [(signed char)9] [i_0 + 2] [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) 1048576LL);
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(-1048587LL))))));
                    }
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */signed char) max((max((-1048585LL), (((/* implicit */long long int) (short)-20314)))), (min((((/* implicit */long long int) (~(var_8)))), (((1048576LL) & (1048587LL)))))));
}
