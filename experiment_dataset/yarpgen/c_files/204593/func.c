/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204593
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
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)120))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned char) arr_2 [(unsigned short)3] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (min((((/* implicit */unsigned int) (short)-28347)), (1438735975U)))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_17)), ((+(((/* implicit */int) var_5))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned int) arr_9 [i_1]);
            var_21 = ((/* implicit */short) arr_5 [i_2]);
        }
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) var_17);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_22 = (+(((/* implicit */int) arr_12 [i_3])));
        arr_14 [4U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)28347))))) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_3]))));
    }
}
