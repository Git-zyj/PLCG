/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194683
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
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) 1706759230)) ? (((/* implicit */int) var_4)) : (-1706759231))))) : (((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((1706759214) > (1706759219)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] = ((/* implicit */long long int) 4294967268U);
                    var_14 = ((/* implicit */unsigned char) ((arr_4 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_15 = ((/* implicit */signed char) arr_14 [i_3]);
        arr_15 [i_3] = ((/* implicit */_Bool) arr_13 [13LL]);
        var_16 = ((/* implicit */long long int) arr_12 [i_3] [5U]);
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [4LL])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3])))) != (((/* implicit */int) arr_13 [i_3]))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_18 [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 28U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4]))))) : (((/* implicit */int) ((short) arr_17 [i_4])))));
        var_18 = arr_17 [i_4];
        arr_19 [i_4] = ((/* implicit */unsigned short) arr_16 [i_4] [i_4]);
    }
    var_19 = var_10;
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(6097415087349525862LL))))));
}
