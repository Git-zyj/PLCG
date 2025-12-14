/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219974
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
    var_19 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */unsigned int) arr_1 [(unsigned short)3] [(unsigned short)3]))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))), (max((max((2674897462U), (arr_0 [i_0 + 1]))), ((-(4293783247U)))))));
        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42098))) : (var_14))), (((/* implicit */long long int) ((var_2) >> (((-8779539942728706221LL) + (8779539942728706239LL))))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) var_18))))) ? (min((var_5), (1184052U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4293783268U))))))))));
        arr_2 [i_0 - 2] &= ((/* implicit */unsigned char) (~(4294967295U)));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        arr_5 [16LL] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 2]))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2]))) : (arr_3 [i_1 - 3] [i_1 - 3])));
    }
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_11 [i_3] [i_3] [i_3] |= ((/* implicit */unsigned short) (~((-(arr_3 [i_2 + 1] [i_2 - 2])))));
            arr_12 [i_2 + 1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) arr_9 [i_2 - 2] [i_3] [i_3])))), (((_Bool) arr_4 [i_2 + 2] [i_3]))));
            var_22 = ((/* implicit */_Bool) var_13);
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4293783245U))))))), (((((/* implicit */_Bool) min((arr_7 [i_2]), (((/* implicit */unsigned short) arr_10 [i_3] [i_4]))))) ? (((/* implicit */long long int) arr_1 [i_2 + 1] [i_2 - 3])) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_2 - 3])))) != (((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) (unsigned short)23442)) - (23421)))))) ? (((/* implicit */int) (unsigned short)23442)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_14 [i_4] [i_2] [i_2])) : (var_18))))))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)23456)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))) : (var_6))))) / (((/* implicit */int) ((unsigned char) (unsigned short)65530))))))));
                var_26 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned char) (signed char)-123)))))) | (1184027U)))), (var_7)));
            }
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_27 |= ((/* implicit */unsigned char) ((arr_8 [i_2 - 2] [i_5]) <= (((/* implicit */unsigned int) max((max((8388592), (((/* implicit */int) var_0)))), (((/* implicit */int) ((short) arr_17 [i_2 - 2]))))))));
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1184011U))) ? ((+(((/* implicit */int) (unsigned short)65530)))) : (((/* implicit */int) arr_10 [i_5] [i_3]))))))))));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5543280687478079161ULL)) ? (5543280687478079159ULL) : (((/* implicit */unsigned long long int) var_9))))) ? (arr_8 [6LL] [i_2 + 1]) : (arr_19 [(unsigned char)15])));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2 - 1] [i_6] [i_2])) ? (arr_13 [i_6] [i_6] [i_7] [i_7]) : (arr_13 [i_2] [i_2] [i_6] [i_7])));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_8])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_20 [i_2 + 2] [i_6] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2 + 1] [i_6] [i_6] [i_8]))) : (var_9))) : (((/* implicit */long long int) arr_24 [i_8] [i_6] [i_2])))))));
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 14; i_9 += 2) 
                {
                    for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        {
                            var_32 = ((((/* implicit */_Bool) 1172452858)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) : (4293783288U));
                            arr_34 [i_10 + 1] = ((/* implicit */unsigned short) (+(1217990744U)));
                            arr_35 [i_2 - 2] [i_2 - 1] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4991)) ? (((/* implicit */int) arr_26 [i_2] [i_6])) : (((/* implicit */int) arr_26 [i_8] [i_9 + 2]))));
                        }
                    } 
                } 
                arr_36 [(signed char)1] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)20] [i_6])) ? (((((/* implicit */_Bool) 8388592)) ? (arr_13 [i_2 + 1] [i_2 + 1] [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_6] [i_6]))))) : (((unsigned long long int) arr_7 [i_8]))));
            }
            arr_37 [i_2 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8634547587361778609LL)) ? ((+(((/* implicit */int) (short)0)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (arr_1 [i_2] [i_2 + 1])))));
            var_33 = ((/* implicit */signed char) arr_32 [i_2 + 2] [i_2 + 2] [i_6] [i_6] [i_2 + 2]);
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12095376191137132627ULL)))) ? (((arr_9 [i_6] [i_2 - 1] [i_2 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23451))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : (((/* implicit */int) arr_7 [i_6]))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 3; i_13 < 13; i_13 += 2) 
                {
                    {
                        arr_44 [i_2] [1ULL] [i_2] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_11] [i_11] [i_12] [(unsigned char)10] [i_13 - 3] [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11] [i_11] [i_12] [i_11] [i_13 - 2] [i_13 - 2]))) & (arr_13 [i_2] [i_11] [i_12] [i_13 - 1]))) : (min((arr_13 [i_2] [i_12] [i_12] [i_12]), (((/* implicit */unsigned long long int) arr_42 [i_11] [i_12] [i_12] [i_11] [i_13 - 2] [i_13]))))));
                        arr_45 [i_2 - 1] [i_11] [i_11] [i_13] = ((/* implicit */unsigned char) ((long long int) ((arr_21 [i_2 - 3] [i_11 + 1] [i_11 - 1]) / (((/* implicit */long long int) 4293783268U)))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_18))) ? (((((/* implicit */_Bool) var_3)) ? (arr_40 [(unsigned char)16] [i_2 - 2] [i_2 + 1] [i_11 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [11U] [11U])) ? (((((/* implicit */_Bool) 70368744046592ULL)) ? (((/* implicit */long long int) var_6)) : (var_14))) : (((/* implicit */long long int) max((arr_1 [i_2 - 1] [i_2]), (arr_1 [i_2] [i_11 + 2]))))))))))));
        }
        arr_46 [i_2 - 2] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) (unsigned char)8)) ? (4273288668U) : (arr_33 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1] [i_2 + 2]))))) <= (max((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (((arr_33 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2]) << (((var_1) - (1040011428U)))))))));
    }
    /* LoopNest 3 */
    for (short i_14 = 1; i_14 < 12; i_14 += 1) 
    {
        for (unsigned char i_15 = 2; i_15 < 13; i_15 += 2) 
        {
            for (short i_16 = 2; i_16 < 12; i_16 += 1) 
            {
                {
                    arr_56 [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_19 [i_14 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42108))))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_43 [i_14])) + (((/* implicit */int) var_11))))))));
                    arr_57 [i_16] [i_16 + 2] = ((/* implicit */unsigned int) max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)91))));
                }
            } 
        } 
    } 
}
