/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245318
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) var_9);
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) ((arr_4 [i_1] [i_1 - 2]) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 2])) : (((((/* implicit */int) var_3)) % (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)32))));
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_10 [i_2] = (-(((((/* implicit */_Bool) -1006926746)) ? (((/* implicit */int) (_Bool)1)) : (2147483647))));
        arr_11 [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_2]))))) ? (((/* implicit */int) ((signed char) 1006926730))) : (((/* implicit */int) max((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2])))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_2)) ? (arr_14 [i_3] [i_3]) : (arr_14 [i_3] [i_3]))) : (((/* implicit */int) arr_13 [i_3 - 1]))));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) var_11);
    }
}
