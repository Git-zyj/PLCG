/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45331
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
    var_17 = ((/* implicit */unsigned char) var_16);
    var_18 -= var_2;
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (-(min((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) arr_0 [i_0]))))))));
                    var_20 = ((/* implicit */int) var_5);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-15)) + (2147483647))) << (((((-1) + (8))) - (7)))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((((((int) var_0)) + (((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1])))), (((((/* implicit */int) ((unsigned short) arr_7 [(_Bool)1] [i_3]))) << (((((arr_14 [(signed char)2] [i_4]) + (4817418796958932805LL))) - (26LL)))))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) var_16);
                            var_24 = ((/* implicit */unsigned int) var_8);
                            var_25 += (((~(arr_18 [i_3 + 1] [i_3 - 1] [i_6 + 1]))) | (((/* implicit */unsigned long long int) ((arr_11 [i_6 - 1]) & (((/* implicit */int) ((unsigned short) arr_19 [i_6] [i_4] [i_4] [i_6])))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(arr_14 [i_3] [i_6]))), (((/* implicit */long long int) ((unsigned short) -6315376419550248046LL)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : ((+(((-1986708318) * (0)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        arr_29 [i_3 + 2] [(signed char)15] [i_8] [i_9] = (!(((/* implicit */_Bool) min((arr_5 [i_4] [i_9]), (arr_8 [i_4] [i_4] [i_8])))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) -647115604175251633LL))) ? (((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */unsigned long long int) arr_3 [i_4] [i_8] [i_4])) : (16975229752932473208ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_3 + 3])))));
                    }
                } 
            } 
            arr_30 [i_3] &= ((/* implicit */unsigned short) (~(arr_16 [i_3 + 3] [i_4])));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((int) arr_27 [i_3 + 2] [i_3 - 1] [i_3])))));
        }
        for (long long int i_10 = 3; i_10 < 20; i_10 += 1) 
        {
            arr_33 [i_3] [i_10] [i_10 + 1] = ((/* implicit */short) ((unsigned short) 9834190366479637705ULL));
            var_29 = ((/* implicit */signed char) arr_27 [i_10] [i_10] [i_10]);
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (~(arr_3 [(unsigned short)12] [i_10 - 3] [(unsigned short)12])))) ? (((((/* implicit */_Bool) arr_23 [i_3 + 3] [i_3 + 2] [i_3 + 3] [i_3] [i_10] [17LL])) ? (arr_2 [(unsigned char)0]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 740707710606955517LL)) < (15859390631929505190ULL)))))));
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) ? (((/* implicit */int) ((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58501))) : (arr_32 [0] [i_10] [i_10]))) > (((/* implicit */long long int) arr_38 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_13 - 1]))))) : (max(((-(-2108823585))), (((/* implicit */int) (unsigned short)65535))))));
                            var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_17 [i_3 + 3]), (((/* implicit */long long int) (-(((/* implicit */int) arr_37 [i_3 + 3] [i_3 + 3] [i_11] [i_13])))))))) ? (min((arr_18 [i_3 + 2] [i_12 - 1] [i_13 + 1]), (((/* implicit */unsigned long long int) arr_6 [i_3] [(unsigned char)3])))) : (((/* implicit */unsigned long long int) (+((~(var_3))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                var_33 = ((/* implicit */long long int) (-((-((+(var_2)))))));
                arr_42 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_37 [i_3] [i_3 + 2] [4ULL] [i_10 - 1])), (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_3] [i_3 + 1] [i_3 + 2] [i_10 + 1])) ? (((/* implicit */int) arr_37 [i_3 - 1] [i_3 + 3] [i_3 + 2] [i_10 - 1])) : (((/* implicit */int) arr_37 [i_3] [i_3 + 1] [i_3] [i_10 - 1])))))));
            }
        }
    }
    /* LoopSeq 3 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((((~(var_8))) - (14846885074963414702ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_46 [i_15 - 1] [i_15 - 1])))))));
        /* LoopNest 3 */
        for (unsigned int i_16 = 3; i_16 < 23; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (short i_18 = 2; i_18 < 24; i_18 += 2) 
                {
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) var_12))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29292)) & (((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65520)) ^ (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_47 [i_17] [(unsigned short)3] [i_15])) ? (6315376419550248046LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))))))))));
                        arr_55 [i_15] [i_16] = ((/* implicit */unsigned short) ((arr_52 [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_18]) - ((+(arr_53 [i_18] [i_18 - 2] [i_18 - 2] [i_18] [i_18] [i_18])))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_15])))) ? (arr_2 [i_15]) : (((((/* implicit */_Bool) arr_2 [i_15])) ? (arr_2 [i_15]) : (arr_2 [i_15])))));
    }
    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
    {
        var_37 = ((/* implicit */int) (-(((unsigned long long int) arr_5 [(_Bool)1] [i_19]))));
        var_38 = ((/* implicit */int) var_0);
        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_24 [i_19] [(unsigned char)8] [(unsigned char)8] [i_19])), ((~(arr_32 [i_19 + 1] [i_19 + 1] [i_19 + 1]))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_26 [i_19] [i_19] [i_19] [(signed char)11])), (var_5)))))))))))));
        var_40 ^= ((/* implicit */signed char) (+(((long long int) arr_20 [i_19] [i_19 + 1] [16] [6ULL]))));
        var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_19 + 1] [i_19 + 1] [i_19 + 1]))) < (((arr_8 [22] [i_19 + 1] [i_19 + 1]) >> (((((/* implicit */int) arr_15 [i_19 + 1] [i_19 + 1] [i_19 + 1])) - (97)))))));
    }
    for (unsigned long long int i_20 = 1; i_20 < 17; i_20 += 4) 
    {
        var_42 = ((/* implicit */unsigned int) arr_48 [i_20 - 1]);
        /* LoopNest 3 */
        for (unsigned short i_21 = 1; i_21 < 18; i_21 += 4) 
        {
            for (int i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                for (long long int i_23 = 1; i_23 < 18; i_23 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_24 = 3; i_24 < 18; i_24 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                            var_44 = ((/* implicit */unsigned long long int) var_10);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 4) 
                        {
                            var_45 = ((/* implicit */short) ((long long int) 529989054));
                            arr_79 [i_25] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_21] [i_22] [i_23 + 1] [i_25]))));
                        }
                        for (short i_26 = 1; i_26 < 18; i_26 += 4) 
                        {
                            arr_82 [i_20] [i_21] [i_22] [i_20] [i_26 + 1] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) max((((/* implicit */short) arr_54 [i_20 - 1] [i_21])), (arr_80 [i_20 + 1] [2ULL] [i_20 + 1] [i_23] [i_20 + 1]))))), ((-(var_12)))));
                            arr_83 [(signed char)5] [(signed char)5] [i_22] [i_26] [i_20] [i_26] = ((/* implicit */unsigned int) var_4);
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) var_14))));
                            var_47 += ((/* implicit */signed char) min((min((arr_18 [i_20] [i_23 + 1] [i_22]), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((arr_18 [i_20 + 1] [i_20] [i_20 + 2]) < (((/* implicit */unsigned long long int) var_3)))))));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 3) 
                        {
                            var_48 = arr_59 [i_20] [(signed char)3];
                            arr_86 [i_27] [i_21] [i_20] [(unsigned short)15] [i_20] = ((/* implicit */_Bool) var_2);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_28 = 0; i_28 < 19; i_28 += 3) 
                        {
                            arr_90 [i_20] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) - (((((/* implicit */int) ((((/* implicit */int) (unsigned short)30613)) >= (((/* implicit */int) (signed char)25))))) - (((((/* implicit */int) (short)-3285)) ^ (((/* implicit */int) (_Bool)0))))))));
                            var_49 = ((/* implicit */unsigned char) 134358859);
                            var_50 = ((/* implicit */unsigned short) (-(((unsigned long long int) ((arr_32 [(short)0] [i_21] [i_21]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29300))))))));
                            arr_91 [i_20] [i_21] [i_20] [i_20] [i_23] [(signed char)13] [i_28] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) var_10)))));
                            arr_92 [i_20] [i_21] [i_21] = ((/* implicit */unsigned long long int) var_1);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_29 = 2; i_29 < 17; i_29 += 1) 
                        {
                            var_51 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_73 [i_20] [i_20] [i_22])) == (var_1))) ? (var_7) : ((+((-(((/* implicit */int) var_0))))))));
                            var_52 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) : (6936125297924390290LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)11)) - (arr_73 [i_20 + 1] [i_20] [i_23 + 1]))))));
                        }
                        var_53 = (i_20 % 2 == 0) ? (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(7628660107533111996LL)))) ? (((var_7) << (((arr_5 [i_20] [(signed char)11]) - (2018109736U))))) : (((/* implicit */int) arr_87 [i_23 + 1] [i_21] [i_20 - 1] [i_23] [i_21])))))) : (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (~(7628660107533111996LL)))) ? (((var_7) << (((((arr_5 [i_20] [(signed char)11]) - (2018109736U))) - (757598184U))))) : (((/* implicit */int) arr_87 [i_23 + 1] [i_21] [i_20 - 1] [i_23] [i_21]))))));
                    }
                } 
            } 
        } 
        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) min((((((/* implicit */int) (short)30745)) << (((((((/* implicit */long long int) ((/* implicit */int) arr_76 [i_20] [i_20] [i_20] [i_20] [i_20]))) % (-5621985412716784408LL))) - (123LL))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_61 [(unsigned char)10])) : (((/* implicit */int) arr_68 [i_20] [i_20 + 2] [i_20 - 1] [i_20 - 1])))))))));
        arr_97 [i_20] = var_16;
        var_55 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_53 [i_20 - 1] [3] [i_20 + 2] [i_20 - 1] [i_20] [i_20 + 1]))));
    }
}
