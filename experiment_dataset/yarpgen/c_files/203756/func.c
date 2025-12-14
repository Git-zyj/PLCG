/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203756
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((990399980) >> (((((long long int) var_2)) - (4529LL)))))) ? (((/* implicit */unsigned long long int) var_7)) : (var_5)));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (268435455)))))) : (((((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) | (((((/* implicit */_Bool) 990399980)) ? (1108307720798208ULL) : (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned int) -990399981))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [(unsigned char)15])) == (var_3))))) : (arr_4 [16ULL] [i_0] [i_0] [i_0]))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) - (arr_4 [i_0] [i_1] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -990400012)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))))));
                    arr_6 [i_0] [7] = ((/* implicit */unsigned long long int) 268435455);
                }
            } 
        } 
    } 
}
