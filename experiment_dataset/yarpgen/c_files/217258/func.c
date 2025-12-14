/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217258
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (unsigned char)249);
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(arr_1 [i_0]))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1 + 4] [i_2 - 2] [i_0] [i_0])) + (((/* implicit */int) arr_6 [i_1 - 2] [i_2 + 1] [i_2] [(unsigned short)3]))));
                var_14 ^= (unsigned char)224;
            }
            arr_9 [i_1] [i_1] [i_0] |= ((/* implicit */int) 2322906069915633307ULL);
            var_15 -= ((/* implicit */long long int) arr_5 [i_1]);
        }
        for (signed char i_3 = 2; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) arr_11 [i_3 + 3] [i_3 - 2])) : (((/* implicit */int) arr_7 [i_0] [i_3 + 2]))));
            arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_11 [i_0] [i_0]);
        }
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_16 = (i_4 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_4] [i_4])) >> (((((/* implicit */int) arr_7 [i_4] [i_4])) - (61)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_4] [i_4])) >> (((((((/* implicit */int) arr_7 [i_4] [i_4])) - (61))) - (72))))));
            arr_16 [i_0] [i_4] = ((/* implicit */unsigned long long int) var_11);
        }
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2147483647)))) + (((long long int) var_12)))) : (((/* implicit */long long int) var_6))));
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((max((((/* implicit */long long int) 2147483647)), (var_4))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (2147483625LL)))));
}
