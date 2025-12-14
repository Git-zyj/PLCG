/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210234
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
    var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_8)))) ? (var_1) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-21962)), (0U)))))) + (max((var_1), (((/* implicit */unsigned long long int) var_3))))));
    var_11 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((313262052U) + (((/* implicit */unsigned int) var_8))))) : ((+(var_1))))));
    var_12 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1077996886)) || (((/* implicit */_Bool) arr_3 [i_0])))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_3] [i_1 + 3])) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) (signed char)7))))));
                            }
                        } 
                    } 
                    var_14 = ((arr_2 [i_1 + 2] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 + 4] [i_1 + 4]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_0] [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) (unsigned short)65535);
                        var_15 &= ((/* implicit */unsigned char) ((arr_15 [6LL] [i_2] [i_2]) == (((/* implicit */unsigned long long int) 1077996886))));
                    }
                    for (unsigned int i_6 = 4; i_6 < 20; i_6 += 1) 
                    {
                        var_16 -= ((/* implicit */unsigned int) var_9);
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_5 [(unsigned short)6] [(unsigned short)6] [i_2]))))))))));
                        arr_20 [i_6] [i_2] = ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_6]);
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [14])))))));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1 + 4])) == (((/* implicit */int) arr_16 [i_1] [i_1] [(unsigned short)15] [i_1 + 4]))));
                }
            } 
        } 
        arr_21 [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0] [(unsigned char)12];
        var_20 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
    }
    for (short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_7] [(signed char)6] [i_7] [2U] [i_9] = ((/* implicit */unsigned char) arr_31 [i_7] [i_7] [i_7] [i_7] [i_7]);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_11] [i_11 - 1] [i_11 - 2] [i_11 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 19; i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_7] [i_7] [i_7] [2U] [i_7] |= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (2051801141U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7])))))) != (((((/* implicit */_Bool) arr_28 [(unsigned short)18] [i_7] [i_8] [(unsigned short)16])) ? (arr_14 [i_7] [(_Bool)1] [i_9] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7])))))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [17] [i_12 - 2] [i_12 - 2] [(unsigned char)8] [i_9]))));
                        }
                        arr_42 [i_7] [i_7] &= ((/* implicit */int) max((4156557163U), (((/* implicit */unsigned int) (_Bool)0))));
                    }
                } 
            } 
        } 
        arr_43 [i_7] [5ULL] = ((/* implicit */int) (-(min((1810671234U), (((/* implicit */unsigned int) 1077996886))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned char) arr_29 [i_13])))));
                        arr_53 [i_13] [i_13] [(_Bool)1] [i_7] &= ((/* implicit */_Bool) arr_32 [i_7] [i_7] [(signed char)4]);
                        var_25 = (~(((/* implicit */int) var_9)));
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            arr_58 [i_7] [i_13] [i_7] [(unsigned short)1] [19U] [i_7] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_13] [i_13] [i_13] [i_14 + 3]))));
                            var_26 += ((/* implicit */unsigned short) arr_30 [i_7] [i_16]);
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_7])) == (((/* implicit */int) arr_8 [i_15])))) && (((/* implicit */_Bool) arr_35 [i_14] [(unsigned short)6] [i_14 + 2]))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7])) || (((/* implicit */_Bool) arr_40 [i_7] [i_14] [i_14] [i_7] [i_17] [i_14] [i_7])))))) >= (var_0)))));
                            var_29 *= ((/* implicit */unsigned short) ((((long long int) arr_51 [(unsigned char)17] [i_13] [i_14] [(unsigned char)17] [(unsigned char)17] [i_13])) == (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_14 + 1] [i_14 + 1] [19U] [i_14] [i_14 + 2] [i_15] [i_14])))));
                        }
                    }
                } 
            } 
            var_30 |= ((/* implicit */unsigned short) ((arr_15 [i_13] [i_13] [i_13]) % (arr_15 [i_7] [i_7] [(unsigned short)18])));
            /* LoopNest 3 */
            for (signed char i_18 = 1; i_18 < 19; i_18 += 2) 
            {
                for (int i_19 = 2; i_19 < 20; i_19 += 2) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_64 [i_7])))))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36277)) - (((/* implicit */int) (short)-21859)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                for (int i_22 = 2; i_22 < 20; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_71 [i_21] [i_22 - 1] [i_22 - 1] [i_22 - 1])) ? (((/* implicit */int) arr_7 [i_7] [i_22 + 1] [i_7])) : (((/* implicit */int) arr_61 [i_7] [(_Bool)1] [i_22 - 1])))))));
                            var_34 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)18))));
                            arr_82 [20U] [(unsigned char)8] [i_7] [(unsigned char)8] [(unsigned char)8] |= ((/* implicit */long long int) ((unsigned long long int) arr_27 [i_22]));
                            var_35 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_7] [i_13] [i_7] [(short)11] [i_13] [(short)11])) || (((/* implicit */_Bool) arr_59 [i_7] [(_Bool)1] [9U])))))) / (((((/* implicit */unsigned long long int) arr_78 [13LL])) * (arr_2 [i_7] [(short)8]))));
                            arr_83 [i_7] [i_7] [i_13] [i_13] [i_7] [i_22 - 1] [i_23] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_37 [6U] [6U] [6U] [i_7])) / (((/* implicit */int) var_6)))) * (((/* implicit */int) arr_44 [i_13]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_24 = 1; i_24 < 20; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 21; i_25 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) -5597167133428542912LL);
                        var_37 = ((/* implicit */int) max((var_37), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_25])) && (((/* implicit */_Bool) arr_64 [i_7])))))))));
                        /* LoopSeq 2 */
                        for (signed char i_26 = 2; i_26 < 20; i_26 += 3) 
                        {
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_37 [i_24] [i_24] [i_24] [i_7]))));
                            var_39 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_26]))) * (3776160444U)))));
                        }
                        for (long long int i_27 = 0; i_27 < 21; i_27 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [14] [i_13] [i_24 - 1] [i_25] [i_7])))))));
                            var_41 = ((/* implicit */long long int) 4294967295U);
                        }
                    }
                } 
            } 
        }
    }
}
