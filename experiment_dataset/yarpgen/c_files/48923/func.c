/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48923
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] [12LL] [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_2);
                                var_11 -= ((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_3] [i_3] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [(unsigned short)3] [i_2] [(short)0] [(short)0] [i_0]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) var_1);
                    arr_18 [i_2] [i_2] [(short)12] = ((((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_3 [i_0])))) <= (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_3 [(short)1]))))));
                    arr_19 [i_2] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7838698519303528454ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (7838698519303528467ULL)));
                    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 3] [i_1] [i_1 - 3] [i_1]))) >= (arr_2 [i_0] [(unsigned short)13])));
                }
            } 
        } 
        arr_20 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) ((_Bool) var_7)))));
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned char) var_6);
        arr_24 [i_5] [i_5] = ((/* implicit */int) (short)0);
        var_14 -= ((/* implicit */long long int) ((((4291053692U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >> (((((((/* implicit */_Bool) var_6)) ? (arr_21 [i_5]) : (arr_21 [i_5]))) - (11761859329212426746ULL)))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_27 [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_0)))), (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_5] [i_5]))) / (-4490945908885180612LL)))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)-15738))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(4923572108285713294LL)))) : (arr_22 [i_5])))));
            var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_22 [i_5]) <= (arr_21 [i_5]))))));
            var_16 = ((/* implicit */signed char) arr_26 [i_5] [i_6] [i_5]);
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [i_5] [i_7] [(short)1])) / ((~(((/* implicit */int) arr_30 [i_5] [i_7] [i_7]))))));
            arr_31 [(short)3] = ((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5]);
        }
    }
    /* LoopSeq 2 */
    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_18 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_34 [i_8])), (arr_33 [i_8] [i_8])))), (max((18446744073709551615ULL), (arr_32 [i_8])))));
        var_19 = ((/* implicit */short) ((unsigned long long int) (~(((var_0) << (((arr_32 [i_8]) - (216339912390638247ULL))))))));
        arr_36 [i_8] = ((/* implicit */long long int) var_5);
        var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((short)7864), (((/* implicit */short) (_Bool)1))))) << (((((/* implicit */int) arr_35 [i_8])) % (((/* implicit */int) arr_35 [i_8])))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_40 [13LL] [i_11] [i_11])) != (((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_9])))))) <= (arr_32 [i_10]))) ? (((((/* implicit */_Bool) ((unsigned long long int) 9223372036854775807LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15731))) : (805306368U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_38 [i_9] [i_9]) > (((/* implicit */long long int) ((/* implicit */int) arr_37 [14LL] [21ULL])))))))));
                    var_22 = ((/* implicit */signed char) -14);
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */int) arr_34 [(_Bool)1])) : (((/* implicit */int) arr_34 [i_9])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            for (unsigned char i_13 = 4; i_13 < 21; i_13 += 4) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)25428)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40108))) / (var_0)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned int) var_8)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_8)) | (((/* implicit */int) (short)8670)))))))));
                    var_25 = ((/* implicit */_Bool) 3ULL);
                    var_26 = ((/* implicit */long long int) ((unsigned long long int) var_2));
                    arr_47 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_2))), (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_46 [i_12] [i_9]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7322)))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
    {
        for (short i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (int i_16 = 1; i_16 < 12; i_16 += 3) 
            {
                {
                    var_27 = ((/* implicit */long long int) arr_30 [i_16] [i_15] [12LL]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 3; i_17 < 13; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                        {
                            {
                                arr_61 [(short)12] [i_15] [i_15] [6LL] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_16 + 1] [i_17] [i_17 + 1])) ? (((/* implicit */int) arr_44 [i_17 - 3] [i_16 + 3])) : (((/* implicit */int) arr_25 [i_16 + 3] [i_16 + 3] [i_17 - 2]))))) ? ((~(arr_21 [i_17 - 2]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_17 + 2])))));
                                arr_62 [14] [0U] [i_18] [i_18] [i_15] [i_14] |= ((/* implicit */signed char) ((_Bool) min((((((/* implicit */_Bool) arr_10 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (arr_10 [i_17 + 1] [i_18] [i_18] [i_14]))), (min((var_2), (((/* implicit */unsigned int) var_1)))))));
                                arr_63 [i_18] [i_15] [i_17 - 2] [i_16] [i_15] [i_15] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_16 + 3] [i_16 - 1] [i_16 + 1] [i_16 + 2] [i_16 + 3] [i_16 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_16 + 1] [i_16 + 2] [i_16 - 1] [i_16 + 2] [i_16 + 3] [i_16 + 2]), (arr_13 [i_16 - 1] [i_16 + 1] [i_16 + 2] [i_16 + 1] [i_16 + 1] [i_16 + 3]))))) : (((35184372088831ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_16 + 3] [i_16 + 2] [i_16 + 2] [i_16 + 3] [i_16 - 1] [i_16 + 1])))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_14] [i_14] [i_14] [i_16 + 3] [i_16 + 1] [i_14])) ? (((/* implicit */int) arr_25 [i_14] [i_14] [9LL])) : (((/* implicit */int) arr_25 [i_14] [i_16] [i_16]))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-99)), (-34)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_15 [(short)6] [i_15] [(unsigned short)10] [8] [2U] [(unsigned short)12]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_46 [i_14] [i_14])) == (((/* implicit */int) ((signed char) arr_56 [i_14] [i_15] [i_15] [i_15] [9] [i_15]))))))))))));
                    arr_64 [i_14] [(_Bool)1] [i_15] [i_14] = (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3408))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3100527738511921138LL)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) arr_12 [i_15] [i_15]))))) : ((+(arr_5 [i_15]))))));
                }
            } 
        } 
    } 
}
