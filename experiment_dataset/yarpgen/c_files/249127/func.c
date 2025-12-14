/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249127
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_18 += ((/* implicit */unsigned char) arr_1 [i_0]);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned int) arr_3 [i_1 + 1] [i_1] [i_1])))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */long long int) 1030010920U)) : (arr_5 [i_1] [i_1]))) : (((/* implicit */long long int) 1025252806))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_20 -= ((/* implicit */unsigned short) var_13);
            arr_9 [i_0] [i_0] = ((/* implicit */long long int) var_14);
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) << (((((((/* implicit */int) (short)-6596)) + (6625))) - (9)))));
        }
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_14) : (min((var_17), (((1030010930U) ^ (3264956354U)))))));
    var_23 ^= ((/* implicit */_Bool) var_15);
}
