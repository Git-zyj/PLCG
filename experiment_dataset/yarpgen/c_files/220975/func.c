/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220975
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_10 = min((((arr_9 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) ^ (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_4] [i_3 - 2])))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -3627262431801043088LL)) != (6625184549856235865ULL))))))));
                                var_11 = arr_2 [i_1 - 2] [i_1 - 2];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_4 [i_5])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) (unsigned char)198))))) ? (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (6878522117166328396ULL))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551615ULL)))))));
                                var_12 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (-9223372036854775782LL) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (~((~(((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) 1799826678);
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 562932773552128ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    for (unsigned short i_13 = 1; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) ((min((8318110114701845648ULL), (((/* implicit */unsigned long long int) (unsigned char)211)))) << (((((((/* implicit */_Bool) 11821559523853315757ULL)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) var_8)))) - (176)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_34 [i_7] [i_7] [i_7])))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_7] [i_7] [i_7])) : (((/* implicit */int) var_0)))))))));
                            arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) max((var_3), (max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                            arr_40 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (11821559523853315767ULL) : (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7])))))), (((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_13 + 1] [i_13 - 1])))))));
                            var_16 = ((/* implicit */unsigned long long int) (+(173053050)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) 9228394654824494612ULL);
                            var_18 |= ((((/* implicit */_Bool) max((var_9), (max((562932773552128ULL), (((/* implicit */unsigned long long int) var_7))))))) || (((/* implicit */_Bool) min((max((18446181140935999488ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7962158572183351190LL)))))))));
                            arr_52 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))), (((((/* implicit */long long int) var_4)) / (var_3)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        for (long long int i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            {
                                var_19 = (~(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1]))))));
                                var_20 = var_3;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 1; i_21 < 9; i_21 += 4) 
                {
                    for (unsigned short i_22 = 2; i_22 < 11; i_22 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (-(min((6625184549856235848ULL), (11821559523853315765ULL)))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 14696751264870630064ULL)) ? (max((((/* implicit */unsigned long long int) arr_29 [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_22 + 1])), (arr_8 [i_15] [i_15] [i_15] [i_21 + 3] [i_22 + 1] [i_21 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */int) var_7)), (268435328))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) < (13920683362956707070ULL))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_23 = 0; i_23 < 12; i_23 += 2) 
                {
                    for (unsigned char i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        for (unsigned int i_25 = 1; i_25 < 11; i_25 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (+(11923743682122026783ULL)));
                                arr_76 [i_23] [i_25] [i_23] [i_25] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 173053050)) ? (((/* implicit */long long int) 2147483647)) : ((+(7962158572183351190LL)))))) ? (((((/* implicit */_Bool) 3827005237U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14] [i_14] [i_14] [i_14] [i_14]))) : (max((var_4), (((/* implicit */unsigned int) arr_44 [i_24])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_4)))));
                                var_24 = ((/* implicit */unsigned long long int) arr_41 [i_14]);
                                var_25 = ((/* implicit */unsigned long long int) arr_72 [i_14] [i_14] [i_14] [i_14] [i_14]);
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)2048)) ? (18446181140935999492ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_26 = 0; i_26 < 24; i_26 += 2) 
    {
        for (unsigned int i_27 = 4; i_27 < 22; i_27 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_28 = 0; i_28 < 24; i_28 += 4) 
                {
                    for (int i_29 = 4; i_29 < 22; i_29 += 2) 
                    {
                        for (unsigned int i_30 = 2; i_30 < 21; i_30 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
                                var_28 = var_6;
                                var_29 = ((/* implicit */long long int) (~(((unsigned long long int) var_1))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_31 = 0; i_31 < 24; i_31 += 3) 
                {
                    for (unsigned long long int i_32 = 0; i_32 < 24; i_32 += 4) 
                    {
                        {
                            var_30 += ((/* implicit */long long int) min((9228394654824494612ULL), (((/* implicit */unsigned long long int) 0U))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_0)), (var_4))))))));
                            var_32 = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_33 = 1; i_33 < 22; i_33 += 2) 
                {
                    for (unsigned int i_34 = 4; i_34 < 20; i_34 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_83 [i_27 - 4] [i_33 + 2] [i_34 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (576460751766552576LL))) <= (var_5)));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((-(2080374784)))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_2)), (var_3))))))));
                            arr_100 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-26176))) / (4629432343165193932LL)))) : (((((/* implicit */_Bool) 8ULL)) ? (arr_95 [i_34 + 2] [i_34 + 2] [i_34 + 2]) : (((/* implicit */unsigned long long int) var_3))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_35 = 0; i_35 < 24; i_35 += 2) 
                {
                    for (long long int i_36 = 0; i_36 < 24; i_36 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_96 [i_26] [i_26] [i_26])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -2612469686946535549LL)) : (17687647156438827511ULL))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_94 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])) << (min((((/* implicit */unsigned long long int) var_0)), (4ULL)))))) ? ((-(((((/* implicit */_Bool) -4629432343165193930LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9351))) : (6625184549856235865ULL))))) : ((+(min((((/* implicit */unsigned long long int) arr_87 [i_26] [i_26] [i_26] [i_26] [i_26])), (var_9)))))));
                            arr_107 [i_26] [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_81 [i_26] [i_26] [i_26]))))), (var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_26])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_86 [i_26] [i_26] [i_26] [i_26])))))) ? (max((((/* implicit */unsigned long long int) var_2)), (15268689141879701553ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            arr_108 [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_93 [i_27] [i_27 - 3] [i_27 + 2] [i_27 - 3])) ? (((/* implicit */int) arr_93 [i_27] [i_27 - 1] [i_27 - 1] [i_27])) : (((/* implicit */int) var_0))))) ? (((unsigned int) arr_93 [i_27] [i_27 - 4] [i_27 - 1] [i_27 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_93 [i_27] [i_27 - 1] [i_27 + 1] [i_27 + 1]), (arr_93 [i_27] [i_27 - 1] [i_27 - 3] [i_27])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
