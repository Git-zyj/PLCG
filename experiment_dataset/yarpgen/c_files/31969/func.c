/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31969
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 8432513096439679746LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1))));
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 8432513096439679763LL)) ? (((/* implicit */unsigned long long int) -1819346748)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)123)), ((unsigned char)248)))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (0ULL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) arr_0 [i_0]);
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) var_8)), (var_7)))) >> (((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)))))) > (((var_11) << (((1506925208099466141ULL) - (1506925208099466112ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 2) 
                        {
                            {
                                arr_25 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1]))) : (16939818865610085467ULL)))));
                                var_17 |= ((/* implicit */_Bool) (-(((unsigned long long int) arr_1 [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        for (int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            arr_37 [i_12] [i_10] [i_10] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (-8729959869221923664LL) : (-9102924208250196043LL)))), (((((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_9] [i_9] [i_10])))))) | (((((/* implicit */_Bool) var_3)) ? (arr_34 [i_11] [i_10] [i_11]) : (((/* implicit */unsigned long long int) var_11))))))));
                            arr_38 [i_9] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)187)), ((short)18121)))) % (((/* implicit */int) var_10))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_35 [i_9 + 1] [i_9 - 1]))));
                            var_19 += ((/* implicit */unsigned short) ((var_9) >> (((((/* implicit */int) ((signed char) var_1))) + (73)))));
                            var_20 -= ((/* implicit */unsigned char) ((((var_4) < (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_34 [i_9] [i_11] [i_12]))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9] [i_10] [i_11] [i_11]))) - (var_0)))), (var_9)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 21; i_13 += 4) 
                {
                    for (unsigned int i_14 = 2; i_14 < 21; i_14 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_41 [i_13]))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) min(((unsigned char)4), (((/* implicit */unsigned char) var_2)))))))) : ((-(min((var_11), (var_11))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) var_1);
                            arr_52 [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */long long int) arr_39 [i_10] [i_9 + 1] [i_9 + 1])) / (var_4))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))))));
                            arr_53 [i_9] [i_10] [i_10] [i_16] = (((+(((/* implicit */int) (unsigned short)34705)))) >= (((/* implicit */int) min((arr_42 [i_9] [i_9] [i_9 + 1] [i_9]), (arr_42 [i_15] [i_15] [i_9 + 1] [i_9])))));
                            arr_54 [i_10] [i_10] [i_15] [i_16] = var_0;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_19 = 2; i_19 < 9; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57322)))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (7695509241906599461ULL))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 1; i_23 < 9; i_23 += 4) 
                    {
                        for (unsigned long long int i_24 = 3; i_24 < 10; i_24 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) var_11);
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4)))) ? (((((/* implicit */_Bool) arr_59 [i_24 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_59 [i_23])))) : (((((/* implicit */_Bool) arr_59 [i_17])) ? (((/* implicit */int) arr_59 [i_24 - 2])) : (((/* implicit */int) arr_59 [i_17])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 4; i_25 < 8; i_25 += 1) 
                {
                    for (signed char i_26 = 2; i_26 < 8; i_26 += 3) 
                    {
                        {
                            arr_80 [i_18] = (i_18 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) min((arr_69 [i_17] [i_18] [i_18] [i_25 - 4]), (((/* implicit */unsigned short) var_6))))) >> ((((-(arr_65 [i_17] [i_17] [i_17] [i_18] [i_17]))) + (6539888285921467397LL)))))) : (((/* implicit */signed char) ((((/* implicit */int) min((arr_69 [i_17] [i_18] [i_18] [i_25 - 4]), (((/* implicit */unsigned short) var_6))))) >> ((((((-(arr_65 [i_17] [i_17] [i_17] [i_18] [i_17]))) + (6539888285921467397LL))) - (1404609453307066685LL))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8729959869221923680LL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-118)), ((unsigned char)243))))) : (8729959869221923656LL)))) ? (((((/* implicit */int) arr_59 [i_17])) | (((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) arr_70 [i_25] [i_25] [i_25] [i_25] [i_25]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                {
                    for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) var_8);
                            arr_85 [i_18] [i_18] [i_27] [i_27] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)1)) != (((/* implicit */int) (unsigned short)6702))))) : (((/* implicit */int) ((((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_18]))))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (var_4))))))));
                            var_30 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(var_3)))), (min((-8LL), (-870938892956190475LL)))));
                            var_31 = ((/* implicit */_Bool) min((arr_67 [i_17] [i_17] [i_18] [i_27] [i_28]), (((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_29 = 0; i_29 < 22; i_29 += 1) 
    {
        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
        {
            for (int i_31 = 3; i_31 < 21; i_31 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        for (short i_33 = 1; i_33 < 20; i_33 += 1) 
                        {
                            {
                                var_32 *= ((/* implicit */int) (~(min((((((/* implicit */unsigned long long int) var_4)) - (arr_89 [i_29] [i_30] [i_33]))), (((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) >> (((arr_88 [12LL]) - (1611093286U))))))))));
                                arr_100 [2U] [i_31] [i_30] [2U] |= min((((/* implicit */unsigned long long int) arr_49 [i_31] [i_29] [i_30] [i_32] [i_32])), (max((((/* implicit */unsigned long long int) ((long long int) arr_26 [i_29] [i_30]))), (((((/* implicit */_Bool) arr_95 [i_29] [i_30])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                                var_33 -= ((/* implicit */short) max((((/* implicit */unsigned int) var_12)), (arr_26 [i_32] [i_29])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_34 = 4; i_34 < 20; i_34 += 4) 
                    {
                        for (int i_35 = 0; i_35 < 22; i_35 += 1) 
                        {
                            {
                                var_34 |= ((/* implicit */int) (!(((/* implicit */_Bool) (+((-(var_3))))))));
                                var_35 ^= ((/* implicit */unsigned char) 1020937096425966671LL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) 
                    {
                        for (unsigned int i_37 = 0; i_37 < 22; i_37 += 4) 
                        {
                            {
                                arr_114 [i_29] [i_30] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) max((var_7), (((/* implicit */short) arr_91 [i_29] [i_30] [i_36] [i_37]))))))), (min((max((((/* implicit */int) (signed char)-124)), (1336476953))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_37] [i_31] [i_30] [i_29])))))))));
                                arr_115 [i_29] [i_37] [i_37] [i_37] = ((/* implicit */unsigned int) min((var_0), (((/* implicit */long long int) (unsigned short)1874))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
