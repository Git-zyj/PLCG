/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213874
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = min((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 3])) ? (arr_3 [i_0 + 2] [i_0 - 2] [i_0 + 2]) : (arr_3 [i_0 - 2] [i_0 + 3] [i_0 - 2]))), (((arr_3 [i_0 + 1] [i_0 + 3] [i_0 + 1]) >> (((arr_3 [i_0 + 1] [i_0 + 3] [i_0 + 1]) - (7035286712581978745ULL))))));
                    arr_6 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_1 [i_2 + 1] [i_2 + 1]), (arr_1 [i_2 + 2] [i_2 + 1])))) + (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 + 3] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((var_11) - (2235990618137293291LL)))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
