/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193307
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) var_5);
        var_15 ^= ((/* implicit */unsigned int) var_9);
    }
    for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 4; i_3 < 20; i_3 += 3) 
            {
                {
                    var_16 *= ((/* implicit */short) var_6);
                    var_17 &= ((/* implicit */unsigned int) var_12);
                }
            } 
        } 
        var_18 ^= arr_3 [i_1 - 1];
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_19 = (~(arr_5 [i_4] [i_5] [i_4]));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_11);
                            var_21 = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) var_6);
                        arr_28 [i_5] [i_9] [i_5] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_4]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_24 = (~(((/* implicit */int) var_9)));
                var_25 = ((/* implicit */short) arr_1 [i_4]);
                /* LoopSeq 4 */
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    var_26 = ((/* implicit */signed char) var_10);
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)230))));
                        var_28 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_25 [i_12] [i_4] [i_4]))))));
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_12] [i_12] [i_12])))))));
                        arr_39 [i_4] [i_5] = ((/* implicit */short) arr_31 [(_Bool)1] [(_Bool)1] [i_5]);
                        var_30 = ((/* implicit */signed char) var_9);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        var_31 *= ((/* implicit */unsigned int) var_0);
                        var_32 = ((/* implicit */int) var_3);
                    }
                    for (int i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        arr_46 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] [i_5] = var_5;
                        var_33 = ((/* implicit */signed char) var_9);
                    }
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)51)))))));
                }
                /* vectorizable */
                for (long long int i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    arr_50 [i_5] [i_17] [i_17] = ((/* implicit */long long int) var_6);
                    var_35 = ((/* implicit */int) var_8);
                    var_36 = ((/* implicit */short) arr_34 [i_17] [i_11] [i_5] [i_5] [i_4]);
                    arr_51 [i_4] [i_5] [i_4] [i_4] = (~(((/* implicit */int) (unsigned char)93)));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 1; i_18 < 13; i_18 += 4) 
                    {
                        arr_54 [i_18 - 1] [i_4] [i_5] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(arr_7 [i_5] [i_4])));
                        arr_55 [i_4] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) arr_32 [10] [i_5] [i_5] [i_5]);
                        var_37 = ((/* implicit */short) (-(var_12)));
                        var_38 *= ((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4]);
                    }
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) var_3);
                        arr_61 [i_4] [i_5] [3] [i_4] [3] = ((/* implicit */signed char) var_5);
                    }
                    for (signed char i_21 = 3; i_21 < 12; i_21 += 3) 
                    {
                        var_40 = ((/* implicit */int) var_7);
                        var_41 = (+(((/* implicit */int) var_6)));
                    }
                    arr_64 [i_5] [i_5] [i_5] [i_4] = var_1;
                    var_42 = ((/* implicit */short) var_3);
                    var_43 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)230))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 4; i_22 < 11; i_22 += 1) 
                    {
                        var_44 = ((/* implicit */short) var_7);
                        var_45 *= ((/* implicit */unsigned int) var_11);
                        var_46 = ((/* implicit */short) var_2);
                        var_47 = ((/* implicit */unsigned int) var_2);
                    }
                }
                /* vectorizable */
                for (unsigned char i_23 = 3; i_23 < 11; i_23 += 1) 
                {
                    var_48 = ((/* implicit */short) arr_56 [(signed char)7] [i_23 + 3] [i_5] [i_5] [(short)11] [i_4]);
                    var_49 = ((/* implicit */unsigned char) arr_69 [i_23 - 3]);
                }
                arr_72 [i_5] = var_7;
            }
        }
        /* vectorizable */
        for (unsigned char i_24 = 3; i_24 < 11; i_24 += 1) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_43 [i_24] [i_4] [i_4]))));
            var_51 ^= ((/* implicit */short) arr_19 [i_4]);
        }
        for (unsigned char i_25 = 3; i_25 < 11; i_25 += 1) /* same iter space */
        {
            arr_79 [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)227))));
            var_52 = ((/* implicit */unsigned char) var_12);
        }
        for (signed char i_26 = 0; i_26 < 15; i_26 += 4) 
        {
            var_53 *= ((/* implicit */unsigned char) arr_8 [i_4] [(signed char)14] [22]);
            var_54 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
            var_55 = var_4;
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 3) 
        {
            var_56 = ((/* implicit */int) arr_17 [i_27] [i_27]);
            var_57 = ((/* implicit */int) arr_7 [i_4] [i_4]);
            arr_87 [i_4] [i_4] [i_27] = arr_13 [i_27];
        }
        var_58 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_4]))));
    }
    var_59 &= var_1;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_28 = 0; i_28 < 16; i_28 += 1) 
    {
        var_60 = ((/* implicit */signed char) arr_6 [i_28] [23U] [23U]);
        /* LoopNest 2 */
        for (signed char i_29 = 0; i_29 < 16; i_29 += 2) 
        {
            for (unsigned int i_30 = 0; i_30 < 16; i_30 += 1) 
            {
                {
                    var_61 = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 4 */
                    for (short i_31 = 4; i_31 < 12; i_31 += 3) 
                    {
                        arr_96 [i_28] [i_28] [i_28] = ((/* implicit */int) var_9);
                        /* LoopSeq 4 */
                        for (unsigned char i_32 = 0; i_32 < 16; i_32 += 3) /* same iter space */
                        {
                            var_62 = (!(((/* implicit */_Bool) var_1)));
                            var_63 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                        }
                        for (unsigned char i_33 = 0; i_33 < 16; i_33 += 3) /* same iter space */
                        {
                            var_64 = ((/* implicit */unsigned char) min((var_64), (((/* implicit */unsigned char) var_4))));
                            var_65 = ((/* implicit */short) var_3);
                            var_66 = ((/* implicit */int) var_11);
                        }
                        for (unsigned char i_34 = 0; i_34 < 16; i_34 += 3) /* same iter space */
                        {
                            var_67 &= ((/* implicit */unsigned int) arr_4 [i_30]);
                            var_68 = ((/* implicit */signed char) arr_100 [i_34] [i_34] [i_31 - 1] [(signed char)1] [i_28]);
                            var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) var_10))));
                        }
                        for (unsigned char i_35 = 0; i_35 < 16; i_35 += 3) /* same iter space */
                        {
                            arr_105 [i_28] = ((/* implicit */unsigned long long int) arr_9 [i_35] [i_35] [i_28]);
                            var_70 -= ((/* implicit */unsigned char) var_3);
                        }
                        var_71 += ((/* implicit */_Bool) var_2);
                    }
                    for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) /* same iter space */
                    {
                        var_72 = ((/* implicit */short) var_0);
                        var_73 = ((/* implicit */_Bool) var_9);
                    }
                    for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) /* same iter space */
                    {
                        var_74 = ((/* implicit */signed char) var_0);
                        /* LoopSeq 1 */
                        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                        {
                            var_75 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)179))));
                            var_76 ^= ((/* implicit */unsigned char) (-(arr_88 [i_37 + 1])));
                        }
                    }
                    for (_Bool i_39 = 0; i_39 < 0; i_39 += 1) /* same iter space */
                    {
                        var_77 = ((/* implicit */signed char) (-(arr_110 [i_39 + 1] [8] [i_39 + 1] [i_39])));
                        var_78 = ((/* implicit */signed char) var_0);
                        arr_115 [i_29] [i_29] [i_29] [i_28] &= ((/* implicit */unsigned int) (-(17018297758898400757ULL)));
                        var_79 = ((/* implicit */int) min((var_79), (var_0)));
                    }
                    var_80 = ((/* implicit */short) var_5);
                    var_81 = ((/* implicit */short) var_7);
                }
            } 
        } 
    }
    var_82 = var_5;
}
