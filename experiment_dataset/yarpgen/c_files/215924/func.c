/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215924
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (528034634626244906LL) : (var_6)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_0 + 1]) * (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (signed char)120)))) : (((/* implicit */int) arr_0 [i_1]))));
            var_12 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)104))))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0] [(short)5]) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) : ((((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20531)))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_6))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_13 = arr_9 [i_2] [i_2] [i_2] [i_2];
                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1]))));
            }
        }
        arr_12 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)36449))))));
        arr_13 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0 + 1]);
        arr_14 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0 - 3]))));
    }
    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        arr_17 [i_3 - 1] = var_1;
        arr_18 [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_3]);
    }
}
