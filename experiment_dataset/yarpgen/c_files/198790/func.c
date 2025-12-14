/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198790
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (((long long int) var_9)))));
                                var_15 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((short) var_1))))));
                                var_16 ^= ((/* implicit */short) ((unsigned short) 63U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) (+(min((((/* implicit */long long int) var_8)), (var_1)))));
                                arr_22 [i_0] [i_1] [i_0] [i_2] [i_6] = ((/* implicit */long long int) arr_9 [i_5] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (long long int i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_18 = min((((arr_23 [i_10 - 1]) << (((var_6) - (3291752125U))))), (((arr_24 [i_8]) & (arr_24 [i_8]))));
                            var_19 = ((/* implicit */signed char) min((min((arr_26 [i_10 - 1]), (arr_26 [i_10 - 1]))), (((/* implicit */unsigned int) var_3))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        for (long long int i_13 = 2; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(1239209612U)))), (min((5554361070234509113ULL), (((/* implicit */unsigned long long int) 2117322392U)))))))));
                                var_21 = arr_36 [i_7] [i_12] [i_11] [i_12];
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((unsigned long long int) 2751297995U)) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1)))))));
                            arr_46 [i_14] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((arr_28 [i_15] [i_8] [i_8] [i_7]), (((/* implicit */short) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_7] [i_14] [i_7] [i_7]))))))))), (var_13)));
                            arr_47 [i_15] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)92)), (var_10)))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */unsigned long long int) 8341578151306146225LL)) + (2863748120057850365ULL))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 4220846594U)) ? (-6113244106642784183LL) : (((/* implicit */long long int) arr_32 [i_14] [i_14] [i_14] [i_7]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        {
                            var_23 = var_1;
                            arr_54 [i_7] [i_7] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16714149043716008438ULL)) ? (204464526U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208)))))) : (arr_43 [i_7] [i_7] [i_7]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((3472003699U) >= (227888941U)))), (((((/* implicit */_Bool) arr_36 [i_7] [i_8] [i_8] [i_8])) ? (475590856U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), ((+(min((arr_23 [i_7]), (arr_23 [i_7])))))));
                            arr_60 [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(16477980879344882445ULL)))) ? ((+(max((((/* implicit */long long int) arr_57 [i_7] [20] [i_18] [20])), (var_1))))) : (max((668279007298802178LL), (arr_43 [i_8] [i_8] [(unsigned short)1])))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned long long int) var_5)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_20 = 0; i_20 < 24; i_20 += 1) 
    {
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_22 = 1; i_22 < 20; i_22 += 2) 
                {
                    for (unsigned int i_23 = 1; i_23 < 21; i_23 += 3) 
                    {
                        for (int i_24 = 0; i_24 < 24; i_24 += 1) 
                        {
                            {
                                arr_72 [i_24] [(short)10] [6U] [i_21] [i_20] |= ((/* implicit */short) (+(min((((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (8852537860635064752ULL))), (((/* implicit */unsigned long long int) max((2325133792840409252LL), (arr_66 [i_24] [i_23 + 2]))))))));
                                var_26 = ((/* implicit */unsigned short) (((~(((((arr_68 [i_20] [i_21] [i_22 + 4] [i_20] [i_23 - 1] [i_24]) + (2147483647))) << (((((/* implicit */int) var_4)) - (177))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_20] [i_21] [i_21] [i_21])))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((unsigned int) min((var_6), (((/* implicit */unsigned int) (unsigned short)52399))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(var_0))))))));
                                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((int) var_1))) | (((unsigned long long int) var_2)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) var_3)), ((unsigned short)33469))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483636)) && (((/* implicit */_Bool) (short)-12775)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    for (unsigned char i_26 = 2; i_26 < 20; i_26 += 2) 
                    {
                        {
                            arr_79 [i_20] [i_20] [i_25] [i_20] = ((/* implicit */_Bool) max(((((+(((/* implicit */int) arr_74 [i_21] [i_21] [i_20])))) ^ (((((/* implicit */int) arr_74 [i_21] [19ULL] [19ULL])) >> (((arr_68 [i_20] [(short)5] [1ULL] [21] [i_26] [i_26]) + (1993830272))))))), (arr_77 [i_20] [i_20] [i_20] [i_20])));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned int) (+(65535U))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((int) var_3)))));
                            var_31 ^= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((unsigned int) (unsigned char)255))), (((long long int) arr_62 [i_25])))) >> (((((max((1788012653U), (((/* implicit */unsigned int) (unsigned char)45)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (1788012605U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 4) 
                {
                    for (long long int i_28 = 3; i_28 < 22; i_28 += 1) 
                    {
                        {
                            var_32 &= ((/* implicit */long long int) min(((-(min((var_13), (var_7))))), (((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (unsigned char)28))))))));
                            arr_85 [i_27] [i_27] [i_27] [i_27] |= ((/* implicit */short) max((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)127)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_29 = 0; i_29 < 11; i_29 += 1) 
    {
        for (long long int i_30 = 2; i_30 < 9; i_30 += 3) 
        {
            for (short i_31 = 2; i_31 < 9; i_31 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_32 = 0; i_32 < 11; i_32 += 2) 
                    {
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            {
                                arr_100 [4LL] [5U] [i_30] [i_31 - 1] [i_32] [i_33] = ((/* implicit */unsigned char) ((((16291939873021644234ULL) * (((/* implicit */unsigned long long int) -866479991)))) & (((/* implicit */unsigned long long int) var_8))));
                                arr_101 [i_29] [(short)6] = ((/* implicit */_Bool) arr_21 [16U] [i_30 - 1] [i_30 - 1] [i_30] [i_31 - 1]);
                                var_33 += ((/* implicit */_Bool) ((unsigned char) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)42), (((/* implicit */signed char) (_Bool)0)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_34 = 0; i_34 < 11; i_34 += 2) 
                    {
                        for (long long int i_35 = 0; i_35 < 11; i_35 += 2) 
                        {
                            {
                                var_34 = (+((-((+(arr_44 [i_29] [i_30] [i_30] [i_29]))))));
                                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (-((-((+(var_9))))))))));
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_82 [i_34] [i_31 - 1] [i_31])) : (((/* implicit */int) arr_82 [i_34] [i_31 - 1] [i_31]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16836))) * (3610926967U)))), (min((((/* implicit */unsigned long long int) (unsigned char)117)), (arr_42 [i_31] [i_30] [i_31]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_11 [i_29] [i_30] [i_35] [i_34] [i_35])))))))));
                                var_37 = ((/* implicit */long long int) ((((var_13) < (((/* implicit */unsigned long long int) -400423678)))) ? (min((((/* implicit */unsigned long long int) arr_94 [i_30 + 1] [i_31 - 2])), (var_13))) : (((/* implicit */unsigned long long int) (+(2380709944002318646LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_36 = 0; i_36 < 11; i_36 += 3) 
                    {
                        for (long long int i_37 = 0; i_37 < 11; i_37 += 4) 
                        {
                            {
                                arr_113 [i_36] [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] = ((((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)))) && ((!(((/* implicit */_Bool) arr_61 [i_30 + 2] [i_31 - 2])))));
                                arr_114 [i_29] [i_30] [i_36] [i_36] [i_37] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) min((8388607U), (2643817753U)))), (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) : (arr_27 [i_30] [(short)16]))))), (((/* implicit */unsigned long long int) max((min((-1LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) max(((short)958), ((short)-20066)))))))));
                                arr_115 [i_36] [i_36] [i_31 - 2] [i_36] [i_36] [i_36] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_21 [i_30] [i_29] [i_31] [i_29] [(short)3])), (arr_68 [i_29] [i_30 + 2] [i_30 + 2] [i_29] [(unsigned short)16] [i_37])))) / (var_7))), (((/* implicit */unsigned long long int) ((long long int) (signed char)63)))));
                                arr_116 [i_36] [(unsigned char)3] [i_31] [i_36] [i_36] [i_29] [(unsigned short)0] = ((/* implicit */short) (!((!(((((/* implicit */unsigned long long int) 1600961961)) == (1432333020298981081ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
