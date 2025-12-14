/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20576
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_0 + 1]);
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2]);
                        var_20 -= ((/* implicit */unsigned short) arr_12 [i_2 - 3] [i_2 - 3] [i_2 + 1]);
                        var_21 = ((/* implicit */signed char) arr_7 [i_0 + 1] [i_0] [i_0 - 1]);
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */unsigned int) (-(arr_10 [i_0] [i_0] [i_0 - 1])));
        }
        var_22 &= ((/* implicit */signed char) (~(16944989157830837530ULL)));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_16 [i_4 - 1]))))));
        var_24 = ((/* implicit */unsigned short) arr_16 [i_4]);
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) arr_16 [i_5]);
            var_25 -= ((/* implicit */unsigned char) (~(arr_18 [i_6 - 1])));
        }
        for (int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_26 [i_8 + 3] [i_8] [i_8 + 1]))));
                            var_27 += ((/* implicit */signed char) arr_16 [7]);
                            var_28 = ((/* implicit */unsigned long long int) arr_26 [i_10 + 2] [i_10 - 2] [i_10]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_29 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_11]))));
                            arr_39 [i_5] [i_7] [i_7] [i_8] [i_11] [i_12] = ((/* implicit */_Bool) arr_24 [i_5] [i_11]);
                            var_30 = ((/* implicit */long long int) arr_18 [5]);
                            var_31 *= ((/* implicit */unsigned int) arr_34 [(_Bool)1] [i_5] [i_5] [i_11 - 2]);
                        }
                    } 
                } 
                arr_40 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */short) arr_30 [i_8 + 2] [i_7]);
                var_32 = ((/* implicit */signed char) arr_21 [i_5] [i_7]);
                arr_41 [i_7] = ((/* implicit */_Bool) arr_21 [i_7] [i_7]);
            }
            for (unsigned int i_13 = 1; i_13 < 13; i_13 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 14; i_14 += 3) 
                {
                    for (int i_15 = 3; i_15 < 12; i_15 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) arr_30 [i_7] [i_7]);
                            var_34 -= ((/* implicit */_Bool) arr_34 [i_5] [(short)0] [i_13] [i_14 + 2]);
                            arr_51 [i_5] [i_7] [i_13] [i_7] [i_15] = ((/* implicit */unsigned long long int) (~(arr_29 [i_7] [i_14] [i_14 + 1] [i_15 + 4])));
                        }
                    } 
                } 
                var_35 = arr_26 [i_13 - 1] [i_13 + 2] [i_13 - 1];
            }
            var_36 = ((/* implicit */unsigned long long int) arr_37 [i_5] [(_Bool)1] [i_7] [i_7] [i_7]);
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 3) 
                {
                    for (short i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        {
                            var_37 = arr_17 [(signed char)15];
                            var_38 = ((/* implicit */signed char) (~(arr_19 [(signed char)8] [i_7])));
                            var_39 = ((/* implicit */unsigned char) arr_38 [i_17] [i_16 + 1] [i_7]);
                            arr_62 [i_7] [i_17] = (-(arr_37 [i_5] [i_7] [i_16 + 1] [i_17] [i_18]));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned int i_19 = 2; i_19 < 15; i_19 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_20 = 2; i_20 < 14; i_20 += 3) 
            {
                var_40 += ((/* implicit */unsigned char) arr_63 [i_5] [i_5] [i_5]);
                /* LoopSeq 2 */
                for (unsigned short i_21 = 1; i_21 < 13; i_21 += 3) 
                {
                    arr_72 [i_19] [i_19] [i_20] [1U] = ((/* implicit */unsigned int) arr_60 [i_20 + 1] [i_20] [i_20] [i_20 - 1] [i_20 - 2]);
                    arr_73 [i_5] [i_19 - 2] [i_20 - 1] [i_21] [i_19] = ((/* implicit */signed char) (-(5ULL)));
                    var_41 = (~(arr_69 [i_5] [i_19 - 2] [i_19 - 2] [i_21 + 3] [i_20 + 1]));
                }
                for (unsigned int i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    var_42 = ((/* implicit */unsigned int) arr_67 [i_5] [i_5]);
                    var_43 &= ((/* implicit */signed char) arr_56 [i_5]);
                    arr_76 [i_19] [i_20] = ((/* implicit */long long int) arr_15 [i_19]);
                    arr_77 [i_5] [i_5] [i_19] [i_19] [i_22] = ((/* implicit */unsigned int) arr_16 [i_19 - 2]);
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (~(arr_25 [i_5] [i_5]))))));
                }
                var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) arr_21 [8] [8]))));
                arr_78 [i_5] [9ULL] [i_19] [i_19] = ((/* implicit */unsigned int) (+(1058344924)));
            }
            for (int i_23 = 3; i_23 < 12; i_23 += 3) 
            {
                var_46 = ((/* implicit */unsigned long long int) arr_35 [i_19] [i_23] [i_23] [i_23]);
                arr_81 [i_19] [i_19] = arr_52 [i_5] [i_5] [i_23 - 1];
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                var_47 = ((/* implicit */_Bool) arr_80 [i_19] [i_19 + 1] [i_24]);
                var_48 = ((/* implicit */signed char) arr_17 [i_5]);
            }
            for (int i_25 = 0; i_25 < 16; i_25 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_91 [i_5] [i_19] [i_25] [i_26] = ((/* implicit */signed char) (~(arr_60 [i_19] [i_19] [i_19] [i_19 - 2] [i_19 + 1])));
                    arr_92 [i_19] = ((/* implicit */signed char) arr_20 [i_5]);
                    /* LoopSeq 3 */
                    for (unsigned char i_27 = 2; i_27 < 15; i_27 += 3) /* same iter space */
                    {
                        var_49 = ((/* implicit */signed char) (~(arr_34 [i_5] [i_27 - 1] [i_19 - 2] [i_26])));
                        var_50 = ((/* implicit */short) arr_93 [13ULL] [i_19] [i_19] [i_19 - 1] [i_27 + 1]);
                        var_51 = ((/* implicit */unsigned short) arr_82 [i_19] [i_19 + 1]);
                        var_52 += ((/* implicit */unsigned short) arr_17 [i_19]);
                    }
                    for (unsigned char i_28 = 2; i_28 < 15; i_28 += 3) /* same iter space */
                    {
                        var_53 = arr_82 [i_26] [i_19 - 1];
                        arr_97 [(_Bool)1] [i_19 + 1] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) arr_53 [i_19 - 1] [i_19 - 2] [i_28 + 1]);
                    }
                    for (short i_29 = 3; i_29 < 14; i_29 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned char) (-(arr_54 [i_26] [i_19])));
                        var_55 &= ((/* implicit */int) arr_100 [0] [i_19] [i_25] [(unsigned short)8] [i_26] [i_26] [i_29 + 1]);
                        arr_102 [i_19] [i_19] [i_26] [i_29] = ((/* implicit */long long int) arr_18 [i_26]);
                        var_56 += ((/* implicit */long long int) arr_85 [i_19] [i_25] [i_26]);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_30 = 0; i_30 < 16; i_30 += 1) 
                {
                    arr_105 [i_5] [i_19] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_55 [i_19 - 2] [i_19] [i_30] [i_30] [i_30] [i_30]))));
                    /* LoopSeq 3 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        arr_110 [i_31] [i_19] [i_5] = ((/* implicit */unsigned char) arr_45 [i_19] [i_19]);
                        var_57 = arr_19 [i_19 + 1] [i_19 + 1];
                        var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_38 [i_25] [i_25] [i_25])))))));
                        var_59 = arr_54 [i_5] [i_5];
                        var_60 = arr_108 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] [i_19 - 2];
                    }
                    for (long long int i_32 = 0; i_32 < 16; i_32 += 2) 
                    {
                        var_61 = ((/* implicit */short) arr_103 [i_5]);
                        var_62 ^= ((/* implicit */unsigned long long int) (-(-1715320968380790914LL)));
                        arr_113 [(unsigned short)10] [i_32] [(unsigned short)10] |= ((/* implicit */unsigned int) (-(arr_32 [i_19] [i_32] [i_19 - 1] [i_19] [12])));
                    }
                    for (unsigned char i_33 = 1; i_33 < 14; i_33 += 4) 
                    {
                        var_63 = ((/* implicit */long long int) min((var_63), (((/* implicit */long long int) arr_44 [i_33 + 1] [i_30] [i_19]))));
                        var_64 = arr_108 [i_33 - 1] [(signed char)7] [i_33 + 2] [i_33] [i_33] [(short)5] [(_Bool)1];
                    }
                }
                arr_116 [i_5] [i_5] [i_5] [i_19] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_74 [i_19 - 1] [i_19] [i_19 - 2] [i_19 - 1]))));
                arr_117 [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [(signed char)4]))));
            }
            var_65 = ((/* implicit */signed char) arr_90 [i_19] [i_19 - 2] [i_19 - 2] [i_19 + 1]);
        }
        for (unsigned long long int i_34 = 0; i_34 < 16; i_34 += 3) 
        {
            var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) arr_87 [0] [0]))));
            var_67 = ((/* implicit */unsigned char) max((var_67), (((/* implicit */unsigned char) arr_33 [i_5] [i_5] [i_34] [i_34]))));
            var_68 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_5] [14LL] [i_5] [i_5] [i_5]))));
        }
        for (signed char i_35 = 0; i_35 < 16; i_35 += 3) 
        {
            var_69 = ((/* implicit */unsigned long long int) arr_106 [i_35]);
            var_70 = ((/* implicit */short) (~(64432669)));
            arr_122 [i_5] [i_5] = (~((-(((/* implicit */int) arr_59 [i_35] [i_5] [(unsigned char)0] [i_5] [i_5])))));
        }
    }
    var_71 = ((/* implicit */unsigned int) var_6);
}
