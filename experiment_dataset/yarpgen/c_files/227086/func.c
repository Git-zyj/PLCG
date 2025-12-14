/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227086
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
    var_20 *= ((/* implicit */unsigned int) 0ULL);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) 4005110969U);
                    arr_8 [i_2] [i_1] [i_2] [(_Bool)1] = min((((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_2] [i_0])) : (min((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])))))), (((/* implicit */unsigned long long int) var_8)));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_6 [i_1] [20LL] [i_1] [i_1 + 1]);
                    var_22 = ((min((arr_7 [i_2] [i_1 + 1] [i_0] [i_2]), (arr_7 [(unsigned char)19] [i_1 + 1] [i_2] [i_0]))) >> (((/* implicit */int) ((arr_1 [i_1] [i_1]) == (max((((/* implicit */long long int) arr_6 [i_0] [i_1 + 1] [i_2] [i_0])), (var_7)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(max((6861073698938993357ULL), (((/* implicit */unsigned long long int) -80189586813080510LL))))));
}
