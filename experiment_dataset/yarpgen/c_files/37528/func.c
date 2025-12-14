/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37528
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */short) var_6);
        var_11 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (2124234910525810065LL))) % (((/* implicit */long long int) 2386522007U))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (short)126))))) + (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)3))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) : (var_4))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1]))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65507)))) ? (((((/* implicit */int) var_7)) % (((/* implicit */int) arr_8 [i_1] [i_3 + 1])))) : ((~(((/* implicit */int) arr_8 [i_1] [i_3 + 1])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (short i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = (~(1565495289U));
                                var_15 = ((/* implicit */signed char) max((var_15), (((signed char) ((((/* implicit */int) (short)-32755)) + (((/* implicit */int) (unsigned short)0)))))));
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) max((((/* implicit */short) arr_12 [i_1] [i_1] [i_1] [i_1])), ((short)32754))))))) % (5311718515915485833ULL)));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */short) (_Bool)0);
                }
            } 
        } 
        arr_21 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2422303939504215263ULL)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (signed char)94))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 11; i_9 += 4) 
        {
            for (long long int i_10 = 4; i_10 < 14; i_10 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_11 = 2; i_11 < 14; i_11 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2386522007U) % (var_2)))) ? ((+(arr_29 [i_11] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) == (((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))))) ? (((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((+(var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (unsigned char)100)) : (1630925090))))));
                        arr_33 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16248))) == (2904155506U)))))) / ((~(((/* implicit */int) (unsigned char)194))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 3; i_12 < 12; i_12 += 1) 
                        {
                            arr_36 [i_8] [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) % (var_1))), (((/* implicit */long long int) ((arr_27 [i_12 + 2] [i_12 - 1]) - (arr_27 [i_12 + 3] [i_12 - 3]))))));
                            arr_37 [i_8] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)20907))));
                        }
                        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13032))) : (2904155506U))) + (((((/* implicit */_Bool) var_6)) ? (arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        var_21 = ((/* implicit */unsigned char) (((-(-196094167))) + (((/* implicit */int) (signed char)52))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 2; i_13 < 12; i_13 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) var_9);
                            arr_42 [i_8] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_9 - 1])) ? (((/* implicit */int) arr_1 [i_14])) : (arr_13 [i_8] [i_8])));
                        }
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
                        {
                            arr_45 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)31196))) + (arr_14 [i_8] [i_8] [i_10 - 1] [i_8])));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (unsigned short)54654)) : (((/* implicit */int) (signed char)-28))))) ? (((3401130610U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99)))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) arr_16 [i_9 + 3]))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 3) /* same iter space */
                        {
                            arr_49 [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_26 [i_13] [i_13]);
                            var_25 = ((/* implicit */_Bool) 1199372090U);
                            arr_50 [i_8] [i_16] [i_8] [i_16] [i_8] [i_8] [i_8] = var_0;
                        }
                        for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
                        {
                            arr_53 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_13 - 1] [i_8] [i_13 - 1] [i_8])) ? (((/* implicit */long long int) arr_34 [i_9] [i_9] [i_13 + 1] [i_9])) : (var_1)));
                            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)227))));
                        }
                        arr_54 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (485525413U)))) ? (((((/* implicit */int) (unsigned short)35385)) + (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))));
                    }
                    arr_55 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8])))))) == (((((/* implicit */_Bool) -1213706309)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32493))) : (arr_14 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_10 + 1])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 2; i_18 < 14; i_18 += 2) /* same iter space */
                    {
                        arr_60 [i_9] [i_9] = ((((((/* implicit */unsigned int) ((((/* implicit */int) (short)15117)) % (((/* implicit */int) (unsigned char)176))))) - (((unsigned int) var_9)))) % (((/* implicit */unsigned int) (~(((int) 0LL))))));
                        var_27 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((4294967295U), (2386521997U))))));
                        var_28 |= ((/* implicit */int) 1908445295U);
                    }
                    for (unsigned char i_19 = 2; i_19 < 14; i_19 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) max((((max((((/* implicit */unsigned int) var_7)), (2386522025U))) == (((unsigned int) arr_13 [i_9] [i_9])))), (((((/* implicit */long long int) ((/* implicit */int) (short)28584))) == (-3299174111658551117LL)))));
                        arr_65 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (unsigned short)27850);
                        var_30 = ((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (2147028591U) : (((/* implicit */unsigned int) -1213706320))))))) + (((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        arr_66 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) (signed char)80);
                    }
                    for (unsigned char i_20 = 4; i_20 < 13; i_20 += 3) 
                    {
                        var_31 -= ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1594964746)) == (4893889033150255120ULL)))), (arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                        arr_69 [i_8] [i_8] [i_8] [i_20] = ((/* implicit */short) (unsigned char)168);
                        var_32 = 2386522007U;
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8] [14U] [i_20 - 1])) ? (((/* implicit */unsigned long long int) 2386522007U)) : (4611685743549480960ULL)))) ? (((/* implicit */unsigned int) (-(((var_3) / (((/* implicit */int) arr_56 [i_8] [i_8] [i_8] [i_8]))))))) : (((((/* implicit */_Bool) arr_58 [i_9 + 4] [i_9 + 4] [i_9 + 4] [i_9 + 4])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_9 + 2] [i_9 + 2] [i_9 + 2])))))));
                    }
                }
            } 
        } 
    }
    for (signed char i_21 = 0; i_21 < 15; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 15; i_22 += 4) 
        {
            for (signed char i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                {
                    arr_76 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) / (var_0))))))));
                    arr_77 [i_21] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned char)234))));
                    var_34 = ((/* implicit */short) var_8);
                    arr_78 [i_21] [i_21] [i_21] = ((/* implicit */long long int) (~((+(((/* implicit */int) ((((/* implicit */int) (signed char)46)) == (0))))))));
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16574)))))));
    }
    var_36 = ((/* implicit */short) var_5);
}
