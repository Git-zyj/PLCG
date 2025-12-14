/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47421
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        arr_2 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */signed char) ((arr_1 [i_0 + 2]) - (arr_1 [i_0 - 2])));
        var_16 = ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_5 [(signed char)7] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) (signed char)-95))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))));
            arr_10 [i_1] [(unsigned char)15] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            var_18 = ((/* implicit */long long int) (-(var_1)));
            var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((4370181534114698506ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1]))))))));
            arr_15 [i_3] [15] = ((/* implicit */unsigned char) arr_11 [i_3]);
        }
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (arr_6 [i_4] [i_4])))));
        arr_21 [i_4] = ((/* implicit */int) var_5);
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)15)) >= (1030567397))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -657409091)) ? (((/* implicit */int) (unsigned char)236)) : ((-2147483647 - 1))))) : (18446744073709551615ULL)))))))));
    var_21 ^= ((/* implicit */_Bool) var_4);
}
