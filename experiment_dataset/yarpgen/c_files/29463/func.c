/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29463
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
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 4] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1])), (arr_4 [i_0 - 1]))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0 - 3] [i_0 + 1]))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_9 [i_0 + 2] = ((/* implicit */int) var_3);
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_0]);
                }
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    arr_13 [i_0] [i_1] = ((/* implicit */long long int) (signed char)37);
                    arr_14 [i_3] [i_1] [(unsigned char)21] = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)1] [i_1 + 2]))) : (var_2))), (((/* implicit */unsigned long long int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) min((arr_12 [i_0 - 4] [i_1] [i_1 + 2] [i_0 - 4]), (((/* implicit */unsigned short) (_Bool)1)))))));
                }
                for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    arr_19 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)26058)), (2147483647)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_26 [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_23 [i_5 + 3]), (arr_23 [i_0 - 2])))) && (((arr_4 [i_1 + 2]) == (((/* implicit */long long int) (-2147483647 - 1)))))));
                                arr_27 [i_0 - 1] [i_1] = ((/* implicit */short) (!(((((/* implicit */int) max((arr_23 [i_1]), (arr_8 [i_5] [i_5] [(short)16])))) == (((/* implicit */int) arr_23 [i_0]))))));
                                arr_28 [i_6] [i_5] [i_6] = ((/* implicit */short) ((_Bool) arr_12 [i_0] [i_0] [i_0 + 2] [i_0 - 1]));
                                arr_29 [i_0] [i_6] [i_4 + 3] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_12 [i_4] [i_4 - 1] [(unsigned char)3] [i_4 - 1]))) || (((/* implicit */_Bool) min((arr_12 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 3]), (arr_12 [i_0] [i_1 - 1] [i_4 + 1] [i_5]))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    arr_32 [i_1] [i_7] = ((/* implicit */_Bool) min((min((arr_16 [i_0 - 4]), (arr_16 [i_0 + 2]))), (arr_16 [i_0 + 1])));
                    arr_33 [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_8 [i_0 - 2] [i_1 - 1] [i_7]))))));
                }
                arr_34 [i_0 - 1] = ((/* implicit */unsigned char) arr_30 [i_0 - 3] [i_1 + 1]);
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_40 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((max((arr_3 [i_0]), (((/* implicit */int) arr_25 [i_0 - 2] [i_8])))), (((((/* implicit */int) arr_25 [i_1 + 1] [i_1])) + (((/* implicit */int) arr_25 [i_1 + 2] [i_8]))))));
                        arr_41 [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 2])))));
                        arr_42 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned char) (short)26058);
                    }
                    for (unsigned short i_10 = 2; i_10 < 23; i_10 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            arr_49 [i_0] [i_1] [i_0] [i_11] = ((/* implicit */short) (+(min((((/* implicit */long long int) var_5)), (min((arr_18 [(short)14] [i_1]), (((/* implicit */long long int) arr_1 [i_11] [i_0 + 1]))))))));
                            arr_50 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 3] [i_0 + 2] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((short) var_2))), (arr_30 [i_0 - 4] [i_1 + 1]))));
                        }
                        for (unsigned int i_12 = 3; i_12 < 21; i_12 += 3) 
                        {
                            arr_55 [i_12] [(short)16] [i_0 - 4] [i_0 - 4] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_46 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24846))) : (arr_46 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 4]))), (((arr_46 [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 3]) + (arr_46 [i_0 - 2] [i_0 + 2] [i_0] [i_0 - 3])))));
                            arr_56 [i_12] [i_1 - 2] [i_8] [i_12] [i_8] [i_12] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_6 [i_0]), (((/* implicit */unsigned int) min(((short)-3147), (((/* implicit */short) arr_25 [i_0] [i_12])))))))) - (min((min((((/* implicit */long long int) (short)26041)), (-1073365432705907727LL))), (((/* implicit */long long int) arr_54 [i_0] [i_0] [i_8] [i_10 + 1] [i_12 + 1]))))));
                        }
                        arr_57 [i_1] = ((/* implicit */unsigned char) (~(max((((((/* implicit */int) var_7)) - (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) (short)26059)) != (((/* implicit */int) var_7)))))))));
                    }
                    arr_58 [i_0] [i_1] [i_8] = ((/* implicit */unsigned long long int) max((min((arr_45 [i_0] [i_1 + 1] [i_1 + 1] [i_8] [i_8]), (arr_45 [i_8] [i_8] [i_8] [i_1] [i_0 + 2]))), (min((((/* implicit */signed char) arr_47 [(_Bool)1] [i_0] [i_1 - 2] [i_0] [i_8] [i_8] [i_8])), (arr_45 [i_0 - 4] [i_1 - 1] [i_8] [i_8] [i_8])))));
                    arr_59 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((max((((unsigned short) arr_12 [i_0] [(signed char)2] [i_8] [i_8])), (((/* implicit */unsigned short) ((_Bool) var_8))))), (max((((/* implicit */unsigned short) arr_21 [i_8] [i_1 + 1])), (arr_12 [i_0 - 2] [i_1 - 1] [i_1 - 2] [i_0 - 2])))));
                    arr_60 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) min((((/* implicit */short) arr_31 [i_1 + 2] [i_1 + 2] [i_0])), ((short)-26059)))) : (((/* implicit */int) max((((/* implicit */signed char) var_0)), ((signed char)-98))))))) != (((arr_30 [i_1 + 1] [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1] [i_0 + 1])))))));
                }
                for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    arr_65 [i_0] [i_13] [i_13] [i_1] = ((/* implicit */_Bool) max((max((arr_17 [i_0] [i_0 - 4]), ((short)26058))), (((/* implicit */short) max((arr_62 [i_0 - 3] [i_0 + 2] [i_0 - 2] [i_0 + 1]), (((/* implicit */unsigned char) arr_39 [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (short i_15 = 1; i_15 < 22; i_15 += 1) 
                        {
                            {
                                arr_73 [i_0] [i_1] [i_13] [i_14 + 1] [i_1] [i_14] [i_0] = ((/* implicit */short) arr_23 [i_13]);
                                arr_74 [i_15] [i_15] [i_15] [(unsigned char)15] [i_15] = ((/* implicit */unsigned int) max((max((arr_46 [i_15 - 1] [i_15 - 1] [i_15] [(_Bool)1]), (arr_46 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_1] [i_1 - 1])) % (((((/* implicit */int) (short)-26046)) / (((/* implicit */int) arr_15 [i_15] [i_14] [i_1])))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_11 = var_10;
    var_12 = ((/* implicit */int) var_8);
    var_13 = ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) max((min((var_10), (((/* implicit */int) var_0)))), (((/* implicit */int) min(((short)26059), ((short)26046)))))))));
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) min((8362375753685217001ULL), (((/* implicit */unsigned long long int) var_4))))))));
}
