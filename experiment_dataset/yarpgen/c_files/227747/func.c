/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227747
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
            arr_7 [i_0] = ((/* implicit */_Bool) var_9);
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            arr_11 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) var_18);
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)0)))))));
            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) (short)-1))));
        }
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_14))));
        }
    }
}
