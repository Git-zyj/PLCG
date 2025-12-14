/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52897
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
    var_20 = ((/* implicit */short) min((((int) (~(var_17)))), (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [4] [i_1] [i_1] &= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1] [(unsigned char)4]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) arr_3 [2] [(signed char)0]))))) ? (((int) arr_6 [i_0] [i_1] [i_0] [i_3])) : (((((/* implicit */int) arr_3 [i_3] [9LL])) ^ (((/* implicit */int) var_3)))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(short)8] [i_1])))))));
                    }
                }
            } 
        } 
    } 
}
