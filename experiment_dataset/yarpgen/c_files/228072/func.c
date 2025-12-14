/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228072
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((649280766767519390LL) << (((((/* implicit */int) (unsigned char)255)) - (252)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1 - 4] [i_2] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_1] [6] [i_3])) : (((/* implicit */int) arr_7 [i_3 - 3] [i_1] [i_0 + 1] [i_0 + 1]))));
                        arr_10 [(_Bool)1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0 - 1] [i_3 + 2] [i_1 - 4]) : (arr_6 [i_0 + 1] [i_3 + 2] [i_1 + 1])));
                        var_13 *= ((/* implicit */signed char) ((arr_1 [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_11)));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */long long int) var_11);
}
