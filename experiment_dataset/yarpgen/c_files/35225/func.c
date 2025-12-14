/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35225
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
    var_15 = ((/* implicit */unsigned long long int) ((long long int) (+(var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_16 &= ((/* implicit */long long int) (unsigned char)121);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_17 |= ((/* implicit */unsigned long long int) ((long long int) (_Bool)0));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            var_19 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)135))));
                        }
                        for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            var_20 = -49949507;
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(arr_11 [i_0] [i_0] [i_5 - 1] [i_3] [i_3 + 1]))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) 6070591342466146705LL);
                            var_23 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)16294))));
                            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [10ULL]))));
                            arr_20 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 2]))));
                        }
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                        {
                            var_25 ^= 63LL;
                            arr_24 [i_0] [i_2] [i_2] [i_3] [i_7] &= ((/* implicit */int) ((_Bool) arr_14 [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3 + 1]));
                        }
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] = ((/* implicit */int) arr_26 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_2] [i_3 + 3]);
                            var_26 ^= ((/* implicit */long long int) ((unsigned long long int) (unsigned char)227));
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8702311341002046915LL))));
                            var_28 = ((/* implicit */signed char) (unsigned short)9145);
                            var_29 = ((unsigned long long int) arr_18 [i_1 + 1] [i_3 + 2] [i_2] [i_3] [i_3 + 2] [i_0]);
                        }
                    }
                } 
            } 
            arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_22 [i_1 - 1] [11LL] [i_1 + 1])));
        }
        for (long long int i_9 = 2; i_9 < 12; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                var_30 = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_9 + 1] [i_10] [i_10]);
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        {
                            arr_39 [i_0] = ((/* implicit */signed char) (short)-27357);
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (~(6070591342466146696LL))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                var_32 = ((/* implicit */int) (unsigned char)255);
                arr_44 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_35 [i_0] [i_9] [i_9 + 1] [i_0] [i_0] [i_13]);
            }
            arr_45 [i_9] |= ((/* implicit */unsigned short) arr_16 [i_9 + 1]);
            var_33 = arr_14 [(_Bool)1] [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9] [i_9 + 1];
        }
        for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            arr_49 [i_14] [i_14] |= ((/* implicit */unsigned char) ((unsigned int) 18446744073709551615ULL));
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_14] [(unsigned char)0] [i_0] [i_0] [i_0])))))));
            var_35 = ((/* implicit */unsigned long long int) arr_13 [i_14] [i_0] [i_0] [i_0]);
        }
        var_36 -= ((/* implicit */_Bool) (signed char)73);
        arr_50 [i_0] [2ULL] = ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (short i_15 = 4; i_15 < 12; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */short) ((signed char) (_Bool)1));
                                var_38 = ((/* implicit */_Bool) (unsigned char)255);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_19 = 3; i_19 < 12; i_19 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */int) (-(arr_41 [i_0] [i_15] [i_19])));
                        var_40 = ((/* implicit */unsigned long long int) ((unsigned char) arr_36 [i_0] [i_0]));
                    }
                    for (long long int i_20 = 3; i_20 < 12; i_20 += 2) /* same iter space */
                    {
                        arr_69 [i_0] [i_15] [i_16] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_0] [i_20 - 2] [i_16]))));
                        /* LoopSeq 1 */
                        for (int i_21 = 1; i_21 < 13; i_21 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (+(((long long int) (_Bool)1)))))));
                            arr_72 [i_0] [i_0] [(unsigned char)0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (unsigned short)24949);
                            var_42 = ((/* implicit */unsigned short) arr_70 [i_20 - 3] [i_20] [i_20 + 1] [i_20 - 2]);
                        }
                    }
                    var_43 = ((/* implicit */unsigned char) (signed char)-88);
                    arr_73 [i_0] [6ULL] [10LL] |= arr_25 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 - 3] [i_15] [i_15];
                }
            } 
        } 
    }
    var_44 = var_6;
    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
    {
        for (unsigned int i_23 = 0; i_23 < 22; i_23 += 1) 
        {
            for (int i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                {
                    arr_80 [i_22] [i_23] = ((/* implicit */long long int) arr_79 [i_23] [i_24] [i_23] [i_23]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 2) 
                    {
                        for (unsigned int i_26 = 0; i_26 < 22; i_26 += 2) 
                        {
                            {
                                var_46 = ((long long int) (~(((/* implicit */int) (signed char)-107))));
                                arr_87 [i_22] [i_23] [i_24] [i_26] [i_26] &= ((/* implicit */short) arr_83 [i_22] [i_23] [i_22] [(unsigned char)15] [i_26]);
                                var_47 = ((/* implicit */int) 15762598695796736ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
