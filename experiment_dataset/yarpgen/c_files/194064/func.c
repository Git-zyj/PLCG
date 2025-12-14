/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194064
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_5))));
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (min((var_3), (((/* implicit */long long int) var_8)))))))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((min((((int) var_1)), (((/* implicit */int) min((var_8), (var_5)))))) * (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) var_5);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0] [i_1])), (arr_3 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [2ULL])) - (((/* implicit */int) arr_4 [i_1] [i_1])))))));
                var_15 &= ((/* implicit */unsigned short) (-(((var_2) << (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (arr_0 [i_1]))))))));
            }
        } 
    } 
}
