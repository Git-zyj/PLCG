/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51188
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0 - 1] = ((/* implicit */long long int) (unsigned char)237);
                    var_16 = ((/* implicit */int) max((((short) min((24LL), (24LL)))), (((short) ((short) arr_2 [i_0] [i_1] [i_2])))));
                    var_17 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (8388480U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0]))) : (4026712393497794009LL))) << (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) - (1215)))));
                    var_18 -= ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) (short)-9336);
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) arr_10 [i_3 - 1] [i_1 - 1] [i_0 + 1]);
                                arr_13 [i_0] [i_1 - 1] [i_4] [i_3] [i_1] [i_4] [i_4] = (-(min((((/* implicit */long long int) arr_4 [i_4] [i_0 - 2] [i_1 + 1])), (arr_0 [i_0] [i_0 - 1]))));
                                arr_14 [i_1] [i_3 - 1] [i_4 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((arr_8 [i_2] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)27556)))))) > (arr_0 [i_1 - 1] [i_3 - 1]))) ? (((/* implicit */int) var_11)) : ((~(arr_4 [i_0] [i_2] [i_3 - 1])))));
                                var_20 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_7 [i_4] [i_1] [i_1] [i_0 - 1])) >> (((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_1 + 1] [i_2] [i_3 + 1] [i_3] [i_4])) ? (((/* implicit */long long int) arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_1 + 1] [i_0 + 1])) : (-1989167135332943254LL))) - (2870305078LL))))), (((/* implicit */int) ((short) arr_8 [i_1 - 1] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_5 = 2; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_21 *= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_5 + 2] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)9336))) : (arr_11 [22LL] [i_5 - 1])))));
        var_22 -= ((/* implicit */short) ((arr_11 [(short)22] [i_5 + 2]) + (((/* implicit */long long int) -1926921361))));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6 - 2] = ((/* implicit */short) arr_11 [(short)8] [i_6 - 2]);
        var_23 -= ((/* implicit */short) ((((/* implicit */int) (short)9349)) << (((((/* implicit */int) arr_15 [i_6 + 2])) - (28071)))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_6] [i_6 + 2])) ? (7968560008401263105LL) : (((/* implicit */long long int) ((4286578805U) << (((8388504U) - (8388485U))))))));
    }
    /* vectorizable */
    for (long long int i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((arr_2 [i_7] [i_7 + 2] [i_7 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) (short)9332)))));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_26 &= ((/* implicit */signed char) (!(((((/* implicit */_Bool) 24LL)) || (((/* implicit */_Bool) 8388483U))))));
            var_27 = ((/* implicit */short) 4286578812U);
            arr_29 [i_7 - 2] [i_8] [i_7] = ((/* implicit */long long int) (signed char)-2);
            var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-8933))));
        }
        var_29 = ((/* implicit */signed char) (short)-32765);
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 17; i_9 += 4) 
        {
            for (long long int i_10 = 1; i_10 < 17; i_10 += 4) 
            {
                {
                    var_30 -= ((/* implicit */_Bool) ((arr_9 [i_7 - 1] [i_9] [i_10 - 1] [i_9 + 3] [i_9] [i_7 + 1] [i_10 + 3]) >> (((arr_33 [i_10 - 1] [i_7 + 1] [i_10 + 3] [i_9]) - (6552107029335663987LL)))));
                    var_31 = (-(((/* implicit */int) (short)(-32767 - 1))));
                }
            } 
        } 
        arr_36 [i_7] = ((int) arr_15 [i_7 - 2]);
    }
}
