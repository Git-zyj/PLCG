/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198036
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
    var_11 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 19LL)) ? (var_5) : (var_3))) | (var_3))) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [(short)11] = min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)68))))), (max((35LL), (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_8 [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            arr_9 [i_0] [i_1] = ((/* implicit */signed char) 30LL);
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_13 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
            var_12 *= ((/* implicit */unsigned int) var_4);
        }
    }
    var_13 = ((/* implicit */signed char) var_9);
}
