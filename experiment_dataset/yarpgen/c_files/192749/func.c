/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192749
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
    var_15 = var_9;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
                    var_17 *= ((/* implicit */unsigned short) arr_2 [i_1] [i_1] [i_0]);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(arr_4 [i_0] [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
        {
            arr_11 [i_0] = (~(((/* implicit */int) arr_0 [(short)1] [i_0])));
            var_19 = ((/* implicit */_Bool) arr_9 [i_0] [i_3 - 1] [i_0]);
        }
        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
        {
            var_20 ^= arr_5 [i_0] [i_4 - 1] [i_4];
            arr_15 [i_4] [i_4] = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4 - 2]);
            arr_16 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            arr_17 [i_4] = (+(((/* implicit */int) arr_0 [i_4] [i_4])));
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_4] [i_0]);
        }
        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
        {
            var_21 = arr_9 [i_5 - 2] [i_5 + 1] [i_5 - 2];
            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-71))));
            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_5 - 1] [i_5] [(unsigned short)0]))));
        }
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [(signed char)4] [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_28 [i_0] [i_7] [12ULL] [i_6] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_7]);
                arr_29 [i_0] [i_6] [i_7] [(unsigned char)7] = ((/* implicit */short) (+(((/* implicit */int) arr_27 [i_0] [i_6 + 1] [i_6 - 2]))));
                arr_30 [i_0] [i_0] [i_7] [i_0] |= (!(((/* implicit */_Bool) arr_27 [i_6] [i_6 - 2] [i_6 + 1])));
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 13; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) arr_37 [6] [i_8] [6] [6] [i_0] [6]);
                            var_26 = ((/* implicit */unsigned long long int) arr_27 [i_6 - 2] [i_6 + 1] [i_6 - 2]);
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) 850715))));
            }
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (+((-(((/* implicit */int) arr_7 [i_10] [i_6] [i_0])))))))));
                arr_42 [i_10] = arr_23 [i_0] [i_0] [i_0];
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                arr_46 [i_0] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) 2631439460648443410ULL))));
                var_29 += ((/* implicit */signed char) arr_34 [i_6 + 1] [i_6] [i_6] [i_6 + 1]);
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 2; i_14 < 12; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) arr_38 [i_14 - 2] [i_15] [i_14 - 1] [i_14]);
                                var_31 = ((/* implicit */int) arr_13 [i_0] [i_12] [i_15]);
                                arr_57 [i_12] [i_14] [i_14] [i_14] |= arr_26 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 1];
                                var_32 *= ((/* implicit */unsigned char) (-(660209215)));
                            }
                        } 
                    } 
                    var_33 = (~(arr_49 [i_13] [i_12] [i_0]));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]);
    }
}
