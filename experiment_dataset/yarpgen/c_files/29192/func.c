/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29192
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_7 [i_2] [i_1] [i_1] [i_0])), (arr_1 [i_1]))) & (((/* implicit */long long int) arr_0 [i_0] [i_1]))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6631873530936906342LL)) ? (arr_4 [i_1] [4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 988375773U)) ? (arr_6 [i_1] [i_1] [i_2]) : (988375783U))))))) ? ((~((((_Bool)0) ? (arr_8 [i_0] [i_0] [i_2]) : (3306591522U))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3306591534U)) ? (((/* implicit */int) (short)-6638)) : (((/* implicit */int) (unsigned short)26077))))) : (((((/* implicit */_Bool) (unsigned char)87)) ? (988375773U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_4);
}
