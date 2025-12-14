/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48102
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2097151LL)) ? (((/* implicit */int) (unsigned short)7753)) : (((/* implicit */int) (unsigned short)7753))))) ? (min((((/* implicit */unsigned long long int) 3439288454U)), (((((/* implicit */unsigned long long int) 3390042452U)) + (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (short)3764)) != (((/* implicit */int) (short)29110))))), (var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [10ULL] [(short)3] = ((/* implicit */unsigned long long int) (unsigned short)19733);
                arr_5 [(unsigned short)18] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 1])) ^ (((/* implicit */int) arr_3 [i_1]))))) <= (((((/* implicit */_Bool) arr_3 [15ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))));
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned int) var_6);
    var_13 = ((/* implicit */unsigned int) var_2);
}
