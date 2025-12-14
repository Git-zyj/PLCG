/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45210
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) arr_2 [4U] [(unsigned short)3]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned short)0] [i_1 - 1] [i_2 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (arr_3 [i_1 - 1] [i_2 + 2]) : (((/* implicit */int) arr_6 [i_1 - 1]))));
                    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_1] [i_1])))) ? (((arr_4 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    }
}
