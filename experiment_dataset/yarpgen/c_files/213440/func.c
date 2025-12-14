/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213440
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
    var_13 = ((/* implicit */unsigned char) var_0);
    var_14 &= ((/* implicit */unsigned char) 6304030371897139125LL);
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_6)), (min((((/* implicit */unsigned short) (signed char)-3)), (var_11)))))), ((-(min((3975831273U), (((/* implicit */unsigned int) (unsigned char)130))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 5427275137110381031LL)), (var_12))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))));
        var_17 |= var_8;
        var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */long long int) var_3)), (9038473646029936081LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), ((short)8188))))))), (((/* implicit */long long int) ((arr_1 [i_0]) | (arr_1 [i_0]))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (7179078495457787947LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40)))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_20 *= ((/* implicit */short) (-(((/* implicit */int) min((var_2), (arr_7 [(unsigned char)20]))))));
        var_21 = ((/* implicit */long long int) (((~(((/* implicit */int) var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) var_11))))))))));
    }
    for (long long int i_2 = 3; i_2 < 24; i_2 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 2]))))), (2147483647)));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16448958222407035914ULL)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_5 [i_2])), (var_7))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])))))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 24; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                {
                    var_24 |= ((/* implicit */unsigned char) (!(((((/* implicit */int) min((var_9), (((/* implicit */short) arr_5 [i_2 - 1]))))) <= (((/* implicit */int) ((_Bool) var_11)))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)7699)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3872109332048440272LL)) ? (((/* implicit */int) (unsigned short)57344)) : (-592882032))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (min(((-(((unsigned long long int) 2719409694540114271LL)))), (((/* implicit */unsigned long long int) ((arr_18 [i_5] [i_5] [i_4 + 2] [i_3] [i_2]) == (((/* implicit */long long int) (~(-1688313604)))))))))));
                        var_27 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)21)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (short)-32756)))))) : (arr_17 [i_5])));
                        var_28 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 769763489)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1]))))), (((/* implicit */unsigned int) (unsigned short)0))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_3] [i_3])) << (((((/* implicit */int) ((short) min((((/* implicit */short) (unsigned char)41)), ((short)13195))))) - (33)))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_2] [i_2 - 1]), (arr_6 [i_2] [i_2 + 1]))))) <= (((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])) ? (5488888803229735071ULL) : (((/* implicit */unsigned long long int) 8874760632642251328LL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_25 [i_7])) ^ (arr_24 [i_6])))) ? (arr_21 [i_7 - 1] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6])))))))))));
                    var_32 = ((/* implicit */unsigned short) -5099262761342677931LL);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_9 = 4; i_9 < 9; i_9 += 3) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)8)))));
            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_9 + 1] [i_9 - 4])) || (((/* implicit */_Bool) arr_12 [i_6] [i_6]))));
            var_35 &= ((/* implicit */unsigned int) var_9);
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 4; i_10 < 9; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 4; i_11 < 9; i_11 += 4) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2305280059260272640ULL)) ? (arr_11 [i_6] [(_Bool)1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9 + 1])))));
                            var_37 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6504))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */_Bool) (~(arr_26 [i_6] [i_9 - 4] [i_10 - 2])));
                var_39 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)254)))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 8; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_40 -= ((/* implicit */unsigned char) ((arr_25 [i_13 - 1]) >= ((~(7179078495457787924LL)))));
                            var_41 = ((/* implicit */unsigned long long int) ((unsigned char) arr_40 [(unsigned char)4] [i_13 - 1] [i_10 - 2] [i_9 - 4] [i_9] [i_9 - 2]));
                            var_42 = ((/* implicit */unsigned char) (unsigned short)65535);
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((long long int) (unsigned char)248)) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 7; i_17 += 1) 
                {
                    for (int i_18 = 1; i_18 < 8; i_18 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)-15358))))));
                            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) var_7))))));
                            var_46 -= ((/* implicit */signed char) ((4165351014733399517ULL) | (((/* implicit */unsigned long long int) arr_32 [i_16 + 1] [i_17 - 1] [i_6]))));
                            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
                var_48 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_16] [i_16 - 1] [i_16 + 1])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) arr_52 [i_16 - 1] [i_15] [i_16] [i_16 - 1]))));
                var_49 = ((/* implicit */unsigned int) var_9);
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    var_50 = ((/* implicit */unsigned int) (-((-(arr_46 [i_6] [i_15] [i_16])))));
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_58 [3LL])));
                    var_52 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)116))));
                }
                for (unsigned short i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    var_53 = ((/* implicit */unsigned char) var_12);
                    var_54 = ((/* implicit */short) var_6);
                }
            }
            for (unsigned char i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                var_55 = ((/* implicit */unsigned int) arr_9 [i_6] [i_6]);
                var_56 = ((/* implicit */unsigned char) ((short) var_5));
                var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)8463)) ? (((/* implicit */int) arr_5 [i_6])) : (((/* implicit */int) arr_5 [i_6]))));
            }
            /* LoopSeq 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_58 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_60 [i_6] [i_6] [(unsigned short)6] [i_6]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_6]))))) * (arr_24 [i_15])));
                /* LoopNest 2 */
                for (short i_23 = 1; i_23 < 7; i_23 += 4) 
                {
                    for (short i_24 = 2; i_24 < 9; i_24 += 2) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned int) arr_3 [i_23]);
                            var_60 = ((/* implicit */short) arr_21 [i_6] [i_6]);
                            var_61 = ((/* implicit */unsigned int) arr_75 [i_23]);
                            var_62 = var_7;
                        }
                    } 
                } 
            }
            for (unsigned long long int i_25 = 3; i_25 < 9; i_25 += 2) 
            {
                var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_6] [i_15] [i_15] [i_25 + 1])) ? ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) arr_40 [i_25 + 1] [i_25] [i_15] [i_15] [i_15] [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_15] [i_25 + 1] [i_15] [i_15])))));
                var_64 = ((/* implicit */unsigned char) ((short) ((_Bool) (signed char)101)));
                var_65 -= ((/* implicit */unsigned char) arr_65 [i_6] [i_6]);
                /* LoopNest 2 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (unsigned char i_27 = 0; i_27 < 10; i_27 += 1) 
                    {
                        {
                            var_66 ^= ((/* implicit */unsigned long long int) arr_61 [i_6] [i_25 + 1] [i_25] [i_26]);
                            var_67 = ((/* implicit */int) ((_Bool) arr_82 [i_6] [i_25 - 2] [i_25] [i_15] [i_27]));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_28 = 0; i_28 < 10; i_28 += 4) 
                {
                    var_68 = var_2;
                    var_69 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_17 [i_28]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_15] [i_15])))))) * (((/* implicit */int) arr_67 [i_25 - 1] [(_Bool)1] [i_25 - 1] [i_15]))));
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 3) 
        {
            for (unsigned int i_30 = 3; i_30 < 6; i_30 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_31 = 0; i_31 < 10; i_31 += 2) 
                    {
                        var_70 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)31674))))) <= (((arr_41 [i_6] [i_29] [i_29] [i_30] [i_31]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_32 = 0; i_32 < 10; i_32 += 1) 
                        {
                            var_71 &= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)6515)))) + (2147483647))) << (((((unsigned long long int) arr_50 [i_6])) - (217042831ULL)))));
                            var_72 = ((/* implicit */unsigned short) ((long long int) 9340540337395616295ULL));
                            var_73 = ((/* implicit */_Bool) min((var_73), (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                        }
                        var_74 = var_2;
                        var_75 &= ((/* implicit */signed char) (unsigned short)28865);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_33 = 2; i_33 < 9; i_33 += 2) 
                    {
                        for (unsigned int i_34 = 2; i_34 < 9; i_34 += 3) 
                        {
                            {
                                var_76 = ((/* implicit */unsigned long long int) var_4);
                                var_77 &= 3398913639U;
                                var_78 = ((/* implicit */unsigned long long int) ((long long int) arr_68 [i_30 + 1] [(_Bool)1] [i_30] [i_34] [i_34] [i_34 + 1]));
                                var_79 -= ((/* implicit */unsigned long long int) (unsigned short)54181);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_80 = arr_16 [(short)4] [i_6] [i_6] [(_Bool)1];
    }
}
