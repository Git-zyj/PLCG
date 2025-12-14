/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39732
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
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [0LL] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_1] |= arr_4 [(short)8] [i_0 + 1] [i_0 + 1];
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_9 [i_2] [5LL] [(short)0] = ((/* implicit */long long int) var_4);
                arr_10 [i_2] [i_1] [i_0] = arr_4 [i_0] [(short)1] [i_0 + 1];
                arr_11 [i_0 - 3] [i_1] [i_2] [i_2] = ((/* implicit */short) var_6);
                arr_12 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
            }
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) var_11);
                arr_17 [i_0] = ((/* implicit */short) arr_15 [i_3] [i_3]);
            }
            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
            {
                arr_20 [(signed char)1] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_0 - 2] [i_1]);
                arr_21 [i_0 - 1] [(unsigned short)6] [(unsigned short)6] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [(short)6] [i_1] [i_0]))));
            }
        }
        /* LoopSeq 3 */
        for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            arr_24 [i_5 - 2] = ((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5 - 1] [i_0]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_27 [i_6] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0 - 3] [i_5 - 1]))));
                arr_28 [6LL] [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_5 + 3] [i_5 - 1] [i_0 - 1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    arr_31 [i_7 - 1] [i_6] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    arr_32 [i_0 - 1] [i_7] [i_6] [i_0 - 1] = ((/* implicit */unsigned short) arr_30 [i_6] [i_6] [i_7] [i_6] [(unsigned short)0]);
                    arr_33 [i_7] [i_5] [i_5] [i_0 - 2] = ((/* implicit */signed char) var_7);
                    arr_34 [i_0] [i_0 - 2] [i_7] = ((/* implicit */signed char) var_8);
                }
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    arr_39 [i_0] = ((/* implicit */_Bool) var_0);
                    arr_40 [(short)3] [i_6] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                }
            }
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                arr_43 [i_0 + 1] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                arr_44 [i_0] [i_0 - 2] [i_0] [i_0 - 2] = arr_22 [i_5 + 3];
                arr_45 [i_9] [i_9] [(unsigned short)9] = var_1;
            }
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                arr_48 [i_0] [i_5] [i_5 - 2] [(short)5] = ((/* implicit */unsigned short) arr_1 [i_0 - 3]);
                arr_49 [i_0] [(short)11] = arr_19 [(unsigned short)1] [i_10] [(_Bool)1];
            }
            arr_50 [i_0] [i_0] = var_8;
        }
        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            arr_53 [i_0] &= ((/* implicit */_Bool) var_7);
            arr_54 [i_11] = ((/* implicit */long long int) var_0);
        }
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            arr_57 [i_0 - 3] [i_12] = ((/* implicit */signed char) arr_22 [i_12]);
            arr_58 [i_0] [i_0 - 3] [i_0 - 2] = ((/* implicit */short) arr_51 [i_12]);
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                arr_61 [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                arr_62 [i_12] [i_13] [i_12] [i_0 - 1] = ((/* implicit */unsigned short) var_18);
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    arr_67 [i_13] = ((/* implicit */_Bool) arr_65 [(_Bool)1] [(_Bool)1]);
                    arr_68 [i_0 + 1] [i_12] [i_13] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_17))));
                    arr_69 [i_13] [i_14] [i_13] [(_Bool)1] [i_12] [i_0] = ((/* implicit */unsigned long long int) arr_35 [i_0] [i_13] [i_13] [i_13] [i_13]);
                }
            }
            arr_70 [i_12] [i_0] = (+((-(arr_37 [(signed char)1]))));
            arr_71 [i_0 + 1] [i_12] = var_10;
        }
    }
    var_19 = ((/* implicit */signed char) var_11);
}
