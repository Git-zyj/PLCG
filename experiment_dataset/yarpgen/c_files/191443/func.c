/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191443
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
            var_15 &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
            var_16 &= ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0])))))) ? (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 3] [(signed char)10]))))) : (min((((/* implicit */unsigned long long int) var_3)), (0ULL))));
        }
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 23; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */signed char) (_Bool)1);
                        var_18 -= ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            arr_18 [i_6] = ((/* implicit */int) var_13);
            arr_19 [i_5] [i_6] &= ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (-4160041617273043616LL) : (((/* implicit */long long int) var_9)))))));
            var_19 = ((/* implicit */long long int) arr_9 [(signed char)4] [i_6]);
            arr_20 [(unsigned short)6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5 + 1] [1])) ? (var_5) : (((/* implicit */int) arr_4 [i_5 + 2] [i_6] [i_6]))));
        }
        var_20 = ((/* implicit */_Bool) (-(min((-8015487635438071895LL), (-11LL)))));
        var_21 += ((/* implicit */signed char) ((((var_1) + (2147483647))) << ((((-(((((/* implicit */int) arr_1 [i_5] [i_5])) ^ (((/* implicit */int) var_6)))))) - (111)))));
    }
    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
    {
        arr_23 [i_7 - 1] [i_7] = ((/* implicit */long long int) min((((/* implicit */int) var_4)), (arr_5 [(unsigned char)15] [i_7 - 1])));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_22 = ((/* implicit */short) (~(arr_5 [i_7 - 1] [i_7 - 1])));
            arr_26 [i_7] [i_7 + 1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) min((-11), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) var_5)) + (arr_22 [i_7] [i_7 + 1])))));
        }
        arr_27 [(short)14] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_25 [i_7 + 1]);
    }
    var_23 = ((/* implicit */_Bool) 7178414031123084466ULL);
}
