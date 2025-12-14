/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54482
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_5);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_1 - 2] [i_0])) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_12))))))) & (((((/* implicit */_Bool) arr_8 [9] [i_1 + 3] [i_0])) ? ((~(((/* implicit */int) arr_9 [i_0] [10U] [10U] [i_2])))) : (max((var_1), (((/* implicit */int) var_8))))))));
                    var_20 = max((((/* implicit */unsigned char) var_19)), (min((arr_2 [i_0] [i_1 + 4]), (((/* implicit */unsigned char) var_2)))));
                }
            } 
        } 
        var_21 += (+(((arr_8 [i_0 - 1] [i_0] [0ULL]) ^ (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))));
    }
    var_22 = ((/* implicit */unsigned char) var_0);
}
