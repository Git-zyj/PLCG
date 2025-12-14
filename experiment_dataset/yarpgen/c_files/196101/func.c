/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196101
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
    var_10 = ((/* implicit */short) ((int) ((signed char) ((((/* implicit */int) var_5)) >> (((442432797U) - (442432783U)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((int) ((_Bool) arr_0 [i_0] [i_0]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned short) arr_1 [i_1]);
            var_13 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [(unsigned char)12] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [12LL]))))));
            arr_4 [i_0] [(unsigned char)18] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1] [(unsigned short)6] [i_0]))));
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))) / (((long long int) var_0))));
        }
        for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1))))) ^ (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36459))))))));
            var_15 = ((/* implicit */unsigned int) (unsigned char)15);
            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-103))))) < (min((var_4), (((/* implicit */unsigned long long int) var_2)))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_0] [(short)19]))) : (((/* implicit */int) min(((unsigned char)241), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_2 [(short)19] [i_2] [(short)19]))))))))));
            arr_8 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_0 [(_Bool)0] [i_2 - 1])), ((~(((/* implicit */int) ((arr_6 [i_0]) <= (arr_6 [i_2]))))))));
            arr_9 [i_0] [7] = ((/* implicit */unsigned short) arr_1 [i_0]);
        }
    }
}
