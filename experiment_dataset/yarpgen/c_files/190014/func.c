/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190014
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
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) var_5);
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((int) ((int) arr_1 [i_0])));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_1]))) : (var_5))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        arr_12 [i_3] &= ((/* implicit */_Bool) ((var_2) ? (min((((/* implicit */long long int) max(((unsigned char)95), (var_9)))), (8388607LL))) : (((((/* implicit */long long int) 4294967295U)) ^ (((((/* implicit */_Bool) (unsigned char)160)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [16LL])))))))));
        var_12 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_10 [i_3 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_10 [i_3 + 1])))) ? (((/* implicit */int) var_9)) : ((~(697534614))))))));
    }
    var_13 = ((/* implicit */int) min((var_4), (var_7)));
}
