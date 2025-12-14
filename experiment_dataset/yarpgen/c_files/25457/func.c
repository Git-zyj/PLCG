/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25457
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) var_0))));
                                var_17 = ((/* implicit */short) ((((((/* implicit */int) ((signed char) var_14))) >= (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_3])) << (((var_9) + (2660499052827798001LL))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_0] [(unsigned short)10])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_3 [(unsigned char)1]))))) % (((unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) var_15))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))));
                                var_18 &= ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_4)))) + (2147483647))) >> (((max((arr_4 [i_2] [i_1] [i_0]), (((/* implicit */long long int) ((signed char) arr_8 [i_0]))))) - (1481056340056114805LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [2LL] [i_6] = ((/* implicit */signed char) var_1);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_15))));
                                arr_20 [i_0] [i_0] [i_0] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((arr_16 [i_1] [i_1] [i_5] [i_6]) / (arr_16 [i_0] [i_1] [i_1] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_5]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_0 [i_0] [(short)1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_2]))))) * (((/* implicit */unsigned int) arr_24 [i_7] [i_7] [i_7] [i_7] [2ULL]))))) ? (((/* implicit */int) arr_1 [i_8] [i_2])) : ((-(((/* implicit */int) arr_9 [i_8] [(unsigned char)6] [i_1] [i_0]))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (~(arr_11 [i_8] [i_7] [i_1] [i_0]))))) ? (((18446744073709551615ULL) | (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) >= (var_8))))) : (min((((/* implicit */unsigned int) var_1)), (arr_11 [i_0] [i_1] [i_2] [i_7]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_30 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(arr_16 [i_0] [i_1] [i_2] [i_9])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_0]))))) : (var_9))) > (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
                                var_22 += ((/* implicit */unsigned int) max((arr_16 [i_0] [i_1] [i_2] [i_9]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)114))))))))));
                                var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (arr_25 [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0])))))))) ? (((long long int) (!((_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_22 [i_0] [i_1] [i_2]), (((/* implicit */long long int) arr_0 [i_0] [i_9])))))))))));
                                var_24 = ((/* implicit */_Bool) ((arr_22 [i_0] [i_0] [i_0]) % (((/* implicit */long long int) (+(1474603067U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            {
                                arr_36 [i_0] [i_11] = ((/* implicit */unsigned long long int) arr_11 [i_11] [i_1] [i_2] [i_12]);
                                var_25 &= ((/* implicit */long long int) ((int) ((long long int) ((var_16) != (((/* implicit */int) arr_26 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 11; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((max((arr_42 [i_15 + 2] [i_15 - 1] [i_15 + 3]), (arr_42 [i_15 + 1] [i_15 + 2] [i_15 + 1]))), (((/* implicit */unsigned int) (~(var_15))))));
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_41 [i_13] [i_13] [i_15])))))))));
                            arr_45 [i_13] [i_15] [i_15] [i_16] [i_15 + 2] [i_15] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((arr_39 [i_13] [i_13]), (((/* implicit */unsigned short) arr_44 [i_14]))))) ? (((unsigned long long int) arr_43 [i_16] [i_15] [i_14] [i_13])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */int) arr_38 [(signed char)12] [i_14]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) min((((short) ((((/* implicit */_Bool) arr_41 [i_13] [i_14] [7LL])) || (((/* implicit */_Bool) var_1))))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_13])))))));
                            arr_51 [i_17] [i_17] [i_17] [5ULL] = ((/* implicit */unsigned long long int) ((max((((arr_44 [i_17]) ? (((/* implicit */int) arr_49 [i_17] [i_17] [(short)1] [8ULL])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_39 [i_14] [i_13])) : (((/* implicit */int) arr_43 [i_13] [i_14] [(signed char)12] [i_17])))))) == ((+(((/* implicit */int) ((var_5) >= (((/* implicit */int) arr_46 [i_14] [i_18])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 2) 
    {
        for (short i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    for (short i_22 = 1; i_22 < 19; i_22 += 2) 
                    {
                        for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) ((0) << (0ULL)));
                                var_30 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) (~(var_2))))) : (((/* implicit */int) ((((/* implicit */int) arr_60 [i_19] [i_19 + 2] [i_21] [(short)9] [i_23 - 1])) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_52 [i_19 + 2])) : (((/* implicit */int) arr_61 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23]))))))));
                                arr_63 [i_19 + 2] [i_20] [i_23] [i_21] [i_22] [12U] = ((/* implicit */short) arr_54 [i_21]);
                                arr_64 [i_23] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) arr_57 [i_23] [i_22] [i_20])))))), ((((!(((/* implicit */_Bool) arr_59 [i_20] [i_21] [i_21] [i_23 + 1])))) ? (((/* implicit */long long int) arr_56 [i_20] [i_22 - 1] [i_23])) : (var_13)))));
                                var_31 ^= ((/* implicit */unsigned char) arr_59 [i_20] [i_20] [i_21] [i_20]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_24 = 3; i_24 < 19; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        for (int i_26 = 0; i_26 < 20; i_26 += 2) 
                        {
                            {
                                arr_75 [i_20] [i_20] [(signed char)10] [i_20] [i_26] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) min((arr_61 [i_26] [i_24 - 3] [i_20] [i_19 - 1]), (((/* implicit */short) var_11))))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_61 [i_25] [8ULL] [i_20] [i_19 + 2])) : (((/* implicit */int) arr_57 [i_26] [i_20] [i_19 + 2])))))));
                                var_32 = ((/* implicit */signed char) (-(var_12)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_27 = 4; i_27 < 18; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 4) 
                    {
                        for (unsigned long long int i_29 = 1; i_29 < 17; i_29 += 2) 
                        {
                            {
                                arr_86 [i_19] [i_29] [i_27] [(signed char)10] [i_27] [i_20] [i_19] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0))))))));
                                var_33 = ((/* implicit */unsigned int) ((short) (((_Bool)1) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                                var_34 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) ((var_16) <= (((/* implicit */int) arr_53 [i_29])))))), ((-(((/* implicit */int) arr_68 [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_27 + 1] [i_29 - 1]))))));
                                var_35 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2251799813685247LL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 20; i_30 += 4) 
                {
                    for (short i_31 = 0; i_31 < 20; i_31 += 4) 
                    {
                        {
                            arr_91 [i_19 + 2] [i_20] [i_19 + 2] [i_19 + 2] = ((/* implicit */unsigned char) max((max((min((((/* implicit */long long int) arr_52 [i_31])), (arr_67 [i_19 + 1] [i_19 - 1]))), (((/* implicit */long long int) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_11)) - (48)))))))), ((~(((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_13)))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_68 [i_31] [i_30] [(unsigned char)8] [i_20] [i_19 + 1]))) > (var_9)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_58 [i_19])))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (var_15))))))) : (max((arr_82 [i_19] [i_20] [i_30] [i_31] [15U] [i_31]), (((/* implicit */long long int) arr_80 [i_20]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
