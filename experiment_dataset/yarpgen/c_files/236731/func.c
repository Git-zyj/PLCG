/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236731
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
    var_20 &= ((/* implicit */unsigned char) (short)3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) (signed char)-69);
            arr_5 [i_0] = (signed char)-14;
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((long long int) (signed char)14)))));
            arr_8 [i_0] = ((/* implicit */unsigned char) 440464241);
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) 440464241));
        }
        arr_10 [i_0] = ((/* implicit */long long int) ((int) (signed char)12));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (short)24831))));
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        arr_22 [i_3] [i_4] [(unsigned short)12] [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((unsigned char) 532676608U)));
                        arr_23 [i_3] [i_5] [(_Bool)1] [i_3] = ((signed char) ((unsigned long long int) 3762290692U));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) 536805376U))));
        }
        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) ((int) (unsigned char)224));
                    arr_30 [i_3 + 2] [i_3] [i_3 + 1] [3U] = ((/* implicit */unsigned int) ((long long int) (unsigned char)6));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        arr_33 [i_3] [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 1] [i_3] = ((/* implicit */unsigned int) ((signed char) ((long long int) (_Bool)1)));
                        var_26 -= ((/* implicit */unsigned int) ((int) 4290406108535057608ULL));
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) -323779768242546650LL))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((long long int) ((unsigned long long int) (signed char)-14))))));
                    }
                    for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        arr_39 [i_3] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] = ((/* implicit */int) ((short) 2067097224292628785LL));
                        var_29 = 4960328572935016228ULL;
                        arr_40 [i_3] [14] [i_3] [i_9] [i_12] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) (unsigned char)245)));
                        arr_41 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_9] [i_3] [i_12] = ((/* implicit */unsigned long long int) (unsigned short)23006);
                        var_30 -= ((/* implicit */unsigned short) ((unsigned long long int) ((int) 13207740410580192356ULL)));
                    }
                }
                for (long long int i_13 = 2; i_13 < 13; i_13 += 4) 
                {
                    arr_45 [i_3] [i_3] [i_3] [i_3] [11ULL] = ((/* implicit */unsigned int) 13486415500774535373ULL);
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 4) 
                    {
                        arr_49 [(unsigned char)7] [(unsigned char)7] [i_3] [13ULL] [i_14] = ((unsigned char) ((short) (signed char)100));
                        var_31 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) 11950068221670712977ULL)));
                        arr_50 [i_3] = ((unsigned int) ((_Bool) ((long long int) -456077685)));
                        arr_51 [i_3] [i_8] [16LL] [i_14 + 1] = ((/* implicit */short) 7313831156915539589ULL);
                    }
                    for (short i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        arr_54 [i_3] [i_3] [10U] [(_Bool)1] [i_3] [i_15] [i_3] = ((/* implicit */unsigned char) ((_Bool) ((_Bool) 268435456U)));
                        arr_55 [(unsigned short)12] [i_7] [(_Bool)1] [i_13] [i_3] = ((/* implicit */short) (unsigned short)7);
                    }
                    for (signed char i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        arr_60 [i_3 - 1] [i_7 - 2] [i_8] [i_7 - 2] [i_3] [(unsigned short)0] = 536870912U;
                        var_32 -= ((/* implicit */unsigned char) ((int) (signed char)1));
                    }
                    arr_61 [i_8] [9U] [i_3] [i_13 - 1] = ((/* implicit */unsigned int) ((int) ((short) 574773103U)));
                }
                for (unsigned char i_17 = 3; i_17 < 16; i_17 += 1) 
                {
                    arr_64 [i_3] [i_7] [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned int) ((long long int) 3545668701U));
                    arr_65 [(_Bool)1] [(unsigned char)1] [i_8] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((int) -426475777)));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 1; i_18 < 16; i_18 += 4) 
                    {
                        arr_68 [4ULL] [i_3] [i_8 + 1] [i_3] [i_3 + 1] = ((/* implicit */long long int) ((unsigned int) 18446744073709551615ULL));
                        arr_69 [i_3 + 1] [i_7 - 1] [i_3] [i_17 + 1] [i_18 - 1] = ((/* implicit */unsigned int) ((unsigned char) ((int) (_Bool)0)));
                        var_33 = ((/* implicit */long long int) (_Bool)0);
                    }
                    arr_70 [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) (short)-21299)));
                }
                for (unsigned char i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    arr_73 [2U] [i_3] [i_3] [i_7 - 2] [(unsigned short)11] [i_19] = ((_Bool) 1821547149U);
                    arr_74 [i_3] [i_3] [(short)16] = ((/* implicit */long long int) ((unsigned long long int) ((long long int) (unsigned char)96)));
                }
                arr_75 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) (signed char)100)));
            }
            for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 17; i_22 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) (unsigned char)173);
                            arr_85 [3U] [i_7] [i_3] [i_21] [i_7] = ((/* implicit */_Bool) -646579137834737105LL);
                        }
                    } 
                } 
                arr_86 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                var_35 = ((/* implicit */long long int) ((unsigned int) ((short) 0ULL)));
            }
            arr_87 [i_3] = ((/* implicit */_Bool) ((unsigned long long int) 15457372477838602837ULL));
        }
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((_Bool) ((unsigned int) 1731879255475869368ULL))))));
        arr_88 [(_Bool)1] &= ((/* implicit */unsigned int) ((long long int) ((int) ((unsigned char) (unsigned short)54072))));
    }
    for (unsigned int i_23 = 4; i_23 < 10; i_23 += 4) 
    {
        arr_91 [i_23] = ((/* implicit */long long int) ((int) ((unsigned long long int) (unsigned char)221)));
        arr_92 [(unsigned char)4] [4LL] = ((signed char) ((unsigned long long int) (short)31021));
    }
    var_37 = ((/* implicit */signed char) ((unsigned int) 3306166520U));
    var_38 = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_14)));
    var_39 = ((/* implicit */unsigned long long int) 2555577515U);
}
