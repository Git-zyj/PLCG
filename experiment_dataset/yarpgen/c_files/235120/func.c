/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235120
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2 + 2] [i_1 - 2]))))), (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 + 1])), (1005994762381347009ULL)))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((227135856699403281ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27)))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(0)));
                    arr_12 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)85))))), (min((227135856699403293ULL), (((/* implicit */unsigned long long int) (unsigned char)141))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((16472149079999177872ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)9772), (((/* implicit */unsigned short) (signed char)-33))))))));
}
