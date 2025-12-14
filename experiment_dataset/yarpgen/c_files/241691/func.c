/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241691
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (var_3)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned int) (short)-15134));
        arr_3 [i_0 - 2] = ((/* implicit */int) ((_Bool) ((unsigned short) (unsigned char)214)));
    }
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) var_2)));
                        var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) var_8)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((int) ((short) var_0))))));
                        arr_24 [i_1] [i_5] [i_5] = ((unsigned long long int) ((unsigned long long int) (short)-10061));
                        arr_25 [i_1] [i_5] [i_6] [1LL] = ((/* implicit */unsigned long long int) ((int) ((_Bool) arr_8 [i_1] [i_6])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_17 |= ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) var_10)));
                        arr_33 [i_1] [i_1] [i_8] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) arr_19 [i_9 + 1] [(unsigned short)0] [i_10 + 1] [i_10])));
                        arr_34 [i_1] [i_1] [i_8] [i_1] = ((/* implicit */long long int) ((_Bool) ((unsigned char) var_10)));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_37 [i_1] [i_8] [i_9] [i_10] [2] = ((/* implicit */_Bool) ((int) ((int) arr_9 [i_11] [i_11] [i_10 + 1])));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) ((int) var_3))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            arr_40 [0LL] [i_8 + 1] [i_9] [i_10 + 1] [i_12] &= ((/* implicit */unsigned short) ((signed char) (short)9644));
                            arr_41 [i_1] [i_1] [i_8] [i_9] [i_10 + 1] [2U] [i_8] = ((/* implicit */int) ((unsigned short) arr_35 [i_8] [i_10 + 1] [i_8] [i_10] [i_10 + 1] [i_10 + 1] [i_10]));
                            arr_42 [i_8] [i_10] = ((/* implicit */short) ((unsigned char) 140764180U));
                            arr_43 [i_1] [i_1] [i_1] [(short)9] [i_8] = ((/* implicit */long long int) ((unsigned int) var_8));
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_46 [i_13] = ((/* implicit */int) ((unsigned int) ((int) 993627720)));
        /* LoopNest 3 */
        for (unsigned char i_14 = 1; i_14 < 14; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                for (long long int i_16 = 1; i_16 < 14; i_16 += 3) 
                {
                    {
                        arr_56 [i_13] [i_16] [14U] [i_16] &= ((/* implicit */unsigned short) ((_Bool) ((unsigned int) var_5)));
                        arr_57 [(_Bool)1] [2LL] [i_16] |= ((/* implicit */short) ((unsigned int) ((short) var_5)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
            {
                {
                    arr_63 [i_18] = ((unsigned short) ((unsigned short) arr_50 [2ULL] [i_13] [i_17] [i_17]));
                    arr_64 [i_13] [(short)12] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) arr_49 [i_18] [i_17] [0ULL])));
                    var_19 = ((/* implicit */short) ((long long int) ((unsigned short) 3567434815U)));
                    var_20 = ((/* implicit */unsigned long long int) ((short) ((_Bool) arr_45 [i_13])));
                    arr_65 [i_13] [i_13] [i_18] = ((/* implicit */unsigned short) ((unsigned char) 3567434844U));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) 3567434815U))))));
    }
    for (int i_19 = 0; i_19 < 22; i_19 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((unsigned short) ((unsigned int) var_2)));
        arr_70 [i_19] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_67 [i_19] [i_19])));
        arr_71 [i_19] = ((/* implicit */_Bool) ((unsigned char) ((short) arr_68 [i_19] [i_19])));
    }
    /* LoopNest 2 */
    for (signed char i_20 = 3; i_20 < 12; i_20 += 3) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            {
                var_23 += ((/* implicit */int) ((unsigned char) ((signed char) arr_55 [i_20 + 1] [(short)12] [i_20] [i_20 + 1])));
                /* LoopSeq 3 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 2; i_23 < 11; i_23 += 3) 
                    {
                        for (short i_24 = 1; i_24 < 12; i_24 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned char) ((int) ((unsigned int) arr_83 [i_20] [i_21] [i_22 - 1] [i_20] [i_24] [i_22] [i_24 - 1])));
                                arr_84 [i_20] [i_21] [12U] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) arr_45 [i_22 - 1])));
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)0));
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 13; i_25 += 3) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 13; i_26 += 3) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned short) ((int) ((long long int) (unsigned short)0)));
                                arr_90 [i_20] [i_20] [i_21] [i_20] [(_Bool)1] [i_26] = ((/* implicit */unsigned char) ((short) ((signed char) var_8)));
                                arr_91 [i_20] [i_25] [i_22] [i_21] [i_20] = ((/* implicit */unsigned int) ((int) ((signed char) arr_81 [i_20 - 1] [i_20])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_27 = 1; i_27 < 10; i_27 += 3) 
                {
                    arr_95 [i_27] [i_20] = ((/* implicit */_Bool) ((signed char) var_2));
                    /* LoopNest 2 */
                    for (short i_28 = 0; i_28 < 13; i_28 += 3) 
                    {
                        for (short i_29 = 0; i_29 < 13; i_29 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((short) arr_97 [i_27 + 2] [i_27 + 2] [i_20 + 1] [i_20 - 3]));
                                arr_101 [i_20 - 3] [i_20] [i_20 - 1] [2] [i_20] = ((/* implicit */short) ((_Bool) arr_61 [i_27] [i_20] [i_27]));
                                var_28 = ((/* implicit */unsigned long long int) ((unsigned char) 4294967295U));
                            }
                        } 
                    } 
                }
                for (long long int i_30 = 0; i_30 < 13; i_30 += 3) 
                {
                    arr_104 [i_20] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) (short)-31864)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_31 = 1; i_31 < 11; i_31 += 3) 
                    {
                        for (int i_32 = 3; i_32 < 11; i_32 += 3) 
                        {
                            {
                                var_29 += ((_Bool) ((unsigned int) (short)26622));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((short) ((short) (-2147483647 - 1)))))));
                                var_31 = ((/* implicit */int) ((unsigned long long int) ((_Bool) (short)26622)));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) ((signed char) ((unsigned char) arr_49 [i_20 + 1] [i_20 - 3] [i_20])));
                    arr_111 [i_20] [i_20] [i_20 - 3] = ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) var_6)));
                }
            }
        } 
    } 
}
