/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195461
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [7ULL] [7ULL] [(unsigned short)17] = ((/* implicit */signed char) ((arr_5 [i_0] [i_1] [i_2]) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [(short)16])) + (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [(short)12])))))));
                    arr_10 [4LL] = ((/* implicit */short) arr_4 [(signed char)2] [5LL] [i_2]);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) min((max((var_4), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_2))));
}
