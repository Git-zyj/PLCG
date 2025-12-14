/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246833
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
    var_16 = var_3;
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [11ULL] [i_1]))) : (var_1))), (((/* implicit */unsigned int) (unsigned short)1909))))) ? ((-(((unsigned long long int) var_10)))) : (((((/* implicit */_Bool) (unsigned short)63643)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [22ULL] [i_0] [i_1])) > (((/* implicit */int) max(((unsigned short)63622), (((/* implicit */unsigned short) (unsigned char)5))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 22; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) var_3)) ? (4539628424389459968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    arr_15 [i_2] [i_4] [(unsigned short)2] [i_2] = var_11;
                    arr_16 [i_2] [6ULL] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_14 [i_2] [i_2 - 2] [i_2])));
                }
            }
        } 
    } 
}
