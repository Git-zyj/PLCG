/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203026
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_14))))));
    var_18 ^= ((/* implicit */signed char) min((((/* implicit */int) var_12)), (((((/* implicit */int) var_5)) - (((/* implicit */int) ((_Bool) (short)-28800)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_12);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0]))))), (((unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4174472155U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) ((signed char) arr_1 [i_0])))))))));
        var_19 = var_0;
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((short) var_14)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (18446744073709551615ULL)))) ? ((+(var_10))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_1])) + (2147483647))) >> (((((((/* implicit */int) arr_0 [(unsigned short)7])) - (((/* implicit */int) arr_7 [i_1])))) - (86))))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_21 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                arr_13 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_8 [i_1])), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_6 [i_1])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    var_22 = ((/* implicit */signed char) arr_6 [i_4 - 1]);
                    var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3] [i_3])))))));
                    arr_16 [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) arr_10 [i_4] [i_2] [i_1])) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_3] [i_4] [i_4 - 1] [i_4 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)31))) : (arr_14 [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]))) : (((/* implicit */long long int) ((arr_8 [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_9))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */int) min((min((arr_14 [i_1] [i_1] [i_2] [i_3] [i_5] [(short)3]), (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [1LL]))), (((/* implicit */long long int) ((signed char) var_12)))));
                    var_24 = ((/* implicit */int) var_3);
                    arr_20 [i_1] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((int) arr_8 [i_1]))) - (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [14ULL])))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)9759))));
                    arr_24 [i_1] [i_2] [i_3] [i_6] [i_6] = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-9763))))), (min((max((((/* implicit */short) var_3)), (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_1] [(unsigned short)0] [i_3] [i_3] [i_7] [i_2]))));
                        var_27 = ((/* implicit */int) arr_9 [i_1]);
                    }
                }
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_21 [i_8] [i_2] [i_1] [i_1]))));
                arr_29 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_2])) - (((/* implicit */int) arr_21 [i_1] [i_1] [i_2] [i_8]))));
                arr_30 [i_1] [i_1] [i_8] = ((/* implicit */signed char) ((long long int) arr_6 [i_1]));
            }
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    arr_38 [i_2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (arr_22 [(_Bool)1] [i_1] [i_2] [i_9] [i_10] [i_10]))))));
                    arr_39 [i_1] [i_9] [i_10 - 3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_9] [i_1] [i_10 - 3] [i_9])) ? (arr_22 [i_2] [i_10 + 1] [i_9] [i_10 + 1] [i_10] [i_2]) : (arr_22 [i_1] [i_10 + 1] [i_1] [i_1] [i_2] [i_9])))), (((var_3) ? (arr_17 [i_1] [i_9] [i_9] [i_10] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((unsigned short) var_0))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_2))));
                        var_31 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) arr_12 [i_10 - 1])) : (((/* implicit */int) arr_5 [i_1] [i_2])))), (var_11)));
                    }
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_45 [i_9] [i_2] [i_9] [i_10 - 2] [i_12] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_25 [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */int) arr_25 [i_1] [i_10 + 1] [i_10 + 1] [(_Bool)0] [i_10])) : (((/* implicit */int) arr_25 [i_2] [i_10 + 1] [i_10 + 1] [i_10] [(signed char)8])))), (((/* implicit */int) ((signed char) arr_37 [i_1] [i_2])))));
                        arr_46 [i_9] [i_2] [i_9] [i_12] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_21 [i_10] [i_9] [i_2] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [(signed char)8])))))) ? (((((/* implicit */int) min((arr_5 [(_Bool)1] [i_2]), (((/* implicit */short) var_5))))) * (((/* implicit */int) (!(arr_15 [i_1] [i_9] [i_1])))))) : (((((/* implicit */_Bool) arr_42 [i_1] [i_2] [i_2] [i_2] [i_12])) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_3)))))));
                        var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_8 [i_1]) ? (var_10) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-118)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_44 [i_1] [i_2] [i_2] [i_10] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_44 [i_1] [i_2] [i_9] [i_10] [i_12])) ? (4750768504375397154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_1] [i_1] [i_1]), (((/* implicit */short) arr_27 [i_1] [i_1]))))))));
                    }
                }
                arr_47 [i_1] [i_2] [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_9] [i_9])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_9])))));
                arr_48 [i_1] [i_9] = ((/* implicit */long long int) var_2);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                var_33 = arr_21 [i_1] [i_13] [i_14] [i_13];
                var_34 = ((arr_17 [i_1] [i_14] [i_14] [i_13 + 2] [i_14]) & (arr_17 [i_1] [i_14] [i_14] [i_13 - 1] [i_14]));
            }
            for (long long int i_15 = 4; i_15 < 9; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 3; i_16 < 9; i_16 += 2) 
                {
                    for (short i_17 = 1; i_17 < 10; i_17 += 2) 
                    {
                        {
                            arr_62 [i_1] [i_1] [i_15] [i_16 - 2] [i_17 - 1] [i_17 - 1] [i_15] = ((/* implicit */unsigned long long int) ((arr_51 [i_13 + 3] [i_16 - 1] [i_15 - 2] [i_15 - 1]) ? (((/* implicit */int) arr_51 [i_13 + 1] [i_16 + 1] [i_15] [i_15 - 1])) : (((/* implicit */int) arr_51 [i_13 + 3] [i_16 + 1] [i_15 + 2] [i_15 + 1]))));
                            var_35 = ((/* implicit */_Bool) arr_61 [i_1] [i_13 + 1] [(unsigned short)6] [i_15 - 4] [i_16 + 1] [i_17] [i_17 + 1]);
                        }
                    } 
                } 
                arr_63 [i_15] [i_13 - 1] [i_15 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_15 - 3])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            }
            for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_72 [i_1] [i_1] [i_13 + 1] [i_13 + 1] [i_18] [i_19] [i_18] = ((/* implicit */signed char) ((arr_43 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_13] [i_13 + 1] [i_1]) ? (((/* implicit */int) arr_43 [i_20 - 1] [i_20] [i_20 - 1] [i_19] [i_13 + 1] [i_13])) : (((/* implicit */int) (unsigned char)0))));
                            arr_73 [i_13 + 2] [i_18] [(_Bool)1] = ((/* implicit */short) ((arr_64 [i_13] [i_19]) ? ((+(((/* implicit */int) var_12)))) : ((+(((/* implicit */int) arr_50 [(short)7]))))));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (16019746049090253241ULL) : (((/* implicit */unsigned long long int) arr_71 [(_Bool)1] [i_1] [i_1] [i_1] [i_1]))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-9762))))))))));
                            arr_74 [i_1] [i_13] [i_18] [i_18] [i_20] = ((/* implicit */unsigned long long int) ((arr_70 [i_1] [i_1] [i_20 - 1] [i_13 - 1] [i_20] [i_20]) ? (((/* implicit */int) arr_70 [i_1] [i_13] [i_20 - 1] [i_13 + 2] [i_20] [i_18])) : (((/* implicit */int) arr_70 [i_1] [i_1] [i_20 - 1] [i_13 + 2] [i_20 - 1] [3ULL]))));
                            var_37 ^= arr_28 [(signed char)2];
                        }
                    } 
                } 
                var_38 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_1] [i_1] [i_18] [i_13 - 1]))) % (var_16)));
                arr_75 [i_1] [i_13 + 3] [i_18] = ((/* implicit */short) arr_18 [i_1] [(signed char)4] [i_1] [i_13 + 1] [i_18] [i_18]);
            }
            var_39 = ((/* implicit */signed char) var_6);
        }
    }
}
