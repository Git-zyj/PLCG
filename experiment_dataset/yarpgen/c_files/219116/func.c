/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219116
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
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                var_15 = ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]);
                var_16 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_5))), (arr_6 [i_0 + 3])))));
                var_17 = (~((+(var_0))));
                var_18 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_8)), (arr_7 [i_0] [i_0 + 3] [i_2 + 2])))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] [i_1] [i_1] [i_3] = (-(max((var_3), (min((((/* implicit */long long int) var_11)), (var_13))))));
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)52142))))))) - (min((min((((/* implicit */unsigned int) var_14)), (arr_9 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1]))))));
            }
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(2114523819413238706ULL)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (short)-11034)) / (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) arr_4 [i_0])))))))));
                arr_17 [i_0] = ((/* implicit */signed char) (-(var_11)));
                arr_18 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (short)11033);
                var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_3 [i_0] [i_0] [i_4]) : (arr_3 [i_0] [i_0] [i_1]))), (min((arr_3 [i_0] [i_0] [i_4]), (((/* implicit */unsigned long long int) var_9))))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 3) 
            {
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(var_12)));
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    arr_26 [i_1] [i_0] [i_5] [i_5] [i_1] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (17413769780366693991ULL))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))));
                    arr_27 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2799173867U) : (8191U)));
                    var_21 *= (unsigned short)8;
                }
                arr_28 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) 1449869575);
                /* LoopSeq 1 */
                for (long long int i_7 = 3; i_7 < 21; i_7 += 3) 
                {
                    var_22 = (+(((/* implicit */int) var_14)));
                    arr_33 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14ULL)) ? (((((/* implicit */int) arr_23 [i_5 - 1] [i_5 - 1] [i_1] [i_0] [i_0])) >> (((var_0) - (2975629821833001198LL))))) : (((/* implicit */int) var_10))));
                }
            }
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)52143);
            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_29 [i_0] [i_1] [i_0] [i_1])), (((((/* implicit */_Bool) (short)-29481)) ? (var_6) : (var_6)))));
        }
        arr_35 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1257756692898822194ULL)) ? (((/* implicit */long long int) min((4211014151U), (((/* implicit */unsigned int) var_9))))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((arr_21 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (arr_0 [i_0] [i_0]))))) : (min((((/* implicit */unsigned long long int) (signed char)-8)), ((-(2138404746494172160ULL)))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_40 [i_8] = max((((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_8])), (((((/* implicit */int) arr_30 [i_8] [i_8] [i_8] [i_8])) + (((/* implicit */int) arr_37 [i_8] [i_8]))))))), ((-(((long long int) 83953145U)))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_0))));
        arr_41 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_2)))) ? (min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || ((_Bool)1)))))) : (((/* implicit */long long int) ((arr_7 [i_8] [i_8] [i_8]) * (((/* implicit */unsigned int) ((var_11) * (((/* implicit */int) (short)0))))))))));
        arr_42 [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) ? (8431569799247007496LL) : (arr_1 [i_8] [i_8]))))), (659903906U)));
        var_25 = ((/* implicit */long long int) min((((((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_8])) - (((/* implicit */int) var_7)))), (((/* implicit */int) min((arr_0 [i_8] [i_8]), (((/* implicit */short) (unsigned char)31)))))));
    }
    for (unsigned short i_9 = 4; i_9 < 18; i_9 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9] [i_9] [i_9]))) - (var_4)));
        arr_45 [i_9] [i_9] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_4 [i_9]))))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    arr_51 [i_9] [i_11] [i_11] = ((/* implicit */_Bool) arr_5 [i_9] [i_10] [i_11]);
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_55 [i_9] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */signed char) min((var_14), (((/* implicit */unsigned char) var_10))));
                        arr_56 [i_9] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52133)) >> (((((/* implicit */int) (short)24335)) - (24332)))));
                    }
                    for (short i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_59 [i_9] [i_9] [i_11] [i_9] = ((unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (16332220254296312892ULL))), (((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */long long int) 4294959105U)))))));
                        arr_60 [i_11] [i_13] [i_11] [i_10] [i_11] = ((/* implicit */_Bool) 16332220254296312899ULL);
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            arr_63 [i_13] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(8186U)))))) ? (min((789108303), (((/* implicit */int) arr_58 [i_9] [i_9] [i_9] [i_13] [i_11] [i_14])))) : ((~(((/* implicit */int) (unsigned char)128))))));
                            var_27 &= ((/* implicit */unsigned char) arr_6 [i_9]);
                            arr_64 [i_11] [i_10] [i_14] [i_11] [i_14] [i_10] = ((/* implicit */signed char) (-(min((min((((/* implicit */long long int) 4294967295U)), (var_1))), (((/* implicit */long long int) ((((/* implicit */int) var_14)) | (var_12))))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_68 [i_11] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_58 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])), (var_9)));
                            arr_69 [i_13] [i_13] [i_13] [i_11] [i_13] [i_13] = ((/* implicit */short) arr_10 [i_9] [i_10] [i_11] [i_13]);
                            arr_70 [i_11] [i_13] [i_11] [i_10] [i_9] [i_9] [i_11] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_15] [i_15] [i_10] [i_15]))) : (var_13)))))));
                        }
                        arr_71 [i_9] [i_9 - 4] [i_11] [i_9] = ((/* implicit */unsigned int) (unsigned short)13409);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_76 [i_9 + 1] [i_16] [i_11] [i_16] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 3461459846U)), (max((min((var_1), (((/* implicit */long long int) (short)-22468)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (688446794U))))))));
                        arr_77 [i_16] [i_11] [i_11] [i_11] [i_10] [i_9] = ((/* implicit */_Bool) 2114523819413238699ULL);
                        arr_78 [i_11] [i_10] [i_11] [i_16] = ((/* implicit */signed char) 1452370109U);
                    }
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        var_28 *= ((/* implicit */short) (+(min((max((var_3), (((/* implicit */long long int) var_11)))), (min((var_13), (((/* implicit */long long int) (short)8123))))))));
                        arr_82 [i_11] [i_10] [i_11] [i_17] [i_9] = ((/* implicit */signed char) arr_47 [i_9] [i_9] [i_9]);
                        arr_83 [i_17] [i_11] [i_10] [i_11] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) var_4)), (((/* implicit */unsigned int) ((unsigned char) var_9)))))) ? (min((((/* implicit */long long int) var_6)), (max((var_2), (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_29 = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned short) (short)29480)), ((unsigned short)6328))))), (max((((/* implicit */unsigned int) var_7)), (min((0U), (((/* implicit */unsigned int) var_9))))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                    {
                        arr_86 [i_18] [i_11] [i_11] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_9 - 3] [i_11] [i_11])))) ? (min((((/* implicit */unsigned long long int) (unsigned char)17)), (arr_3 [i_9 - 3] [i_11] [i_9 - 3]))) : (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_9 - 3] [i_11] [i_9 - 3])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            var_30 *= ((/* implicit */unsigned char) min((2114523819413238722ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            arr_91 [i_9] [i_9] [i_11] [i_11] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((3098092369U), (4294967295U)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 1736074334579423320ULL)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (short)6274))))))) : (max((3001027029916929005LL), (min((((/* implicit */long long int) (short)24335)), (var_2)))))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            for (short i_21 = 2; i_21 < 19; i_21 += 1) 
            {
                {
                    arr_96 [i_9] [i_9] = ((/* implicit */_Bool) var_1);
                    arr_97 [i_9] [i_21 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_43 [i_9 + 1])), (((unsigned short) arr_94 [i_21]))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */int) min((var_3), (((/* implicit */long long int) var_10))));
}
