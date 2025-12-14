/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2504
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1 - 2]) * (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : ((+(arr_8 [i_0] [i_0])))))) ? (((int) arr_8 [i_1 + 2] [0])) : ((+(((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 3] [i_1 + 1])))));
                    var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
                    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)163)), (arr_9 [i_0] [(_Bool)1] [i_0] [0ULL])))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (short)-24519))));
        var_18 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+((+(arr_7 [i_0])))))), (((unsigned long long int) (-(arr_8 [i_0] [i_0]))))));
        arr_11 [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)14764))), (((/* implicit */unsigned short) ((unsigned char) (~(arr_7 [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            arr_18 [i_4] = ((/* implicit */signed char) ((unsigned short) arr_16 [i_4]));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [i_3])))) - (((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (4294934528U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3])))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            arr_28 [i_3] [i_3] [i_4] [(_Bool)1] [(unsigned char)3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_4 + 3] [i_4 - 1] [i_4 - 1]))));
                            var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_26 [i_3] [i_4 - 1] [i_5] [i_6] [i_7] [i_7])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_21 = ((/* implicit */signed char) arr_17 [i_8]);
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    {
                        var_22 &= ((/* implicit */short) (-(4178434701U)));
                        arr_39 [(unsigned short)19] [i_8] [i_3] = (~(((/* implicit */int) arr_14 [i_3] [i_8])));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_3] [i_8] [i_3] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11] [i_10] [i_9]))) : (116532609U)));
                            arr_43 [i_11] [(unsigned short)3] [(unsigned short)3] [i_8] [i_8] [i_3] = ((/* implicit */int) arr_41 [i_3] [i_3] [(_Bool)1] [i_9] [i_3] [(unsigned short)16] [(signed char)11]);
                        }
                        var_24 = ((/* implicit */int) (+(1700141920U)));
                        var_25 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_10] [i_8] [i_9] [i_10] [i_8] [i_8] [i_10]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (unsigned int i_13 = 2; i_13 < 24; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 23; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_12] [i_12] [i_13 - 2] [i_13] [i_14] [i_14 - 1] [i_15])) - (1962742291)));
                                var_27 = ((/* implicit */unsigned int) arr_17 [i_12]);
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2273067191U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1102679924U)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5686514489563293872LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26544))) : (1380577847U)));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_16] [i_12] [i_16] [(unsigned short)6] [i_3] [i_12])))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        var_32 = ((((/* implicit */_Bool) ((int) arr_29 [(signed char)11] [(signed char)11] [24]))) ? (((/* implicit */int) arr_36 [i_3] [i_12] [i_13 - 2] [i_13] [i_13 - 1] [i_13 + 1])) : ((~(((/* implicit */int) arr_44 [i_12])))));
                        var_33 |= ((/* implicit */unsigned char) (~(arr_12 [i_17])));
                        arr_58 [i_12] [i_12] [i_17] [(unsigned char)21] [i_12] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_3] [i_13 - 1] [i_13 - 1] [i_12] [i_17])) ? (arr_21 [(unsigned char)11] [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_3] [i_13 + 1] [i_3] [i_13 + 1] [i_13 + 1] [i_17])))));
                        var_34 = ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_12] [(unsigned char)13] [i_12] [i_13] [i_13] [21ULL] [i_17]))) * (2594825376U)));
                    }
                    var_35 -= ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) arr_25 [i_13] [i_3] [i_12] [(unsigned char)22] [22] [i_13 - 1] [i_13])));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 1; i_18 < 24; i_18 += 1) 
                    {
                        for (short i_19 = 2; i_19 < 23; i_19 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_12] [i_18] [i_13 - 1] [i_12] [i_12])) ? (5524519588036237105ULL) : (arr_33 [(unsigned short)8] [i_18 - 1] [i_18 - 1]))))));
                                var_37 -= ((/* implicit */_Bool) (~(arr_51 [i_18 + 1])));
                            }
                        } 
                    } 
                    arr_65 [i_13] [i_12] [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)31878))) ? (((((/* implicit */_Bool) arr_29 [i_3] [i_3] [(unsigned char)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_13]))) : (2273067189U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 2])))));
                }
            } 
        } 
        var_38 = ((/* implicit */short) arr_23 [i_3] [i_3] [i_3] [(unsigned short)2] [i_3]);
        arr_66 [i_3] |= ((/* implicit */unsigned char) ((long long int) arr_36 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]));
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            for (unsigned int i_21 = 2; i_21 < 23; i_21 += 2) 
            {
                {
                    var_39 = ((/* implicit */int) (+((-(arr_54 [i_3] [i_20] [i_20] [i_20])))));
                    var_40 = ((/* implicit */unsigned char) (-((+(arr_54 [i_3] [i_3] [i_3] [i_3])))));
                    arr_74 [22] [i_20] [i_21 - 2] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_3] [i_3]))) > (arr_51 [i_20]))) ? (arr_72 [i_3] [i_20] [i_3]) : (((/* implicit */int) arr_52 [i_21 - 1] [i_21 - 1] [i_21 - 2] [i_21 + 2] [i_21 + 1]))));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned char) var_3);
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)(-32767 - 1)))))))) ? (((/* implicit */unsigned long long int) (~(((int) 1953756234U))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (3744500623U)))) ? (var_13) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
    var_43 = ((/* implicit */int) ((unsigned long long int) ((-7305966896769603526LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56984))))));
}
