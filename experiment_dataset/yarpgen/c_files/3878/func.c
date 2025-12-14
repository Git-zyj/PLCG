/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3878
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((unsigned short) var_4)), (((/* implicit */unsigned short) var_12))))), (max((max((((/* implicit */unsigned long long int) var_8)), (12040306971153276032ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) var_0))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_5);
                arr_6 [i_0] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((_Bool) max((((((/* implicit */int) var_9)) != (var_1))), (min(((_Bool)1), (var_12))))))));
                    var_16 = ((/* implicit */int) (!(((_Bool) arr_4 [i_0 - 1] [i_0] [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_0 - 1] [i_3 + 1] [9] [i_3 + 1] [(unsigned short)4])))) & (((((/* implicit */_Bool) ((unsigned int) 4094261338088338010ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((arr_11 [i_4] [i_3] [i_3 + 1] [i_2] [i_1] [(unsigned char)2]), (((/* implicit */long long int) (unsigned char)70))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 256600802U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14352482735621213605ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) max((4038366487U), (((/* implicit */unsigned int) (_Bool)0))))) ? (max((((/* implicit */int) (_Bool)0)), (-1064337544))) : (((((/* implicit */_Bool) (unsigned short)40217)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))), (min((826464398), (((/* implicit */int) var_10))))))), (arr_1 [i_0])));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) var_3)) : (max((((-1064337520) % (826464395))), (((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_19 [(_Bool)1] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_2))))));
        var_20 = ((/* implicit */int) arr_17 [i_5]);
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        var_21 = ((int) arr_23 [i_5]);
                        arr_28 [i_8] [i_8 - 1] = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)81)))) : (((/* implicit */int) ((unsigned char) (signed char)0)))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_27 [i_9] [i_7] [i_6] [15]))));
                            var_23 = min((((/* implicit */unsigned long long int) 16383U)), (18446744073709551603ULL));
                            var_24 = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_27 [15] [(_Bool)1] [i_6] [i_5])))));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-((+((+(((/* implicit */int) var_0)))))))))));
                            arr_34 [(_Bool)1] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_11)));
                            var_26 = ((/* implicit */long long int) ((short) (~(((524287U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [i_5] [(unsigned char)4] [i_5] [(unsigned char)12] [i_5]))))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((_Bool) (short)-8618)))));
                            var_28 = ((/* implicit */unsigned long long int) 4294950913U);
                        }
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((var_0), (var_6)))) ? (min((var_11), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) (signed char)114))), (arr_38 [i_5] [(unsigned char)2] [i_7]))))));
                            arr_39 [8U] [i_6] [(unsigned short)1] [i_8] [i_12] [22U] [i_12] = ((/* implicit */signed char) var_6);
                        }
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_0))))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_29 [i_7])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 0U)) : (arr_33 [i_5] [(unsigned char)20] [i_13] [i_5] [i_5] [i_5] [i_5]))))), (((/* implicit */long long int) arr_40 [i_5] [i_6] [i_7] [i_8] [i_8])))))));
                            arr_42 [i_13] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (721961786)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5));
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (arr_41 [i_8 + 1] [i_8 - 1] [i_6 - 2])))) ? ((+(max((((/* implicit */unsigned long long int) arr_17 [i_5])), (var_11))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (max((((/* implicit */long long int) var_13)), (var_5))))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        for (short i_15 = 3; i_15 < 24; i_15 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_6 - 1] [20U] [i_15 - 3])) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_17 [i_15 + 1]))))), ((-(min((((/* implicit */long long int) (short)4926)), (arr_18 [i_14] [i_14])))))));
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (unsigned char)214))));
                                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 16404U)) ^ (((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) ? (((/* implicit */unsigned long long int) (~(0)))) : (3197364480124209674ULL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_16 = 1; i_16 < 21; i_16 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) (signed char)-115);
                        var_38 |= ((/* implicit */unsigned long long int) var_10);
                    }
                    /* vectorizable */
                    for (int i_17 = 4; i_17 < 22; i_17 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) : (arr_47 [i_17 + 1] [i_17 - 4] [i_6 + 4]))))));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) 14180504450156563289ULL))));
                    }
                }
            } 
        } 
        arr_55 [i_5] = ((/* implicit */short) min((min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (signed char)-8)) : (446739859)))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_5)))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)-6))))))));
    }
    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
    {
        var_41 = ((/* implicit */long long int) (-(max((((var_12) ? (arr_35 [i_18] [i_18] [(unsigned short)23] [(unsigned short)23] [i_18] [i_18] [i_18]) : (((/* implicit */int) var_10)))), ((-(((/* implicit */int) (signed char)-124))))))));
        arr_58 [i_18] = ((/* implicit */short) min((((unsigned int) arr_0 [(_Bool)1])), (((/* implicit */unsigned int) ((arr_0 [i_18]) && (var_13))))));
    }
    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 2) 
    {
        var_42 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_30 [i_19] [i_19] [23ULL] [23ULL] [(unsigned short)20])) ? (((/* implicit */int) ((_Bool) var_11))) : (((var_13) ? (((/* implicit */int) arr_29 [5U])) : (-826464391))))), (max((((var_13) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) var_13)))), ((~(((/* implicit */int) var_8))))))));
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                for (long long int i_22 = 3; i_22 < 17; i_22 += 2) 
                {
                    {
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) var_9))));
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-119)), (3197364480124209674ULL)))) ? (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) (unsigned char)255))))) : (var_4)))) ? (max((((/* implicit */int) arr_29 [i_22 - 1])), (var_1))) : ((~((~(((/* implicit */int) var_10)))))))))));
                    }
                } 
            } 
        } 
        var_45 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min(((_Bool)1), (var_8)))))));
    }
}
