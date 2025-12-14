/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244019
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [i_3] [i_1])), ((unsigned short)52726))));
                            arr_14 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) ? (arr_9 [i_1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                            var_11 = ((/* implicit */int) (-((-(arr_2 [i_0])))));
                            var_12 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)239)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_5)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2626732677U)) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52744))))))))));
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 7; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (signed char i_8 = 1; i_8 < 8; i_8 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (unsigned char)17);
                                arr_31 [i_8] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_27 [i_4] [i_4] [i_4] [i_4]);
                                var_15 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_27 [i_4] [i_4] [i_4] [i_4 - 2]), (((/* implicit */unsigned int) (unsigned char)255))))) ? (min(((~(3282654416227285430ULL))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) var_1)) : ((~(arr_8 [i_4] [i_5] [i_6]))))))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 7; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (short)-7222))))) ? (((/* implicit */int) ((unsigned short) 8253071945782857429LL))) : (((((/* implicit */int) arr_30 [i_4] [i_5] [i_6] [i_9] [i_10] [i_10])) + (arr_8 [i_4] [i_4] [i_4])))))));
                                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_4 - 1] [i_5 - 1] [i_6 + 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 + 1] [i_5 - 1] [i_6 - 1]))) % (var_3)))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((short) ((((/* implicit */int) (unsigned short)9754)) << (((arr_10 [i_4 + 1] [i_5 + 2] [i_6 + 3] [i_9 + 1]) - (1774100683)))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) min((max((((/* implicit */long long int) (_Bool)1)), (-6942445187527330565LL))), (((/* implicit */long long int) arr_1 [i_6 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                arr_43 [i_5] [i_11] [i_6] [i_5] [i_5] = ((/* implicit */short) min((max((arr_12 [i_12] [i_12 + 1] [i_5] [i_5] [i_4 + 1] [i_4]), (((/* implicit */unsigned long long int) arr_37 [i_4] [i_5] [i_4] [i_4] [i_4])))), (((/* implicit */unsigned long long int) arr_35 [i_4] [i_5]))));
                                arr_44 [i_5] [i_5] [i_5] [i_5] [i_12] = ((/* implicit */unsigned int) (unsigned short)23904);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_14 = 3; i_14 < 17; i_14 += 1) 
        {
            var_21 = arr_49 [i_13] [i_14] [i_14 + 1];
            arr_50 [i_13] = ((/* implicit */long long int) ((unsigned int) 800330708));
            /* LoopNest 2 */
            for (unsigned char i_15 = 3; i_15 < 18; i_15 += 4) 
            {
                for (long long int i_16 = 4; i_16 < 16; i_16 += 4) 
                {
                    {
                        arr_56 [i_13] [i_16] [i_15] [i_14] [i_13] [i_13] = 8253071945782857429LL;
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_54 [i_14] [i_15 + 1]))));
                        arr_57 [i_13] = ((10184093951901583605ULL) >> (((((/* implicit */int) (unsigned char)158)) - (106))));
                        arr_58 [i_13] [i_14] [i_13] [i_16] = ((/* implicit */signed char) arr_51 [i_14] [i_15] [i_16]);
                    }
                } 
            } 
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_18 = 1; i_18 < 19; i_18 += 3) 
            {
                for (unsigned char i_19 = 4; i_19 < 17; i_19 += 2) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) var_3));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_62 [i_19] [i_18 - 1] [i_17 - 1]))));
                            arr_70 [i_13] [i_19] [i_13] = ((/* implicit */_Bool) ((unsigned short) ((arr_65 [i_20]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_71 [i_13] [i_17] [i_13] = ((/* implicit */short) (unsigned char)156);
            var_24 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-86)) + (2147483647))) << ((((+(((/* implicit */int) (signed char)122)))) - (122)))));
        }
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
        {
            arr_76 [i_13] = ((/* implicit */_Bool) var_3);
            /* LoopNest 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (int i_23 = 2; i_23 < 19; i_23 += 2) 
                {
                    for (long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_54 [i_21] [i_21])) : (((/* implicit */int) arr_77 [i_21] [i_21] [i_21] [i_21 - 1]))));
                            var_26 += ((/* implicit */signed char) var_4);
                            var_27 &= ((/* implicit */unsigned int) 8253071945782857420LL);
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) arr_68 [i_23] [i_13] [i_23 - 2]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_25 = 1; i_25 < 18; i_25 += 2) 
            {
                for (unsigned int i_26 = 1; i_26 < 17; i_26 += 2) 
                {
                    for (long long int i_27 = 0; i_27 < 20; i_27 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) 0U);
                            var_30 = ((/* implicit */unsigned long long int) var_10);
                            var_31 = ((/* implicit */unsigned short) arr_67 [i_13] [i_13]);
                            var_32 = ((/* implicit */unsigned long long int) ((long long int) arr_64 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_25 - 1] [i_25 - 1]));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_28 - 1] [i_13])))));
            var_34 = ((/* implicit */short) ((_Bool) (unsigned char)97));
            arr_94 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) 8262650121807968011ULL);
            arr_95 [i_13] [i_13] [i_28] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)158)))));
        }
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 20; i_29 += 1) 
        {
            for (unsigned long long int i_30 = 0; i_30 < 20; i_30 += 2) 
            {
                for (signed char i_31 = 0; i_31 < 20; i_31 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_32 = 1; i_32 < 19; i_32 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) var_0);
                            var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_32 + 1] [i_32] [i_32] [i_32] [i_32])) != (((/* implicit */int) (_Bool)1))));
                        }
                        var_37 = ((/* implicit */signed char) max((var_37), (((signed char) arr_78 [i_13] [i_30]))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12599803147815246986ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (943791468375241720ULL)));
        arr_106 [i_13] = ((/* implicit */unsigned int) (unsigned short)9381);
    }
}
