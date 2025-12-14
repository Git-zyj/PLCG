/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223842
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
    var_13 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
        var_14 = ((/* implicit */unsigned long long int) (unsigned short)49929);
        arr_3 [i_0] = ((/* implicit */short) max((9346139366383413685ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) ((8500991862219343684ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))));
                    arr_8 [i_0] [i_1 + 1] [i_1] = ((((/* implicit */_Bool) max((min((var_9), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2 - 3])))), (((/* implicit */unsigned long long int) var_3))))) ? (min((18446744073709551596ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_1]))) : (20ULL))));
                    var_16 += ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_17 += ((/* implicit */_Bool) ((arr_11 [i_3]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : ((+(19ULL)))));
        /* LoopSeq 4 */
        for (short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) 18446744073709551596ULL);
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) (((-(((/* implicit */int) var_3)))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [i_6] [13] [1ULL] [i_3]))))));
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                {
                    var_21 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                    arr_25 [i_3] [(signed char)1] [i_4 + 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (arr_14 [i_3] [i_3] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (var_9)))))));
                    var_22 += ((/* implicit */short) var_0);
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned char) var_9);
                        arr_28 [12LL] [i_5 + 1] [i_7] [i_8] [i_3] = ((/* implicit */unsigned int) 20ULL);
                        arr_29 [i_3] [i_3] [i_3] [16U] [i_8] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_7] [i_5] [i_4])) + (((/* implicit */int) (signed char)-93))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4] [i_3] [i_5 - 1] [(signed char)7] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (19ULL)))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (var_7)));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) arr_18 [i_3] [(_Bool)1]);
                        arr_32 [i_3] [i_3] = ((/* implicit */signed char) arr_19 [i_4 + 1] [6U]);
                        var_26 = ((/* implicit */int) var_2);
                        var_27 = ((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 - 1] [i_4] [i_9 + 2] [(unsigned char)1])))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) var_10);
                        arr_35 [i_3] [i_4 + 1] [i_3] [i_7] [i_10] [i_10] = ((/* implicit */int) arr_15 [i_3]);
                        arr_36 [i_3] [i_5] [i_10] [i_7 + 1] [i_3] [10ULL] [i_5] &= ((/* implicit */int) arr_31 [i_7 + 1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_4 - 1] [i_4] [i_3]);
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 15; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_23 [i_3] [i_4] [i_3] [i_12]);
                            var_30 ^= ((/* implicit */unsigned short) ((arr_33 [i_3] [i_12]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15957)))));
                            arr_41 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 3; i_13 < 16; i_13 += 3) /* same iter space */
            {
                arr_44 [i_3] [i_4 - 1] [i_4 + 1] [i_13] = ((/* implicit */unsigned short) (signed char)-116);
                arr_45 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */long long int) (signed char)92);
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        {
                            arr_51 [i_4] [i_3] [i_4] [i_15] = ((/* implicit */unsigned int) arr_40 [i_3] [5] [i_3]);
                            var_31 = ((/* implicit */unsigned long long int) (unsigned char)0);
                        }
                    } 
                } 
            }
        }
        for (short i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */short) arr_53 [i_3] [i_16] [i_3]);
            var_33 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_3] [0ULL] [i_16])) == (((/* implicit */int) arr_12 [i_16]))));
            arr_54 [i_3] [i_3] [i_16] = (-(20ULL));
            var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_16])) && (((/* implicit */_Bool) var_7))));
        }
        for (short i_17 = 0; i_17 < 18; i_17 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-50)) != (((/* implicit */int) arr_17 [i_3] [i_17] [i_17]))));
            var_36 *= var_3;
            var_37 -= ((/* implicit */unsigned short) arr_37 [10LL] [i_3] [i_17] [i_17]);
            var_38 = (!(((/* implicit */_Bool) arr_16 [i_3] [i_17] [i_17] [i_17])));
        }
        for (unsigned short i_18 = 1; i_18 < 16; i_18 += 3) 
        {
            arr_60 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_3] [i_3] [i_18])) ? (arr_55 [i_3] [i_3] [i_18 - 1]) : (((/* implicit */int) arr_27 [i_3] [i_3] [i_18 + 2] [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1]))));
            arr_61 [i_3] [i_18 + 2] [i_18 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_18] [i_18 + 2]))) : (arr_23 [i_3] [i_3] [i_3] [i_18])));
        }
        var_39 ^= ((/* implicit */unsigned long long int) (unsigned char)76);
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_6))));
    }
    for (long long int i_19 = 3; i_19 < 15; i_19 += 1) 
    {
        var_41 -= min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)180)), ((+((-2147483647 - 1))))))), (((((/* implicit */_Bool) max((-2030958399), (arr_50 [i_19 - 2] [i_19 - 2] [(signed char)11] [i_19] [i_19] [i_19] [i_19])))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_19] [i_19] [i_19] [i_19])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
        var_42 = ((/* implicit */short) var_6);
    }
    for (unsigned short i_20 = 1; i_20 < 16; i_20 += 3) 
    {
        /* LoopNest 3 */
        for (short i_21 = 1; i_21 < 19; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                for (unsigned short i_23 = 2; i_23 < 19; i_23 += 2) 
                {
                    {
                        var_43 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1064647179U)) ? (((/* implicit */int) (signed char)127)) : ((+(((/* implicit */int) min((arr_72 [i_20] [i_20] [i_23]), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))))));
                        arr_76 [i_21] [i_20] [i_22] [i_23] [2ULL] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < ((+(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_20] [i_20])) ? (arr_75 [i_20 + 3] [i_20 + 3] [i_20 + 2] [i_20]) : (((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30032))) * (20ULL))))), (((/* implicit */unsigned long long int) max((arr_68 [i_20 + 1] [i_20 - 1]), (arr_68 [i_20 + 1] [i_20 - 1]))))));
        var_45 = ((/* implicit */long long int) (((~(arr_74 [i_20 - 1] [i_20] [18ULL]))) & (max((arr_74 [i_20 + 3] [i_20] [i_20 + 4]), (((/* implicit */unsigned int) var_3))))));
        /* LoopNest 3 */
        for (unsigned short i_24 = 2; i_24 < 18; i_24 += 1) 
        {
            for (unsigned short i_25 = 0; i_25 < 20; i_25 += 2) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        arr_87 [i_20] [(signed char)10] [i_25] [i_26] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_25] [i_25]))) * (min((max((((/* implicit */unsigned long long int) (unsigned short)17747)), (20ULL))), (min((((/* implicit */unsigned long long int) arr_68 [i_25] [i_26])), (arr_83 [i_20] [i_24] [i_25] [i_26])))))));
                        arr_88 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_80 [i_26] [i_24]))))), ((~(var_9))))), (18446744073709551596ULL)));
                        var_46 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (3832121535U)))) ? ((+(((/* implicit */int) (short)30026)))) : (((/* implicit */int) (unsigned short)3846))))), (5073178886213849482LL)));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((((/* implicit */_Bool) arr_86 [i_20] [i_20] [i_20] [i_20 - 1] [i_20] [i_20 + 2])) ? (max((max((((/* implicit */unsigned long long int) var_12)), (var_9))), (((/* implicit */unsigned long long int) arr_75 [i_20 + 4] [i_20] [i_20 + 4] [i_20 + 4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
    }
    var_48 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (((((/* implicit */unsigned long long int) -1811646143623570141LL)) * (var_9))))), (((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_3)) : (2147483647)))) ^ (min((((/* implicit */unsigned long long int) 1040884126U)), (var_9)))))));
}
