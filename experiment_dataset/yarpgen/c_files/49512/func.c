/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49512
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_1] [11ULL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)2])) && (((/* implicit */_Bool) (short)28498)))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)7))));
                        arr_11 [i_3] = ((/* implicit */unsigned char) ((-2109566348948863779LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18974)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 + 3] [i_5 + 2] [i_5 - 1] [i_5 + 3] [i_5 + 3])) ? (((/* implicit */int) (short)-2723)) : (arr_8 [i_5 - 1] [i_5 + 3] [i_5 + 2] [i_5 + 2] [i_5 + 2])));
                                var_18 = ((/* implicit */signed char) ((arr_15 [i_5 + 2] [i_5 + 2] [i_5] [i_4] [i_5 - 1] [i_5]) <= (((/* implicit */int) var_9))));
                                arr_18 [i_1] [6] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_1] [i_5] [i_5 + 2])) ? (arr_15 [i_0] [i_1] [i_4] [i_1] [i_2] [i_5 - 1]) : (arr_15 [i_0] [i_1] [i_0] [i_1] [i_5 + 3] [i_5 + 1])));
                            }
                        } 
                    } 
                }
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (short)9792))));
                    var_20 = ((/* implicit */short) arr_0 [i_6]);
                    var_21 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)7))));
                }
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    arr_23 [i_0] [i_7] [i_0] = ((/* implicit */int) arr_21 [i_0]);
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_19 [7U] [i_1] [i_7]), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))) + (4172785733785367386ULL)))) ? ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_7] [i_7] [i_7])))) : (((/* implicit */int) ((signed char) arr_22 [i_0] [(_Bool)1] [i_0])))));
                }
                for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_26 [i_8] &= max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? ((~(12176945748260367492ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_25 [i_8] [(_Bool)1] [i_0] [i_0])) : (arr_14 [i_0] [(short)0] [i_1] [i_8] [i_1])))))), (min((min((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_8] [i_8])))), (((((/* implicit */_Bool) 12422984749392228330ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) : (arr_0 [i_0]))))));
                    arr_27 [i_0] [i_1] [i_8] = ((/* implicit */long long int) min((3U), (((/* implicit */unsigned int) (unsigned char)249))));
                    var_23 = ((/* implicit */unsigned long long int) min(((~(-1LL))), (((/* implicit */long long int) ((arr_15 [i_0] [i_1] [i_8] [i_8] [i_1] [i_0]) % (((/* implicit */int) var_9)))))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_9 = 2; i_9 < 11; i_9 += 4) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) var_7))) & (min((0ULL), (((/* implicit */unsigned long long int) (short)11019))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(_Bool)1])) ? (arr_4 [2ULL] [2ULL] [i_9]) : (var_5))) + (((/* implicit */unsigned int) arr_13 [0ULL] [i_9] [i_9 - 2] [i_9] [i_9 + 2]))))) : (max((((/* implicit */unsigned long long int) (signed char)-8)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        arr_33 [i_0] [i_1] [i_9] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-7)))))))) ? ((-(arr_16 [i_9] [i_9] [i_9] [i_9 - 2] [i_9 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 6616287973835012271ULL)))))))));
                        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [(_Bool)1] [i_9] [i_10] [i_10])) && (((/* implicit */_Bool) 18446744073709551605ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                        var_26 = ((/* implicit */unsigned char) (+(59054859U)));
                        arr_34 [i_0] [10ULL] [i_10] [8U] [i_10] = ((/* implicit */unsigned long long int) arr_20 [i_0]);
                    }
                    arr_35 [i_1] = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_9 - 2] [i_9]);
                    arr_36 [i_9] [i_1] [i_1] [(unsigned short)7] |= ((/* implicit */unsigned char) ((unsigned int) min(((+(13675231089734444895ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)108))))))));
                }
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    arr_39 [i_0] [i_1] [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (signed char)-9)) : (1664721969)))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-82)))))) : (((((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_1 [i_11]) : (((/* implicit */unsigned long long int) var_6)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94)))))));
                    var_27 &= ((/* implicit */_Bool) (signed char)-91);
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_17 [i_0] [i_11])) : (((/* implicit */int) ((short) var_6)))));
                    var_29 = ((/* implicit */unsigned int) ((short) min((((((/* implicit */_Bool) 253952)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (arr_16 [i_11] [i_11] [i_11] [i_0] [i_11])))))));
                }
                /* vectorizable */
                for (long long int i_12 = 2; i_12 < 12; i_12 += 4) 
                {
                    arr_43 [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_15 [i_0] [i_0] [i_1] [i_1] [i_12] [i_12]) : (((/* implicit */int) var_1))))) ? (arr_14 [i_0] [i_0] [i_0] [0ULL] [i_1]) : (((/* implicit */int) var_8))));
                    arr_44 [i_0] [i_0] [(unsigned char)1] [i_12 - 2] = ((/* implicit */unsigned char) ((unsigned short) arr_22 [i_1] [i_1] [i_0]));
                    var_30 *= arr_29 [i_12];
                    /* LoopSeq 2 */
                    for (signed char i_13 = 2; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        arr_47 [10ULL] = ((/* implicit */short) arr_5 [(short)5] [i_1]);
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            arr_51 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_13 + 2] [i_12 - 1] [i_1] [i_12 - 1] [i_12 - 2])) % (((int) 2481998399U))));
                            var_31 ^= ((/* implicit */_Bool) arr_50 [5LL] [i_1] [i_1] [(_Bool)1] [3ULL] [i_1]);
                        }
                        var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_50 [i_12 - 2] [i_12 - 2] [i_12] [i_13 + 2] [i_12] [i_13]) : (arr_50 [i_12 + 2] [i_12 + 2] [i_12] [i_13 + 1] [i_12 + 2] [i_12 - 2])));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_19 [i_0] [i_1] [11])))) ? ((-(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) arr_30 [i_12 + 1] [i_0] [i_0])))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) 0)) != (13U)))) << (((arr_37 [i_0] [i_1] [i_12] [i_0]) - (12554128023657156421ULL)))));
                    }
                    for (signed char i_15 = 2; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        arr_54 [i_15] [i_12] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_1] [9] [i_1] [i_12 + 2] [i_15 - 2])) - (((/* implicit */int) arr_46 [i_0] [i_0] [i_12] [i_12 + 2] [i_15 - 2]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            var_35 = ((/* implicit */int) ((unsigned char) arr_12 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 2] [i_15 + 1] [i_15 + 2]));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((unsigned long long int) (signed char)127)))));
                            arr_59 [i_0] [i_1] [i_12 + 2] [i_16] [i_16] = (~(4294967295U));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_12 - 1] [i_12] [i_12] [i_12])))))));
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3602084355716467589ULL)) || (((/* implicit */_Bool) (signed char)-98)))))));
                            var_39 = (-(arr_37 [i_0] [i_15 + 3] [i_15 + 1] [i_15 + 3]));
                        }
                        arr_62 [i_0] [i_0] [i_1] [i_12] [i_15] = ((/* implicit */int) (-(arr_56 [i_0] [i_1] [i_1] [i_15] [i_0])));
                        var_40 = ((/* implicit */unsigned short) ((short) ((4294967292U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
                    }
                }
            }
        } 
    } 
    var_41 = ((/* implicit */long long int) var_13);
    var_42 = ((/* implicit */signed char) var_16);
}
