/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48465
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 - 1])), (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 1] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_2])))) : (arr_0 [i_0 - 2] [i_0 + 2]))))));
                    var_18 += ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                }
            } 
        } 
        var_19 = ((/* implicit */int) ((max((arr_2 [2LL]), ((-(arr_0 [i_0] [i_0]))))) / (((/* implicit */long long int) (~((-(var_4))))))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_3 + 4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((arr_15 [i_6 - 1] [i_6 - 2]) != (arr_15 [i_6 - 2] [i_6 + 1]))) ? (((/* implicit */long long int) ((unsigned int) arr_12 [i_3 - 3] [i_4 + 1] [i_5] [i_6 + 2]))) : (max((arr_15 [i_4] [i_6 - 1]), (((/* implicit */long long int) var_9))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_11))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6 + 1] [i_0 - 3] [i_3 + 4])))))));
                            }
                        } 
                    } 
                    var_21 = var_3;
                    arr_19 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) min(((~(max((arr_12 [i_0 - 3] [i_3 + 4] [i_4] [i_4]), (((/* implicit */int) arr_16 [i_4] [i_4 - 1] [i_3] [i_3] [i_4 + 1])))))), ((-(((/* implicit */int) ((var_11) > (var_12))))))));
                    arr_20 [i_0] [i_0] [i_0] [i_0 + 1] = (+(((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) arr_10 [i_0] [i_0]))))) ? (((arr_5 [i_4] [i_3 + 2]) * (((/* implicit */unsigned long long int) 134209536U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0])) / (arr_12 [i_3] [i_4 - 2] [i_3] [i_0])))))));
                    arr_21 [i_0] [i_0] [(unsigned char)10] = ((/* implicit */int) -5166208001560253419LL);
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_9 [i_0 + 2] [i_0] [i_0 + 2]))) ? (2080374784U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32748)))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned char) var_4);
        arr_27 [i_7] [i_7] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_7]) : (arr_1 [i_7]))), (((/* implicit */long long int) ((((/* implicit */int) (short)-32732)) == (var_6))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 1) 
        {
            for (long long int i_9 = 3; i_9 < 13; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_0))));
                            arr_39 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_7] [i_8 - 3])) ? (((/* implicit */long long int) var_4)) : (arr_0 [i_7] [i_8 + 1])));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((max((((unsigned long long int) arr_5 [i_7] [i_7])), (((/* implicit */unsigned long long int) ((_Bool) var_17))))) - (((/* implicit */unsigned long long int) (-((-(arr_4 [i_12] [i_8] [i_8])))))))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_38 [i_7] [i_8 - 1] [i_8 + 2] [i_10] [i_12 + 1])) || (((/* implicit */_Bool) arr_38 [i_7] [i_8 + 1] [i_9] [i_10] [i_12])))) ? (((15300162247950310520ULL) & (3146581825759241119ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_38 [i_7] [i_8 + 1] [i_9 - 2] [i_10] [i_12 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8] [i_8])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) (signed char)-56))))) < (((unsigned long long int) (!(((/* implicit */_Bool) var_13)))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                        {
                            {
                                arr_53 [i_13] [i_13] [i_16] [7LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) var_15))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_13 + 1] [19LL] [i_17] [i_16])) ? (arr_47 [i_13 + 1] [i_14] [i_15 - 2] [i_16]) : (arr_47 [i_15] [i_15] [i_15] [i_15 - 2])));
                                var_27 *= ((/* implicit */short) ((((unsigned long long int) arr_47 [i_15] [i_15] [i_15] [i_15 - 2])) >> (((arr_44 [i_13 + 1]) - (15355514569593864467ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 1; i_18 < 22; i_18 += 1) 
                    {
                        for (short i_19 = 1; i_19 < 22; i_19 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_19] [(unsigned char)20] [i_19 + 1] [i_19 - 1] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_51 [i_19] [i_19] [i_19 + 1] [i_19] [i_19 + 1]))))));
                                var_29 -= ((/* implicit */unsigned long long int) ((short) 2017906814880999599ULL));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_19] [i_15] [i_19] [i_19 - 1] [i_15] [i_14])) ? (arr_44 [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_19 + 1] [i_15] [i_19] [i_19 + 1] [i_15] [i_14]))))))));
                                var_31 = ((/* implicit */unsigned int) (~((~(arr_52 [i_13] [i_13] [i_13] [i_13 - 1] [i_13] [i_13])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) var_12);
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (0ULL)));
        arr_60 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (var_4)));
    }
    var_34 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 1) 
    {
        for (unsigned short i_21 = 0; i_21 < 21; i_21 += 2) 
        {
            {
                var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_20]))) | (arr_42 [i_20] [i_21])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_20]))) <= (arr_42 [i_20] [i_21]))))) : (((((var_13) + (9223372036854775807LL))) << (((var_16) - (583557759U)))))));
                arr_67 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_42 [i_21] [i_20]))) ? (var_4) : (var_9)));
            }
        } 
    } 
}
