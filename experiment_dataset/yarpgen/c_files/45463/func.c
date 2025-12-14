/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45463
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
    var_15 |= ((/* implicit */unsigned int) min((((long long int) 18446744073709551615ULL)), (((/* implicit */long long int) ((((unsigned int) var_10)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
    var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_9)))) : (((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)49)))))), (var_6)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) ((unsigned long long int) 1ULL))));
                    var_17 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_10 [i_1 + 2] [i_1]), (arr_10 [i_1 + 2] [i_1])))), (max((18446744073709551595ULL), (((/* implicit */unsigned long long int) arr_9 [(short)6]))))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_9 [i_0]), (arr_9 [i_0]))))))), (1ULL)));
                }
            } 
        } 
    } 
}
