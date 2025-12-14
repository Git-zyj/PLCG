/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197377
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */int) 9223372036854775807LL);
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (short)-14349);
                        var_13 = ((/* implicit */int) 495858285U);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned char)24))));
                            arr_16 [i_0] = ((/* implicit */short) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */int) -7007426438869304949LL);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_20 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */signed char) (short)8705);
        arr_21 [i_5] = ((/* implicit */unsigned long long int) -7007426438869304949LL);
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                {
                    arr_30 [i_8] = ((/* implicit */int) 1328521694U);
                    arr_31 [i_6] [i_6] [i_6] = ((/* implicit */int) (short)-4908);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        arr_34 [i_6] [i_7] [i_7] [i_9] [i_7] &= ((/* implicit */int) (_Bool)1);
                        arr_35 [i_7] [i_8] [i_7] [i_6] = ((/* implicit */int) (_Bool)0);
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        arr_38 [i_6] = ((/* implicit */signed char) 7007426438869304953LL);
                        arr_39 [i_6] [i_7] [i_7] [(unsigned char)2] [0LL] [i_10] = ((/* implicit */int) (short)32757);
                        arr_40 [i_6] = ((/* implicit */long long int) (_Bool)1);
                        arr_41 [(unsigned short)10] [i_8] [i_8] [i_8] [3] |= ((/* implicit */int) 9223372036854775789LL);
                    }
                    for (short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        arr_45 [i_11] [(signed char)11] [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned int) (short)29789);
                        arr_46 [i_7] [4] &= ((/* implicit */int) -7007426438869304959LL);
                    }
                    arr_47 [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) (signed char)-111);
                }
                /* vectorizable */
                for (signed char i_12 = 1; i_12 < 12; i_12 += 2) 
                {
                    var_16 ^= ((/* implicit */unsigned int) (short)-29818);
                    var_17 |= ((/* implicit */int) (signed char)-97);
                }
                for (short i_13 = 3; i_13 < 12; i_13 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            {
                                arr_61 [i_13] = ((/* implicit */signed char) (unsigned char)176);
                                arr_62 [i_13] = ((/* implicit */int) 7396966457489104304LL);
                                arr_63 [i_6 - 1] [i_7] [i_13] [i_13] [10ULL] = ((/* implicit */unsigned char) -8542008889738965190LL);
                            }
                        } 
                    } 
                    arr_64 [i_13] = ((/* implicit */short) -7007426438869304959LL);
                }
                for (short i_16 = 3; i_16 < 12; i_16 += 3) /* same iter space */
                {
                    arr_68 [i_6] = ((/* implicit */short) (unsigned short)65529);
                    var_18 ^= ((/* implicit */signed char) (unsigned short)5);
                }
                arr_69 [i_6] [i_6] = ((/* implicit */_Bool) -1118173753);
                arr_70 [i_7] = ((/* implicit */signed char) (short)21199);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) -7396966457489104306LL);
}
