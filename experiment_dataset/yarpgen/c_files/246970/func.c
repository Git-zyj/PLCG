/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246970
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-7)), (var_10)))) * (((((/* implicit */int) (signed char)-4)) + (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))));
    var_17 = ((/* implicit */long long int) (-(min((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_7)))), (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (signed char)2)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) (signed char)24);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            arr_4 [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
            arr_5 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) * (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (18446744073709551588ULL))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)209)), (arr_6 [i_0 - 1] [i_2 + 1] [i_0 + 1])))) || (((/* implicit */_Bool) (((_Bool)1) ? (min((((/* implicit */int) var_10)), (arr_2 [i_3]))) : (((/* implicit */int) (unsigned short)38128)))))));
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 2]))) - (arr_9 [i_0 - 1]))))));
            }
            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) var_9);
                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) (short)1024);
            }
            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (max((((var_5) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))))), (((/* implicit */long long int) arr_6 [i_2] [i_2 - 2] [i_2]))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (int i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (2845960051U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (((/* implicit */int) arr_13 [i_0] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_13 [i_0 + 2] [i_2 - 2] [i_5 + 1])))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) || (arr_11 [i_0] [i_2 - 2] [i_2 - 2] [i_6 + 1]))))));
                        var_25 = min((min((((((/* implicit */_Bool) var_13)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) arr_20 [i_0])));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_2 [(_Bool)1])), (36011204832919552ULL))))))));
        }
        arr_21 [i_0] = ((/* implicit */unsigned int) var_10);
    }
    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_8 = 2; i_8 < 18; i_8 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)38135))));
                    var_28 = ((/* implicit */short) arr_11 [i_7] [1] [4] [21]);
                    var_29 = ((/* implicit */unsigned char) ((2845960051U) >> (((((/* implicit */int) arr_20 [i_10])) - (30521)))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_7] [i_7]))) / (3149923713U)))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (2712396269720779128ULL)));
                        arr_37 [i_7 - 1] [i_8] [i_10] [i_8] = ((/* implicit */unsigned char) arr_16 [i_8 - 2] [i_8 - 1] [i_8 - 2] [i_7 - 2]);
                        arr_38 [i_9] [i_7] [i_7] [i_9] [i_8] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                    }
                    for (unsigned short i_12 = 2; i_12 < 18; i_12 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) (unsigned char)233);
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_12])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_19 [i_7 - 2] [i_12]))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_26 [i_7 + 1]))));
                        var_35 = ((/* implicit */_Bool) 710009119U);
                        arr_41 [i_12] [i_12] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38124))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (36011204832919552ULL))));
                    }
                    for (unsigned long long int i_13 = 3; i_13 < 17; i_13 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38136))));
                        var_37 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                        var_38 += ((/* implicit */unsigned short) ((arr_40 [i_7 + 1] [i_8 - 2] [i_9] [i_10] [i_13 - 3]) << (((((/* implicit */int) arr_30 [i_7 + 1] [i_9] [i_10] [i_10])) - (146)))));
                    }
                }
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_42 [i_14] [i_8] [i_8 - 2] [i_8 + 1])))))));
                    var_40 -= ((/* implicit */_Bool) (unsigned short)65535);
                }
                for (int i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    arr_50 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2] = (unsigned short)38133;
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38153))) | (((arr_8 [i_8]) & (((/* implicit */unsigned long long int) var_0))))));
                }
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_7 - 1] [i_8 + 1] [i_16 - 1] [i_8 + 1] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)38136)) : (((/* implicit */int) arr_49 [i_7 - 1] [i_8 - 2] [i_16 - 1] [i_8 - 2] [i_16]))));
                    var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_7])) ? (5U) : (arr_22 [i_8 - 1] [i_9]))))));
                    arr_53 [i_7 - 2] [i_8 - 1] [i_7 - 2] [i_16 - 1] [i_16 - 1] [i_16 - 1] = ((/* implicit */unsigned int) ((((var_11) - (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (137438953471LL)));
                    arr_54 [i_7] [i_8] [i_8] [i_16 - 1] [i_7] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_40 [i_16 - 1] [i_16 - 1] [i_9] [i_7 - 2] [i_8 - 2])));
                }
                var_44 = ((/* implicit */long long int) ((4294967293U) >> (((((/* implicit */int) ((signed char) var_12))) - (108)))));
                var_45 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((arr_46 [i_9]) - (721855713958617112ULL)))));
            }
            for (signed char i_17 = 0; i_17 < 19; i_17 += 4) /* same iter space */
            {
                arr_57 [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (8761934064550668349ULL) : (2712396269720779109ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))) : (arr_22 [i_7 + 1] [i_7 + 1])));
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10142))) - (9223372036854775807LL))) | (((-7LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                var_47 = ((/* implicit */unsigned int) ((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_7] [i_7 - 2] [i_7 - 2] [i_8 - 1] [(_Bool)0])))));
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_22 [i_7] [i_7]) >> (((((/* implicit */int) (unsigned short)8791)) - (8785)))))) && (((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_7] [i_8 - 1] [i_7] [i_7]))))))));
                var_49 = ((/* implicit */unsigned long long int) arr_30 [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 - 2]);
            }
            for (signed char i_18 = 0; i_18 < 19; i_18 += 4) /* same iter space */
            {
                var_50 = ((/* implicit */_Bool) arr_15 [i_18]);
                arr_61 [i_7 - 2] [i_18] = ((/* implicit */_Bool) var_10);
                var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((unsigned short) arr_58 [i_7 - 2] [i_7 - 2] [i_8 - 1] [i_7 - 2])))));
            }
            for (short i_19 = 2; i_19 < 18; i_19 += 3) 
            {
                var_52 = ((/* implicit */unsigned long long int) (+(-2LL)));
                arr_64 [i_19 + 1] [i_19 + 1] [i_7] [i_8 - 2] = (unsigned short)57232;
            }
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                for (unsigned short i_21 = 1; i_21 < 17; i_21 += 4) 
                {
                    {
                        var_53 = ((/* implicit */unsigned long long int) var_7);
                        var_54 = ((/* implicit */unsigned short) var_0);
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 0; i_22 < 19; i_22 += 2) 
                        {
                            var_55 = ((/* implicit */unsigned short) var_3);
                            arr_73 [i_22] [i_21 + 1] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_71 [i_7 + 1])) + (((/* implicit */int) arr_71 [i_7 + 1]))));
                            arr_74 [i_7] [i_7] [i_7] [i_21 - 1] [i_22] [i_7] [(short)2] = ((/* implicit */_Bool) (unsigned short)38133);
                            arr_75 [i_22] [i_7] [i_8 - 1] [i_8 - 1] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)159))));
                            arr_76 [i_22] [i_21] [(unsigned char)17] [i_8 - 2] [i_7 - 1] = ((/* implicit */unsigned int) -13LL);
                        }
                        for (unsigned long long int i_23 = 4; i_23 < 18; i_23 += 4) 
                        {
                            arr_80 [i_8] [i_8 - 2] [i_8 - 2] [i_8] [i_23] = ((/* implicit */unsigned int) (-(((long long int) var_14))));
                            arr_81 [i_7] [i_8] [i_20] [i_21] [i_21] = ((/* implicit */unsigned short) arr_15 [i_20]);
                            var_56 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-7LL) % (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_7 + 1]))) : (-137438953484LL)));
                        }
                        var_57 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_48 [i_21 + 2] [i_8 + 1] [i_20] [8LL] [i_8 + 1])) - (4355860100677048582ULL)));
                    }
                } 
            } 
        }
        for (unsigned long long int i_24 = 1; i_24 < 16; i_24 += 4) 
        {
            var_58 = ((/* implicit */_Bool) var_8);
            var_59 *= (unsigned short)21029;
        }
        var_60 -= ((/* implicit */unsigned int) var_10);
        var_61 ^= ((unsigned int) var_15);
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 3; i_25 < 17; i_25 += 4) 
        {
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                {
                    var_62 = ((/* implicit */unsigned char) var_9);
                    var_63 = ((/* implicit */_Bool) ((((/* implicit */long long int) 2080374784U)) * (((((/* implicit */long long int) 3725477487U)) / ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    }
    var_64 += ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_27 = 1; i_27 < 21; i_27 += 4) 
    {
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            {
                arr_95 [i_27 + 3] [i_28] [i_28] = ((/* implicit */unsigned long long int) arr_94 [i_27] [i_27] [i_27]);
                arr_96 [i_27] = ((/* implicit */long long int) arr_92 [i_27 + 3]);
            }
        } 
    } 
}
