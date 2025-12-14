/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245314
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [4] [10LL])) == (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) == (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_1] [i_2]))))))));
                    var_12 = ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
        var_13 = ((/* implicit */int) ((((/* implicit */long long int) (~((~(arr_6 [(_Bool)1] [i_0] [4LL] [(signed char)11])))))) - (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [1] [i_0] [i_0]))) / (arr_4 [i_0] [3]))) / (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 2]))) ^ (arr_7 [i_0] [1ULL] [i_0])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_14 -= ((/* implicit */unsigned long long int) arr_9 [i_3]);
        arr_11 [17] [i_3] = ((/* implicit */int) (signed char)127);
        var_15 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_3]))))), (((-4636525815775161050LL) + (((/* implicit */long long int) 2147483647))))));
        arr_12 [i_3] = ((/* implicit */long long int) arr_10 [i_3]);
    }
    var_16 = ((/* implicit */long long int) ((signed char) var_0));
}
