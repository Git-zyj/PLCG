/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222395
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_13 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_2 - 1])) & (((/* implicit */int) arr_4 [i_2 - 1])))) >= (((/* implicit */int) (unsigned char)255))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_2] [i_3]);
                        var_14 = ((/* implicit */unsigned char) (unsigned short)511);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) arr_7 [(unsigned char)4]);
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned char)1)))))));
        var_16 &= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) | (((979181569U) & (15U))))) << (((-3163027189862820326LL) + (3163027189862820334LL)))));
        var_17 |= ((/* implicit */long long int) arr_8 [i_0] [(signed char)5]);
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) (_Bool)0);
                    arr_22 [i_4] [i_4] [i_6] [i_6] |= var_10;
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]))) / (arr_1 [i_4])));
                    var_20 = ((/* implicit */unsigned short) (unsigned char)0);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (4294967283U)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_7])) + (((/* implicit */int) arr_23 [i_7]))));
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_28 [i_7] [i_7])) + (2147483647))) >> (((3163027189862820326LL) - (3163027189862820321LL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) var_0);
                                arr_38 [i_12] [i_11] [i_10] [i_9] [i_9] [(short)4] [i_12] = ((/* implicit */signed char) arr_15 [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 3; i_14 < 8; i_14 += 2) 
                        {
                            {
                                arr_43 [i_14 - 2] [i_13] [i_10] [i_9] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_14 - 3])) & (((/* implicit */int) (signed char)-98))));
                                var_25 += ((/* implicit */short) arr_41 [i_14 + 3] [i_14 + 2] [i_14] [i_13] [i_4]);
                                var_26 += ((/* implicit */long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_1))));
                                var_27 += arr_17 [i_14 + 1];
                            }
                        } 
                    } 
                    arr_44 [i_4] [i_9] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (arr_34 [i_10] [i_10] [i_9] [i_4])))) << (((((/* implicit */int) (signed char)83)) - (63)))));
                    arr_45 [i_4] [4LL] = ((/* implicit */long long int) arr_39 [i_4]);
                }
            } 
        } 
        arr_46 [i_4] = ((arr_8 [i_4] [i_4]) < (arr_8 [i_4] [i_4]));
        arr_47 [i_4] [i_4] = ((/* implicit */unsigned char) (signed char)85);
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_28 += (unsigned char)112;
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) var_3);
                        arr_57 [i_17] [(signed char)2] [i_17] [i_18] = ((/* implicit */unsigned char) (signed char)100);
                        var_30 = ((/* implicit */_Bool) 3163027189862820326LL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 2) 
                        {
                            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_19 + 1] [i_19] [(unsigned short)9] [i_19] [i_19 + 1] [i_19] [i_19 + 1])) > (((((/* implicit */int) arr_58 [i_19 + 2] [5] [i_19 - 1] [5] [i_19] [i_19] [i_19 + 2])) + (((/* implicit */int) var_1))))));
                            var_32 = ((/* implicit */long long int) arr_51 [i_15] [i_17] [i_19 - 1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            var_33 += ((/* implicit */unsigned char) ((-3163027189862820326LL) > (((/* implicit */long long int) ((/* implicit */int) arr_58 [(unsigned char)4] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))));
                            arr_65 [i_17] [i_15] [i_16] [1ULL] [i_18] [i_20] [i_20] = ((/* implicit */short) ((arr_54 [i_17] [i_18] [i_16] [i_17]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_21 = 1; i_21 < 12; i_21 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-80)) + (2147483647))) >> (((((/* implicit */int) (signed char)80)) - (76)))));
                            arr_69 [i_21] [i_18] [i_17] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */int) arr_58 [i_16] [i_16] [i_21 + 1] [i_21] [i_21 - 1] [i_21 - 1] [i_21])) >= (((((/* implicit */int) var_11)) + (((/* implicit */int) var_4))))));
                        }
                        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
                        {
                            arr_72 [i_17] [i_18] [i_22 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) 2147483647)) + (arr_68 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22] [i_22] [i_22] [i_22]))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            arr_73 [i_22] [i_18] [i_16] [i_16] [i_15] &= var_8;
                            var_35 = 2542517750U;
                        }
                        /* vectorizable */
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
                        {
                            var_36 ^= ((/* implicit */unsigned short) var_3);
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_23] [i_23] [i_23] [i_23 + 1] [i_23 + 1] [i_18])) + (((/* implicit */int) arr_10 [5U] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_15])))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_24 = 0; i_24 < 24; i_24 += 4) 
    {
        for (unsigned char i_25 = 0; i_25 < 24; i_25 += 3) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    var_38 += ((/* implicit */unsigned short) var_3);
                    var_39 = ((/* implicit */unsigned char) arr_78 [i_26] [i_25]);
                    /* LoopNest 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        for (signed char i_28 = 0; i_28 < 24; i_28 += 2) 
                        {
                            {
                                arr_91 [(short)4] [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned int) arr_89 [i_28] [i_27] [(unsigned short)14] [i_24] [i_24]);
                                var_40 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)93)) * (((/* implicit */int) (unsigned short)65535))))) * (0LL)));
                                var_41 = ((/* implicit */unsigned int) var_0);
                                var_42 = ((/* implicit */unsigned char) arr_85 [i_28] [i_25] [i_25] [20U]);
                            }
                        } 
                    } 
                    arr_92 [16LL] [i_24] [i_25] [i_24] = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    } 
}
