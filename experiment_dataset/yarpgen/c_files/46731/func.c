/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46731
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 -= max((((/* implicit */unsigned long long int) max((arr_0 [i_1 - 1]), (((/* implicit */unsigned int) (short)29358))))), (18446744073709551611ULL));
                arr_6 [i_1] = ((/* implicit */short) (-(1918066328458251898LL)));
                arr_7 [i_1] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)86)) | (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)13)) > (((/* implicit */int) (unsigned short)2044))))) : (((/* implicit */int) (unsigned short)10))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            {
                var_13 = (signed char)-83;
                arr_13 [i_2 - 1] [i_3] [i_3 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 - 1]))))) | (((/* implicit */int) max((arr_11 [i_2 - 1]), (arr_11 [i_2 - 1]))))));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    arr_16 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    var_14 = ((/* implicit */unsigned char) (-((+(403731259029679009LL)))));
                    var_15 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_15 [i_2] [i_3] [i_2]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
                    arr_17 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_2 - 1] [i_3 - 3] [i_3]))));
                    arr_18 [9ULL] [i_4] [i_4] = ((/* implicit */long long int) arr_9 [i_2]);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_23 [i_6] [(unsigned char)14] [i_3] [i_2 - 1] [i_2] = ((/* implicit */_Bool) arr_15 [i_5] [i_3] [i_2]);
                        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_2] [i_3] [i_5]))));
                    }
                    var_17 = ((/* implicit */unsigned char) arr_19 [i_5] [i_3 - 1] [i_3] [(short)11]);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_30 [i_2 - 1] [i_2 - 1] [13U] [i_7] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_2] [i_2] [i_5] [i_7] [i_5]))))) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_3])) : (((/* implicit */int) ((18446744073709551611ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)241), (((/* implicit */unsigned char) (signed char)83)))))))))));
                                arr_31 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!((_Bool)1)));
                                var_18 = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_25 [i_3 - 3] [i_3] [i_5] [i_2 - 1] [i_8])), ((-(arr_19 [i_8] [i_7] [4ULL] [i_2 - 1]))))), ((-(((/* implicit */int) arr_12 [i_2 - 1] [i_3 - 1]))))));
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_19 [i_2 - 1] [(unsigned char)4] [i_3 + 2] [(unsigned char)4]), (arr_19 [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_3])))), (max((-1918066328458251898LL), (((/* implicit */long long int) (signed char)65))))));
                                arr_32 [i_3] [(unsigned short)2] [18LL] [i_7] [i_8] [i_3 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_20 [i_2] [i_3 + 2] [i_3 + 3])) <= (((/* implicit */int) arr_20 [i_2] [i_3 - 3] [i_5])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_12 [i_2] [i_2 - 1])), (arr_24 [6LL] [i_3 - 2] [i_5]))), (((/* implicit */long long int) min(((unsigned char)14), (arr_15 [i_5] [(_Bool)1] [i_10])))))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_29 [i_2 - 1] [i_2] [i_2] [i_2] [i_2]))));
                                arr_39 [i_2] [i_3 - 1] [(signed char)6] [i_9] [(unsigned short)6] [(signed char)18] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned char)242))))))), (4083894347U)));
                                arr_40 [i_9] [(signed char)13] [i_5] [i_3] [i_9] = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_3] [i_5] [i_9] [i_10]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) arr_28 [i_2 - 1] [(_Bool)1] [i_11] [i_12] [11LL]);
                                arr_51 [i_11] [i_3] [i_11] [i_12] [i_13] [i_2] = ((/* implicit */unsigned short) (-(arr_41 [i_2] [i_2 - 1] [11ULL] [i_3 - 2])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_2] [i_2] [9LL] [i_14])))))));
                        var_24 -= ((/* implicit */signed char) arr_35 [i_2 - 1] [4U] [i_2 - 1] [i_11] [i_11] [i_11]);
                    }
                    for (short i_15 = 3; i_15 < 19; i_15 += 2) 
                    {
                        var_25 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [17LL])) ? (((/* implicit */int) arr_45 [i_2] [(unsigned char)1] [i_3] [i_2] [i_15])) : (((/* implicit */int) arr_53 [i_2 - 1] [i_11]))))) * (((((/* implicit */_Bool) 1177188301)) ? (1681604877U) : (((/* implicit */unsigned int) 174221063)))));
                        arr_56 [i_3] [8ULL] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) -174221064)) | (-1918066328458251907LL)));
                        arr_57 [(unsigned short)3] [i_15] [i_11] [i_15] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_3 - 1])) ? (((/* implicit */unsigned long long int) 731139275U)) : (arr_52 [i_3 - 2])));
                    }
                    arr_58 [i_2] = ((/* implicit */unsigned char) arr_26 [i_2] [(_Bool)1] [i_11] [i_2 - 1]);
                    arr_59 [i_2 - 1] [i_3] [6ULL] [0ULL] &= ((/* implicit */long long int) (-(arr_48 [i_2] [i_3 + 2] [(signed char)2] [i_2 - 1] [i_3 - 2])));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) min(((-(-2033161577))), (((/* implicit */int) (short)-3899))));
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (3835618012U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))));
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)3)))) : ((~(var_8)))))) : (35184372088831ULL))))));
}
