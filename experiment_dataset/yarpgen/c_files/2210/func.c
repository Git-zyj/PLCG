/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2210
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
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_10 = ((/* implicit */_Bool) ((arr_3 [i_0] [(unsigned short)1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1LL))))));
            arr_6 [i_0] [i_0 + 4] [(_Bool)1] = var_6;
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((long long int) arr_2 [i_0 + 4] [i_0 - 1])) >= (((5381898780377020386LL) % (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_10 [i_0] [i_2] [(short)2] = ((/* implicit */short) arr_3 [i_2] [i_2] [i_0 + 4]);
            var_11 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2])) + (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2])))) >> (((min((((/* implicit */long long int) arr_2 [i_0 + 3] [(unsigned short)5])), (arr_3 [i_2] [i_2] [i_2]))) - (2992LL)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_12 ^= arr_2 [i_0 - 1] [i_2];
                        var_13 = ((/* implicit */_Bool) 9223372036854775804LL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (signed char)75)) : (-1725375958)));
            arr_20 [i_5] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(signed char)11] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) arr_9 [i_0] [i_0]))));
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (-2147483647 - 1));
        }
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */short) arr_19 [i_0 - 2] [i_6]);
            var_15 *= (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_6]))))));
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
            {
                for (short i_8 = 3; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_16 -= ((/* implicit */short) arr_9 [i_8] [(signed char)2]);
                        var_17 |= arr_0 [i_0 + 1] [i_8];
                        var_18 += ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    arr_38 [i_9] [i_10] [i_9] [i_9] |= ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (short)1536))));
                    arr_39 [i_9] [i_9] [i_10] [i_10] = (~(((/* implicit */int) var_1)));
                    arr_40 [i_9] [i_9] [i_9 - 2] [i_9 + 3] = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_33 [i_9 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)33963)) : (((/* implicit */int) arr_31 [i_11]))))))));
                    arr_41 [i_9] [i_10] [(short)10] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_36 [i_9 + 3] [i_9 - 1] [i_9 + 4])) ? (((/* implicit */int) arr_31 [i_9 + 3])) : (arr_36 [i_9 + 3] [i_9 - 1] [i_9 + 4])))));
                }
            } 
        } 
    } 
}
