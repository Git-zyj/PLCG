/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51317
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
    for (long long int i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 140737488355327LL)) ? (140737488355322LL) : (((/* implicit */long long int) 0U))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_12))));
                                arr_11 [i_0] [i_3] [i_3] [i_3] [(short)8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((2616309978U) / (var_5)))), (((long long int) max((var_6), (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) * (((arr_12 [i_0]) + (3517395741U)))))) ? (min((((/* implicit */unsigned int) (_Bool)0)), (134217712U))) : (var_2));
                                arr_17 [i_0] [12ULL] [10LL] [i_2] [i_0] [(unsigned char)21] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), ((-(var_6))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) arr_0 [i_0 - 1]))), ((~(((/* implicit */int) (unsigned char)255))))));
                                var_18 = ((/* implicit */unsigned int) var_6);
                                arr_24 [i_0] [20] [i_2] [7U] [(short)16] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned char) var_3))))), (arr_19 [i_0]))), (((/* implicit */unsigned long long int) 2551719679U))));
                                var_19 = ((/* implicit */unsigned char) ((((var_2) & (((/* implicit */unsigned int) arr_8 [i_0 - 4] [(unsigned short)10] [i_0] [i_0] [i_0 - 2])))) + (max((arr_12 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_8])))))))));
                                var_20 = ((arr_19 [i_1]) << (min((min((arr_22 [1ULL]), (((/* implicit */unsigned long long int) 5414075058241492369LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        for (short i_10 = 1; i_10 < 20; i_10 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                    {
                        {
                            arr_36 [i_9] [(_Bool)1] [i_10 + 2] [i_11] [i_9] = ((/* implicit */unsigned short) arr_1 [i_12] [(short)6]);
                            arr_37 [(signed char)8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)62796), (((/* implicit */unsigned short) (unsigned char)242))))) ? (((((/* implicit */int) (_Bool)1)) << (((var_6) + (698248285))))) : (((/* implicit */int) min(((unsigned char)83), (((/* implicit */unsigned char) arr_1 [i_10 - 1] [i_9]))))))))));
                            arr_38 [i_9] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_9] [i_10] [(unsigned char)21] [(_Bool)1] [i_10 + 3] [i_10])) ? (var_6) : (((/* implicit */int) arr_9 [i_10] [(signed char)17] [i_10] [i_10 + 1] [(signed char)17])))), (((((/* implicit */int) (unsigned char)253)) + (((/* implicit */int) (signed char)-35))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_11] [i_10]))))), (((arr_12 [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) min((-5414075058241492370LL), (((/* implicit */long long int) (unsigned short)25999))))) : (1152921487426977792ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (long long int i_14 = 1; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_45 [i_9] [i_9] [i_10] [i_10 + 2] [(_Bool)1] [i_14 + 1] = ((/* implicit */signed char) arr_12 [i_9]);
                            var_22 = ((/* implicit */unsigned char) var_3);
                            arr_46 [14U] [i_9] [(signed char)1] [19LL] = ((/* implicit */short) arr_13 [i_14] [i_14] [i_14] [i_14]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_17 = 2; i_17 < 22; i_17 += 4) 
                {
                    for (unsigned char i_18 = 1; i_18 < 22; i_18 += 4) 
                    {
                        {
                            arr_58 [i_15] [15LL] [i_17] [i_15] [i_17] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) arr_15 [i_18] [i_18 - 1] [i_18] [22U] [16] [i_15])) == (arr_33 [22U] [i_15] [i_17 - 2] [i_18]))) ? (max((((/* implicit */long long int) arr_13 [(unsigned char)23] [i_16] [i_16] [i_16])), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)245))))))))));
                            var_23 = (i_15 % 2 == 0) ? (((/* implicit */unsigned char) max((((4294967295U) << (((((/* implicit */int) arr_30 [i_17] [i_15] [i_17 - 2])) + (4859))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_57 [i_17 - 1] [(unsigned short)1] [20LL] [i_17] [(unsigned short)10])))))))) : (((/* implicit */unsigned char) max((((4294967295U) << (((((((/* implicit */int) arr_30 [i_17] [i_15] [i_17 - 2])) + (4859))) - (34025))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_57 [i_17 - 1] [(unsigned short)1] [20LL] [i_17] [(unsigned short)10]))))))));
                            arr_59 [i_15] [i_16] [i_17] [i_18 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_10 [(_Bool)1] [23U] [(unsigned short)15] [(signed char)4]))))), (max((((/* implicit */unsigned long long int) var_3)), (11366630572923451701ULL)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) arr_25 [i_17])) < (((/* implicit */int) (!(((/* implicit */_Bool) -5414075058241492380LL))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    for (long long int i_20 = 2; i_20 < 19; i_20 += 4) 
                    {
                        for (short i_21 = 2; i_21 < 21; i_21 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (((_Bool)1) ? (11366630572923451701ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) != (((/* implicit */int) (unsigned char)0))));
                                arr_66 [3LL] [i_15] [i_19] [0U] [i_15] [i_15] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((7851658209198311783LL), (((/* implicit */long long int) 1333164678U))))), (0ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 23; i_23 += 4) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 23; i_24 += 3) 
                        {
                            {
                                arr_73 [i_15] [i_16] [i_22] [i_23] [i_24] = ((/* implicit */long long int) arr_13 [7LL] [i_23] [i_15] [i_15]);
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_2))) == (((/* implicit */int) max(((unsigned char)52), (var_0))))));
                                arr_74 [i_15] [i_15] = ((/* implicit */int) min((min((((/* implicit */unsigned short) ((short) 18446744073709551615ULL))), (arr_64 [i_15] [i_15] [i_15] [i_15] [i_15]))), (((/* implicit */unsigned short) var_9))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_25 = 0; i_25 < 16; i_25 += 1) 
    {
        for (unsigned int i_26 = 0; i_26 < 16; i_26 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 16; i_27 += 3) 
                {
                    for (unsigned int i_28 = 2; i_28 < 13; i_28 += 2) 
                    {
                        {
                            arr_86 [i_25] [i_28] [8U] [i_28] |= ((/* implicit */unsigned char) var_4);
                            var_27 = (~(max((var_5), (arr_13 [i_28 + 3] [i_28] [i_28] [i_28]))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_28] [i_26] [i_27] [i_28] [(unsigned char)8] [i_25])), ((+(((/* implicit */int) arr_16 [i_28] [i_25] [2U] [i_25] [i_27] [i_28])))))))));
                            var_29 = ((/* implicit */signed char) (((~(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_13)))))) | (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) arr_30 [12ULL] [i_25] [(_Bool)1])), (var_12)))))));
                            arr_87 [i_25] [i_26] [4U] [i_26] [i_26] = ((/* implicit */unsigned short) arr_69 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 16; i_29 += 1) 
                {
                    for (unsigned char i_30 = 0; i_30 < 16; i_30 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) var_5);
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_25])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (unsigned short)31068))))) : (min((((var_2) ^ (((/* implicit */unsigned int) var_1)))), (((unsigned int) (signed char)-22)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
