/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2869
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-22)), (1910757400U))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_18 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) arr_3 [i_0])))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1 + 4]);
        var_19 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_1]))));
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)137)) || (((/* implicit */_Bool) arr_6 [i_1 + 3])))))));
    }
    /* vectorizable */
    for (short i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((60993925) << (((var_2) - (2317681288U))))))));
        arr_12 [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2384209896U)) ? (10683922470530792538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14720)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                arr_21 [i_5] [i_4] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */unsigned long long int) var_9)) : (10683922470530792538ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) 
                    {
                        {
                            arr_27 [i_3] [i_4] [i_4] = var_5;
                            var_22 = ((/* implicit */unsigned short) ((7762821603178759055ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19242)))));
                        }
                    } 
                } 
                arr_28 [i_5] [i_4] [i_5] [i_3] = ((/* implicit */unsigned short) arr_3 [i_3]);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 3; i_9 < 7; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(2384209880U))))));
                            var_24 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) arr_22 [i_3] [i_3] [i_3] [i_8] [i_9])) | (var_15))));
                        }
                    } 
                } 
            }
            arr_34 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (+((-(arr_8 [i_4] [i_4])))));
            /* LoopNest 3 */
            for (unsigned int i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                for (unsigned char i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 7; i_12 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2384209895U)))) ? (((/* implicit */unsigned long long int) min((1910757400U), (1910757400U)))) : (min((var_7), (((/* implicit */unsigned long long int) var_2))))))) ? ((-((-(((/* implicit */int) arr_31 [i_3] [i_4] [i_10 - 1] [i_3] [i_11])))))) : ((+(((/* implicit */int) var_3))))));
                            arr_42 [i_3] [i_4] [i_10 - 2] [i_4] [i_12] [i_4] = ((/* implicit */unsigned int) (-(var_5)));
                            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7762821603178759101ULL)) ? (((/* implicit */unsigned long long int) 1775125291U)) : (7762821603178759101ULL)));
                        }
                    } 
                } 
            } 
            var_27 &= ((/* implicit */unsigned char) ((short) var_15));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) min((1910757400U), (((/* implicit */unsigned int) arr_36 [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((short) arr_35 [i_4] [i_3] [i_3] [i_3]))) : (((((/* implicit */_Bool) var_14)) ? (1699001663) : (((/* implicit */int) arr_36 [i_3] [i_4] [i_4]))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_29 *= var_2;
            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1910757389U))));
            var_31 &= ((/* implicit */_Bool) arr_11 [i_3] [i_3]);
            var_32 = ((/* implicit */long long int) max((arr_20 [i_13]), (((/* implicit */unsigned long long int) var_3))));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            arr_47 [i_3] [i_3] = ((/* implicit */unsigned int) arr_17 [2U]);
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) 7762821603178759101ULL))));
            var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            arr_48 [i_3] [i_14] = ((/* implicit */short) (~(arr_32 [i_14] [i_14] [i_3] [i_14] [i_14] [i_14] [i_3])));
            arr_49 [i_3] [i_14] [i_14] = ((/* implicit */unsigned short) var_11);
        }
        arr_50 [i_3] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_3]))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            for (short i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                {
                    arr_58 [i_16] = ((/* implicit */unsigned char) max(((+(10683922470530792514ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_3] [i_3] [i_15] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_16]))) : (arr_56 [i_3] [i_15] [i_16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_15] [(unsigned char)2]))) : (min((100663296U), (arr_57 [i_3] [i_15] [i_16]))))))));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (-(var_2))))));
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 6; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */long long int) var_13))));
                                arr_63 [i_16] [i_15] [i_16] [i_16] [i_17] [i_15] [i_18] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_16])) && (var_3)))), (var_12)))), (arr_20 [i_15])));
                                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(max((arr_20 [i_18]), (((/* implicit */unsigned long long int) var_8))))))))))));
                                var_38 = ((/* implicit */unsigned char) arr_39 [i_17 + 3] [i_17 + 4] [i_17 - 1] [i_3]);
                                var_39 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_19 [i_3] [i_15] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [(short)4] [i_17] [i_17] [i_16] [i_15] [i_15] [i_3]))) : (arr_35 [i_3] [i_17 + 2] [i_17 + 2] [i_17 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_40 = ((/* implicit */_Bool) var_11);
    var_41 = ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551608ULL)) || (((/* implicit */_Bool) 10683922470530792514ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        for (unsigned char i_20 = 0; i_20 < 17; i_20 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    for (int i_22 = 2; i_22 < 14; i_22 += 3) 
                    {
                        {
                            var_42 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -442696926)))))));
                            var_43 = ((/* implicit */unsigned long long int) var_8);
                            var_44 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_65 [i_22 - 1] [i_20]))))));
                            var_45 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_4))))))) + (2147483647))) << ((((+(((/* implicit */int) arr_74 [i_22] [i_22 + 3] [i_22 + 3] [i_22] [i_22 - 1] [i_22 + 1])))) - (26792)))));
                        }
                    } 
                } 
                var_46 ^= arr_1 [i_19];
            }
        } 
    } 
}
