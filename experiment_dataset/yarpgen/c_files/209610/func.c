/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209610
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
    var_18 = ((/* implicit */unsigned char) var_9);
    var_19 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : ((~(((int) var_14)))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_16))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) 16777215U))), (1371090369U)));
        var_22 = ((/* implicit */long long int) ((_Bool) -8362188998806862871LL));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 4; i_1 < 19; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_23 += ((/* implicit */_Bool) 4278190086U);
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    var_24 -= (((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)0)))) <= (((/* implicit */int) ((unsigned short) 630815070U))));
                    var_25 -= ((/* implicit */long long int) 386060584);
                    var_26 = ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (-3305316701435102568LL) : (((/* implicit */long long int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            {
                                arr_18 [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_9 [i_1] [i_5 - 1]));
                                var_27 = ((signed char) ((unsigned short) (unsigned char)48));
                                var_28 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)61));
                                arr_19 [i_2] [i_2] [i_2] [i_4] [i_2] [i_5] = ((/* implicit */int) ((unsigned long long int) arr_11 [i_5] [i_5 + 1] [i_4 - 1] [i_4 - 1]));
                                arr_20 [i_1] [i_2] [i_1] [i_1] [i_2] [i_2] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_3 + 4] [i_3 + 4] [i_5] [14] [(short)20])) < (((/* implicit */int) arr_17 [i_3 + 4] [i_3] [i_5] [i_5 - 1] [i_5]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_14)))) < (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2])) ? (4278190056U) : (arr_3 [i_6])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_30 = ((3025221364U) > (((unsigned int) arr_21 [i_2])));
                                var_31 &= 1269745953U;
                                var_32 = ((/* implicit */int) (-(67108800U)));
                                var_33 = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_1 - 4] [i_1] [(_Bool)1] [i_1] [i_1 - 1]))));
                                var_34 *= ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_3 [i_8])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_35 &= ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_24 [i_1] [i_1] [i_1 - 2] [i_1 + 2])))));
                        var_36 ^= ((/* implicit */int) ((unsigned int) arr_29 [i_1] [i_1 - 4] [i_1 - 1]));
                    }
                    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        var_37 = ((/* implicit */int) (~(arr_29 [i_2] [i_1 + 1] [i_1 - 2])));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)31)))));
                        arr_34 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1904944278))));
                    }
                }
                /* vectorizable */
                for (short i_11 = 1; i_11 < 20; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 3; i_12 < 19; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned char) arr_37 [i_1 - 3] [i_1]);
                                var_40 = 4227858490U;
                                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_1] [i_2] [i_1] [i_12])) ? (-7461638039845812761LL) : (((((/* implicit */long long int) 4056270800U)) ^ (arr_4 [i_13]))))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned char) ((signed char) arr_22 [i_1 - 2] [i_2]));
                }
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_43 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) ((signed char) var_15))), (1492510427U))));
                    var_44 ^= ((/* implicit */short) ((int) ((((/* implicit */int) arr_37 [i_14] [i_2])) | ((-(((/* implicit */int) var_2)))))));
                    var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) 3305316701435102567LL))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 4; i_16 < 20; i_16 += 1) 
                        {
                            {
                                arr_52 [i_15] [i_2] [i_14] [i_2] [i_14] = ((unsigned int) (+(arr_27 [i_16] [i_16] [i_16] [i_16 - 3] [i_16])));
                                arr_53 [i_15] [i_2] [i_14] [i_15] [i_16] [i_2] [7] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                }
                var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) 67108805U))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    var_47 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_38 [i_1 - 3])), (max((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                    arr_57 [i_2] [i_17] [(unsigned char)14] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (~(arr_51 [1LL])))))));
                    var_48 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) 2147483648U)))));
                }
                var_49 = ((/* implicit */signed char) ((_Bool) max(((~(var_3))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [i_1] [i_2] [i_1] [i_1]))))))));
            }
        } 
    } 
}
