/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234315
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
    var_10 = ((_Bool) ((unsigned int) ((unsigned short) (unsigned short)6362)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((short) ((unsigned int) var_5)));
        var_11 += ((/* implicit */unsigned short) ((long long int) ((unsigned char) (unsigned char)1)));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) (unsigned short)21702)));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((short) ((unsigned int) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((unsigned long long int) ((short) ((unsigned char) var_0))));
                    var_13 -= ((/* implicit */short) ((_Bool) ((long long int) ((unsigned int) 4294967295U))));
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned char) ((unsigned int) ((signed char) (signed char)88)))))));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_15 = ((/* implicit */_Bool) ((unsigned short) (short)-1));
            var_16 ^= ((/* implicit */unsigned long long int) ((short) ((unsigned int) ((_Bool) 610157992))));
        }
        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((signed char) (signed char)88)));
                            arr_25 [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((_Bool) ((short) ((_Bool) (signed char)-41))));
                        }
                    } 
                } 
            } 
            var_18 += ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) ((short) arr_15 [i_5]))));
        }
        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) ((signed char) var_1))));
            arr_30 [i_9] = ((/* implicit */long long int) ((unsigned int) ((short) ((unsigned int) (unsigned short)65535))));
        }
    }
    for (signed char i_10 = 3; i_10 < 12; i_10 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((int) ((unsigned char) var_9))));
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 2) 
        {
            var_21 = ((/* implicit */long long int) ((unsigned short) (unsigned short)9));
            arr_35 [i_10] [i_11] [i_10] = ((/* implicit */_Bool) ((unsigned char) ((long long int) ((_Bool) arr_16 [i_10] [i_10] [i_11 + 2]))));
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    var_22 = ((/* implicit */signed char) ((_Bool) ((unsigned short) ((unsigned long long int) (signed char)40))));
                    var_23 = ((/* implicit */signed char) ((unsigned long long int) ((long long int) ((signed char) (unsigned short)26478))));
                    var_24 = ((/* implicit */unsigned int) ((unsigned short) ((_Bool) ((unsigned long long int) (signed char)-35))));
                }
                arr_41 [2LL] [i_11] [i_12] &= ((/* implicit */unsigned int) ((unsigned short) ((short) ((unsigned char) (unsigned short)26478))));
                var_25 |= ((/* implicit */unsigned short) ((short) ((long long int) ((signed char) 0ULL))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned int) ((signed char) ((int) ((unsigned int) var_5))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((_Bool) ((_Bool) ((signed char) arr_19 [i_12] [i_12] [i_15])))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 4; i_17 < 10; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_60 [i_10] = ((/* implicit */unsigned char) ((signed char) ((short) ((unsigned char) (signed char)40))));
                            var_28 ^= ((/* implicit */short) ((unsigned int) (unsigned char)255));
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) ((signed char) ((unsigned short) ((_Bool) var_0))));
                var_30 |= ((/* implicit */long long int) ((unsigned long long int) ((_Bool) ((unsigned long long int) arr_17 [i_11]))));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_31 = ((/* implicit */int) ((unsigned int) ((unsigned long long int) ((unsigned int) arr_11 [i_10] [i_11] [i_19] [i_10 - 1]))));
                var_32 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) ((unsigned int) 1741651556U))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    var_33 ^= ((unsigned int) ((_Bool) var_0));
                    var_34 = ((/* implicit */unsigned char) ((int) ((_Bool) var_7)));
                    var_35 = ((/* implicit */unsigned char) ((_Bool) ((signed char) var_3)));
                }
                /* vectorizable */
                for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    arr_69 [i_10] [i_11 + 1] [i_10] [i_21] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (_Bool)1)));
                    var_36 += ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) var_6)));
                }
                for (signed char i_22 = 0; i_22 < 13; i_22 += 3) 
                {
                    var_37 = ((/* implicit */unsigned char) ((_Bool) ((signed char) ((long long int) (unsigned char)242))));
                    var_38 -= ((signed char) ((unsigned long long int) ((signed char) (unsigned char)0)));
                    var_39 += ((long long int) ((_Bool) ((unsigned long long int) (_Bool)0)));
                }
                /* vectorizable */
                for (signed char i_23 = 4; i_23 < 12; i_23 += 2) 
                {
                    var_40 = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_72 [i_10])));
                    var_41 = ((unsigned int) ((long long int) arr_26 [i_11]));
                    arr_77 [i_10] [i_10] = ((/* implicit */unsigned char) ((_Bool) ((long long int) 2660361721U)));
                }
                var_42 &= ((unsigned short) 13491441329055953530ULL);
                arr_78 [i_10] [i_11 + 1] [i_10] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((int) (unsigned short)1))));
            }
        }
        /* vectorizable */
        for (unsigned char i_24 = 2; i_24 < 9; i_24 += 4) 
        {
            var_43 = ((/* implicit */unsigned short) ((signed char) ((_Bool) (_Bool)1)));
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 2; i_25 < 12; i_25 += 2) 
            {
                for (unsigned char i_26 = 1; i_26 < 12; i_26 += 2) 
                {
                    {
                        var_44 += ((unsigned int) ((unsigned int) (unsigned short)1));
                        var_45 = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) (signed char)66)));
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) var_6)));
            arr_86 [i_10] = ((/* implicit */signed char) ((unsigned short) ((short) var_3)));
        }
        for (signed char i_27 = 1; i_27 < 12; i_27 += 2) 
        {
            var_47 &= ((/* implicit */_Bool) ((unsigned int) ((unsigned short) 1965341387069101574LL)));
            var_48 *= ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) ((signed char) var_9))));
            var_49 = ((/* implicit */unsigned char) ((unsigned int) 9405492521292932551ULL));
            /* LoopSeq 1 */
            for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 1) 
            {
                arr_91 [i_10] = ((/* implicit */unsigned short) ((long long int) ((_Bool) ((short) var_7))));
                /* LoopSeq 1 */
                for (int i_29 = 1; i_29 < 11; i_29 += 1) 
                {
                    var_50 = ((/* implicit */unsigned long long int) ((unsigned short) ((short) ((unsigned int) var_6))));
                    var_51 = ((/* implicit */_Bool) ((signed char) ((unsigned int) ((unsigned long long int) arr_87 [i_10] [i_10]))));
                    /* LoopSeq 2 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) ((unsigned char) var_3))));
                        var_53 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((signed char) var_3))));
                    }
                    for (long long int i_31 = 0; i_31 < 13; i_31 += 2) 
                    {
                        var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((unsigned short) ((_Bool) ((unsigned short) (unsigned short)1)))))));
                        arr_100 [i_10] [i_10] [i_10] = ((unsigned int) 67108863ULL);
                        var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) ((signed char) ((int) ((unsigned int) (signed char)95)))))));
                        arr_101 [i_10] [i_10] [i_27] [i_28] [i_29] [i_10] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) ((_Bool) (signed char)-86))));
                    }
                    var_56 -= ((/* implicit */long long int) ((unsigned char) ((long long int) (signed char)4)));
                }
            }
        }
        /* LoopSeq 3 */
        for (long long int i_32 = 0; i_32 < 13; i_32 += 2) 
        {
            var_57 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) ((_Bool) (unsigned short)3))));
            arr_104 [i_10] = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) ((unsigned int) (signed char)-49))));
            var_58 &= ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) ((unsigned short) 35184372088831LL))));
        }
        /* vectorizable */
        for (short i_33 = 2; i_33 < 11; i_33 += 1) 
        {
            arr_107 [i_10] [10LL] |= ((/* implicit */long long int) ((unsigned long long int) ((unsigned short) (_Bool)1)));
            var_59 = ((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)7)));
        }
        /* vectorizable */
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            var_60 -= ((/* implicit */_Bool) ((int) ((short) arr_1 [i_10])));
            var_61 += ((/* implicit */signed char) ((_Bool) ((_Bool) arr_33 [i_10 - 1] [i_34] [i_34])));
            var_62 = ((/* implicit */unsigned short) ((unsigned int) ((short) (signed char)97)));
        }
    }
}
