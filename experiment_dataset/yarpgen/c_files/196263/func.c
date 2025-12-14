/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196263
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) 9223372036854775807LL);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)2791))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 1])))))) : (min((((/* implicit */long long int) (signed char)78)), (var_18)))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    arr_10 [3ULL] [i_1] [i_2] = min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-15172)) : (((/* implicit */int) (signed char)-1))))));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) var_18);
                }
                for (unsigned short i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    arr_14 [i_3] [i_1] [6LL] [i_0] = ((/* implicit */unsigned short) arr_0 [i_1]);
                    arr_15 [6ULL] [i_1] [i_1] = ((/* implicit */unsigned short) 6723174431836634942LL);
                    arr_16 [i_0] [i_0] [(signed char)5] [i_3 + 2] = ((/* implicit */unsigned long long int) ((min((max((3348910116U), (946057179U))), (((/* implicit */unsigned int) ((signed char) var_3))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    arr_17 [i_3] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_1 - 2] [i_1 - 3] [i_1 - 3]))), ((~(((unsigned long long int) arr_9 [i_0] [i_1]))))));
                }
                for (unsigned char i_4 = 1; i_4 < 6; i_4 += 4) 
                {
                    arr_20 [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_18)), (arr_18 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_4])))))) : (min((((/* implicit */unsigned long long int) (short)15062)), (18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_28 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_24 [i_1] [i_1] [i_1] [1U] [i_1 - 3] [i_1 + 1] [i_4 + 1]))) ? ((+(((/* implicit */int) arr_24 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_4 + 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_1] [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1 - 2] [i_4 + 2])), (var_12))))));
                                arr_29 [i_5] [i_1] [(_Bool)1] [i_5] [6] = ((/* implicit */signed char) (~(((long long int) min((((/* implicit */unsigned long long int) var_10)), (arr_3 [i_0] [i_0]))))));
                                arr_30 [i_6] [i_0] [i_1] [i_1] [i_4] = (((((+(4LL))) == (((/* implicit */long long int) ((/* implicit */int) var_14))))) ? (min((max((9223372036854775807LL), (((/* implicit */long long int) arr_4 [i_5] [i_4] [(unsigned char)1])))), (var_18))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_14))) <= (((/* implicit */int) var_14)))))) % (min((arr_18 [i_0] [i_1 - 2] [i_4 + 3]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((((unsigned long long int) (unsigned char)255)) % (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3348910116U)), (9223372036854775803LL))))))));
                    arr_36 [i_0] [i_1 + 1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            arr_41 [i_9] [i_9] = ((_Bool) arr_40 [i_8] [i_9] [i_9]);
            arr_42 [i_9] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        }
        /* LoopSeq 1 */
        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 2) 
        {
            arr_46 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % ((-(((/* implicit */int) var_16))))));
            arr_47 [i_8] [i_10] [i_10] = ((/* implicit */signed char) (~(var_18)));
            arr_48 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((int) arr_39 [i_8]));
        }
    }
    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                {
                    arr_57 [i_11] [i_11] = ((/* implicit */int) arr_50 [i_11]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_14 = 4; i_14 < 18; i_14 += 4) 
                    {
                        arr_61 [i_11] [i_12] [(_Bool)1] [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (4383784112466042176LL)));
                        arr_62 [2LL] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_12 - 1] [i_14] [i_14])) ? (((((/* implicit */int) arr_44 [i_12 - 1] [i_13])) >> (((var_1) - (5776565921416822932ULL))))) : ((~(var_2)))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_66 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_2);
                        arr_67 [i_11] [0LL] [0LL] [i_13] [i_15] = (unsigned short)12063;
                        arr_68 [i_13] [i_13] = ((((/* implicit */_Bool) ((unsigned short) arr_59 [i_11] [i_12] [i_12 - 1] [(_Bool)1] [i_12 - 1]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_12] [i_12 + 2] [i_12]))) & ((~(9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_11] [i_12]))));
                        arr_69 [i_15] [i_13] [i_12] [i_12 + 1] [i_11] = ((/* implicit */long long int) ((unsigned char) ((_Bool) arr_40 [i_11] [(unsigned short)10] [i_15])));
                        arr_70 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) var_1);
                    }
                    for (unsigned short i_16 = 2; i_16 < 18; i_16 += 3) 
                    {
                        arr_73 [i_16] [i_16] [14ULL] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((short) ((var_13) | (((((/* implicit */_Bool) var_11)) ? (arr_45 [i_12]) : (((/* implicit */int) var_17)))))));
                        arr_74 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((arr_58 [i_12 + 2] [i_16 - 1] [i_16 - 1]) ^ (((/* implicit */unsigned long long int) var_5)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_3)))) == (((/* implicit */int) arr_55 [i_11] [i_12] [i_12 + 2]))))))));
                    }
                    arr_75 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned short)55451))) - (((/* implicit */int) ((unsigned char) arr_63 [i_12 + 3] [i_13] [i_12 + 3] [i_13] [10])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 2) 
        {
            for (int i_18 = 0; i_18 < 19; i_18 += 4) 
            {
                for (unsigned short i_19 = 1; i_19 < 17; i_19 += 4) 
                {
                    {
                        arr_83 [i_11] [i_11] [i_17] [i_11] = arr_56 [i_11] [i_17] [i_18] [i_19];
                        arr_84 [i_17] = ((/* implicit */unsigned short) min((max((arr_59 [i_17] [i_17] [i_17 - 1] [i_18] [i_19 + 1]), (var_6))), (((arr_59 [i_11] [i_11] [i_17 - 1] [i_19] [i_19 + 1]) ^ (9223372036854775807LL)))));
                        arr_85 [i_11] [i_18] [i_18] [i_11] [i_11] = ((var_9) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)51969), (((/* implicit */unsigned short) arr_43 [19U] [i_19]))))) == (var_5))))));
                    }
                } 
            } 
        } 
        arr_86 [i_11] [i_11] = (!(((/* implicit */_Bool) min((arr_51 [i_11] [i_11]), (var_1)))));
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            arr_90 [i_11] = ((/* implicit */int) ((long long int) var_9));
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                arr_94 [i_11] [i_11] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_44 [i_20] [i_20]), (((134217726ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))) <= (var_6)));
                arr_95 [i_11] [i_11] [i_11] [i_21] = var_6;
                arr_96 [i_11] [i_20] [(unsigned char)10] = ((/* implicit */long long int) (!((!((!(var_4)))))));
                arr_97 [i_11] [i_11] [i_11] = ((/* implicit */int) ((1472632605) >= (((/* implicit */int) var_3))));
                arr_98 [i_20] [i_20] [i_11] = ((/* implicit */unsigned long long int) (signed char)127);
            }
            arr_99 [i_20] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_59 [i_11] [i_11] [i_20] [i_20] [i_20])))) + (((var_1) - (((/* implicit */unsigned long long int) arr_59 [i_11] [i_20] [i_11] [i_11] [i_11]))))));
            arr_100 [i_11] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */int) arr_64 [i_20] [i_11] [i_11] [i_20] [i_11] [i_11])) & (((/* implicit */int) arr_64 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
        }
        arr_101 [i_11] = ((/* implicit */int) (~(((unsigned int) ((-1472632621) + (((/* implicit */int) var_4)))))));
    }
    var_19 = ((/* implicit */short) ((unsigned long long int) (~(((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12063))))))));
    var_20 = ((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */long long int) (signed char)-41);
}
