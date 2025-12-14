/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247375
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = (signed char)11;
                var_11 = ((/* implicit */signed char) min((((84384307U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))))), (((/* implicit */unsigned int) ((unsigned char) (signed char)-1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                arr_14 [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) (-(min((max((((/* implicit */unsigned int) arr_3 [i_2])), (arr_4 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) var_3))))));
                arr_15 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) 18446744073709551611ULL));
                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1])) * (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])))) | ((+(((/* implicit */int) (unsigned char)238))))));
                var_13 = ((/* implicit */short) (-((+(((((/* implicit */_Bool) 1847502927877294187LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_2] [i_2] [i_2])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) arr_10 [i_2] [i_2]);
                            arr_24 [i_2] [i_5] [i_5] [(unsigned short)13] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) & (arr_13 [i_2] [i_3] [i_2])));
                            var_15 = ((/* implicit */int) var_10);
                            arr_25 [i_2] [i_3] [i_2] [i_5] [i_5] = ((/* implicit */signed char) arr_16 [(signed char)11] [(signed char)11] [(signed char)11]);
                        }
                        arr_26 [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_12 [i_5]))) || (((/* implicit */_Bool) ((arr_4 [i_3] [i_4] [i_3]) | (arr_19 [i_2] [i_3]))))));
                        arr_27 [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */int) (_Bool)1)) != (arr_3 [i_3]))));
                        var_16 = ((/* implicit */unsigned short) (signed char)-32);
                        /* LoopSeq 2 */
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) var_2);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 - 1] [5LL])) ? (((/* implicit */int) arr_18 [i_5])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
                        }
                        for (unsigned short i_8 = 3; i_8 < 16; i_8 += 1) 
                        {
                            arr_33 [i_2] [10ULL] [i_2] [6LL] [10ULL] [6LL] [i_3] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)10))) / (arr_28 [i_2] [i_3] [i_3] [i_5] [i_8])));
                            var_19 = ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_5] [i_4] [i_3]));
                            var_20 = ((/* implicit */int) (signed char)10);
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_37 [i_3] = ((/* implicit */long long int) var_0);
                        var_21 = ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2 - 1]))) : (var_6));
                        arr_38 [i_4] [i_3] = ((/* implicit */unsigned int) ((22U) < (((271246318U) * (2U)))));
                    }
                    var_22 = ((signed char) arr_7 [i_2 + 1] [i_3]);
                    var_23 = ((/* implicit */unsigned int) ((short) arr_23 [i_2] [i_2 - 1] [i_2] [i_4 + 3] [i_2] [i_3]));
                    arr_39 [i_4] [i_3] [i_2] = ((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_3] [i_2 - 1] [i_2] [i_10])) ? (5274927411186311078LL) : (((/* implicit */long long int) arr_23 [i_2] [i_3] [i_3] [i_2 + 1] [i_2] [i_3]))));
                        var_25 = ((((/* implicit */_Bool) (signed char)-4)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-11)))) : (((/* implicit */int) (_Bool)1)));
                        /* LoopSeq 3 */
                        for (int i_11 = 3; i_11 < 16; i_11 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((long long int) var_0)))));
                            arr_46 [i_2] [i_3] [i_4] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) > (2670259621624453705ULL)));
                            arr_47 [i_2] [i_2] [i_4] [i_2] [i_11] [i_11] [i_2] = ((/* implicit */signed char) arr_7 [(signed char)5] [i_3]);
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((unsigned int) ((signed char) arr_4 [i_4] [i_4] [i_4])));
                            arr_51 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]);
                        }
                        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            arr_55 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3] [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_10))))));
                            arr_56 [i_2] [(signed char)15] [i_2] [i_13] = ((/* implicit */signed char) var_5);
                        }
                    }
                }
                /* vectorizable */
                for (unsigned int i_14 = 3; i_14 < 16; i_14 += 3) 
                {
                    arr_59 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_21 [i_2] [i_2] [i_2] [i_14]))))));
                    arr_60 [i_2] [i_2] [i_14] = ((/* implicit */_Bool) -589892012);
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        arr_63 [i_2] [i_15] [i_15] [i_15] [i_3] [i_2] = ((/* implicit */signed char) ((arr_42 [i_15] [i_14 - 2] [i_3] [i_2 + 1] [i_2]) ^ (arr_44 [i_2 + 1] [i_3] [i_14] [i_15] [i_14] [i_14])));
                        var_28 = ((/* implicit */short) var_7);
                    }
                }
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    arr_66 [i_2] [i_2] [i_16] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) ^ (-5274927411186311097LL)));
                    arr_67 [i_2 + 1] [i_3] [i_3] [i_2 + 1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) -5274927411186311079LL))) ? (((((/* implicit */int) arr_16 [i_2] [i_3] [i_16])) | (((/* implicit */int) var_9)))) : (2013265920)));
                    arr_68 [i_2] [i_3] [i_16] [i_3] = var_6;
                    arr_69 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (var_0) : (arr_10 [i_3] [i_3])));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (arr_28 [i_2 - 1] [i_16] [i_2 + 1] [i_2] [i_2 - 1]) : (((/* implicit */long long int) arr_61 [i_16] [i_16] [i_2] [i_2]))));
                }
            }
        } 
    } 
    var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((unsigned int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (var_3))))) : (min((((/* implicit */unsigned long long int) max((var_5), (var_5)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (14039989379711822317ULL)))))));
    var_31 = ((/* implicit */short) (unsigned char)223);
}
