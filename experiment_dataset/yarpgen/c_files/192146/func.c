/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192146
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [(signed char)6] = ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) (signed char)-8)))), ((-(-2147483628)))));
                            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_13), (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) var_8)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-33)))) - (var_12))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) var_2);
                            arr_17 [i_0] [i_4] [i_4] = ((unsigned char) var_3);
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((_Bool) max((min((((/* implicit */short) (unsigned char)224)), ((short)23376))), (((/* implicit */short) (signed char)8))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 3; i_7 < 8; i_7 += 2) 
                    {
                        {
                            arr_23 [i_7] [i_6] [i_6] [(unsigned short)1] [i_6] [(unsigned short)1] = ((/* implicit */unsigned int) ((int) ((unsigned char) max((((/* implicit */unsigned char) (signed char)-27)), ((unsigned char)224)))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1])), (arr_15 [i_7] [1U] [i_6] [i_7] [i_0] [(unsigned char)8])))) ? ((~(((/* implicit */int) var_1)))) : (((arr_22 [i_6] [i_1] [i_7 + 2] [i_7 + 2] [i_1]) | (arr_22 [i_6] [i_1] [i_7 + 1] [i_7] [i_6])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (int i_10 = 1; i_10 < 16; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 15; i_12 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((signed char) (unsigned short)0)), (((/* implicit */signed char) ((-9223372036854775806LL) > (((/* implicit */long long int) var_13)))))))), (((1643249998U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_10 + 1] [i_10 - 1])))))));
                                var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)54872)) && (((/* implicit */_Bool) arr_29 [i_10] [(short)14])))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3130))) != (3974276554U))), (((((/* implicit */int) arr_25 [i_8])) > (var_9)))))));
                                arr_36 [i_9] [i_11] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_31 [i_10 + 1] [i_9] [i_12 + 2])))));
                                arr_37 [i_8] [i_10 + 1] [i_9] = ((/* implicit */unsigned long long int) (((~(2913501516U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_32 [i_9] [i_10 + 1] [i_10 + 1] [i_12 + 1] [i_12 + 2] [i_12 - 1]))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (short)-11439)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_5))));
                                var_22 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) : (arr_40 [0ULL] [i_9] [i_10 - 1] [i_9] [i_14] [i_8] [(unsigned char)13]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((unsigned char) ((short) arr_40 [i_10] [(unsigned short)12] [i_10] [i_9] [i_10] [i_10 - 1] [i_10])));
                                var_24 = ((signed char) arr_38 [i_16] [7U] [i_8] [i_10] [11ULL] [i_8]);
                                var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_3)))) ? (arr_46 [i_10] [i_10 - 1] [i_10] [i_10 - 1] [0LL]) : (((arr_46 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10]) ^ (arr_46 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1])))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (short)-5060))));
                                arr_47 [(unsigned char)13] [(unsigned char)13] [i_9] [(signed char)16] [(unsigned char)10] [(signed char)15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)224)))) < (1278754924)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_17 = 3; i_17 < 14; i_17 += 1) 
    {
        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_19 = 1; i_19 < 16; i_19 += 1) 
                {
                    for (unsigned int i_20 = 2; i_20 < 16; i_20 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_54 [i_17 + 2] [i_17 + 4] [i_19 - 1] [i_20 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (648111377U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)11)) | (1536118927))))));
                            var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) ((arr_50 [i_17]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_50 [i_17]))))), (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_17])))))));
                            arr_60 [i_17] [i_17] [i_17] [6] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (~(-1531961873)))), (((((/* implicit */_Bool) var_4)) ? (arr_56 [i_17] [i_17]) : (((/* implicit */unsigned int) var_13)))))) > (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_55 [i_20] [i_20 - 2] [i_20 - 2] [i_20 - 2]))))))));
                            var_29 = ((/* implicit */unsigned long long int) arr_52 [i_17] [(unsigned char)1] [i_17]);
                            arr_61 [i_20] [i_20] [i_20] [i_20 - 2] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned int) min((max((((/* implicit */int) (signed char)-76)), (var_2))), (((/* implicit */int) arr_57 [i_17] [12] [i_17 - 2] [i_17 - 3]))))) ^ (var_12)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned char i_22 = 0; i_22 < 18; i_22 += 1) 
                    {
                        {
                            var_30 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21)) ? (857718665U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))))) ? (((/* implicit */int) arr_67 [i_18] [i_18] [i_21] [i_22])) : (((/* implicit */int) arr_52 [i_18] [i_17] [i_21]))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((unsigned long long int) arr_48 [i_17])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((var_6) ? (((/* implicit */int) arr_65 [i_21] [i_21])) : (((/* implicit */int) (short)7446)))) != (((arr_53 [i_17] [i_17 + 3] [(unsigned short)7]) | (((/* implicit */int) var_3))))))), ((~((~(var_9)))))));
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                            var_34 = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
}
