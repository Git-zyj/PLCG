/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20718
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
    var_11 = ((/* implicit */long long int) var_9);
    var_12 = var_0;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [14ULL] [i_1] [(unsigned char)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [(signed char)6] [i_1 + 3])), (arr_5 [i_1 + 3] [8ULL] [i_1 + 3])))) : (((-4151550349403632010LL) ^ (var_1)))));
                    var_13 = ((/* implicit */long long int) max((((281474976710654ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [8LL] [i_1]))))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)30)))) & (arr_0 [i_1 + 1] [(signed char)18]))))));
                }
            } 
        } 
    } 
}
