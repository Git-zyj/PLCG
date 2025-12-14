/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52329
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 1192168651U);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_10 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (signed char)89))));
        }
        var_12 = ((/* implicit */short) (signed char)67);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) 3102798646U))));
                            var_14 = ((/* implicit */signed char) 3102798645U);
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_24 [i_7] [i_3] [(short)6] [i_7] [(short)6] &= ((/* implicit */unsigned int) 5448218108438338240LL);
                            arr_25 [i_2] [i_2] [13ULL] [i_4] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_15 |= ((/* implicit */long long int) (short)16445);
                        }
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            arr_30 [13LL] [13LL] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 2U);
                            arr_31 [i_2] [i_4] [(unsigned short)9] [i_5] [14U] = ((/* implicit */long long int) 3102798649U);
                        }
                        var_16 = ((/* implicit */int) (_Bool)1);
                        arr_32 [i_2] [i_3] [i_3] [i_5] [i_5] |= ((/* implicit */signed char) (unsigned char)90);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) (short)-27969);
    }
    /* LoopSeq 2 */
    for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (signed char)23);
        var_19 ^= ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 2) 
    {
        arr_38 [i_10 + 1] = ((/* implicit */signed char) (short)8129);
        var_20 = ((/* implicit */unsigned short) 483370031481384283ULL);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        var_21 = ((/* implicit */long long int) 1192168645U);
        var_22 = ((/* implicit */signed char) 0U);
        arr_42 [i_11] = ((/* implicit */_Bool) 3102798621U);
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            for (short i_13 = 2; i_13 < 14; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */signed char) (short)10841);
                                var_24 = (signed char)-102;
                                arr_54 [i_11] [i_12] [i_13] [i_14] [i_15] [i_13 - 2] = (signed char)-73;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned long long int) (unsigned short)65511);
                                arr_59 [i_16] [(signed char)13] [i_13 + 2] [i_16] [i_17] = ((/* implicit */unsigned int) 255LL);
                                arr_60 [i_16] [i_12] [i_12] [(signed char)7] = ((/* implicit */short) (_Bool)1);
                                arr_61 [i_16] [i_16] [i_16] [i_16] = (short)32767;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_18 = 1; i_18 < 20; i_18 += 3) 
    {
        arr_66 [i_18] [i_18] = ((/* implicit */signed char) 9139097740559960915ULL);
        var_26 *= ((/* implicit */unsigned int) (_Bool)0);
        /* LoopNest 3 */
        for (unsigned short i_19 = 2; i_19 < 21; i_19 += 3) 
        {
            for (unsigned short i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    {
                        arr_73 [5U] [i_21] [i_18] [i_21] [(signed char)6] = ((/* implicit */short) (signed char)0);
                        arr_74 [i_18 + 1] [i_19 - 1] [i_21] [i_18] [i_18] = ((/* implicit */unsigned short) -2507683501854580829LL);
                        arr_75 [i_18] [i_18] = ((/* implicit */_Bool) 4U);
                        arr_76 [i_18] [i_20] [i_20] [i_19] [i_19] [i_18] = ((/* implicit */unsigned int) (short)7605);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_22 = 1; i_22 < 20; i_22 += 1) 
        {
            for (short i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                for (short i_24 = 1; i_24 < 22; i_24 += 3) 
                {
                    {
                        var_27 = ((/* implicit */short) (signed char)72);
                        var_28 = ((/* implicit */long long int) 1560362722);
                        var_29 = ((/* implicit */unsigned short) 2646884153U);
                        var_30 = ((/* implicit */unsigned long long int) (unsigned char)59);
                        /* LoopSeq 2 */
                        for (unsigned short i_25 = 0; i_25 < 23; i_25 += 2) 
                        {
                            arr_88 [i_18] [i_18] [15U] [i_24] [i_25] = ((/* implicit */long long int) 1153485188U);
                            var_31 += ((/* implicit */unsigned short) (signed char)-67);
                            arr_89 [i_18] [i_18] = ((/* implicit */short) (signed char)39);
                        }
                        for (signed char i_26 = 0; i_26 < 23; i_26 += 1) 
                        {
                            arr_94 [i_24] [(unsigned short)14] [(unsigned short)14] [i_18] [i_22 + 2] = ((/* implicit */short) -396025032);
                            arr_95 [i_26] [i_18] [(short)4] [i_24] [i_26] = ((/* implicit */int) 3102798658U);
                        }
                    }
                } 
            } 
        } 
    }
}
