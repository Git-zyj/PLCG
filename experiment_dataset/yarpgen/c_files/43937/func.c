/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43937
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
    var_11 |= ((/* implicit */signed char) (_Bool)0);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -332682102)))) ? (((/* implicit */int) arr_6 [(unsigned char)8] [i_0 - 1])) : (((/* implicit */int) arr_6 [12U] [i_1 - 1]))));
            var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))) : ((-(6489791281835932661ULL)))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) var_7)))));
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((arr_5 [i_0 - 1]) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [7])))));
        }
    }
}
