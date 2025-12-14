/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26408
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)17)), ((unsigned short)61263)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) var_4));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_15 [i_3] = ((/* implicit */unsigned long long int) var_5);
                            var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_3))) << (((((/* implicit */int) var_4)) - (8241)))));
                            arr_16 [i_4] [i_3] [i_2] [i_3] [i_0] = var_3;
                            arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_0] [i_0] = var_2;
                            arr_18 [i_3] [i_3] [i_3] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_8);
                        }
                        arr_19 [i_0 - 3] [i_2] [i_3] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        var_11 *= ((/* implicit */short) (+(arr_20 [i_5])));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            arr_24 [i_6] = ((/* implicit */_Bool) arr_20 [i_5]);
            /* LoopSeq 2 */
            for (unsigned int i_7 = 4; i_7 < 15; i_7 += 4) 
            {
                var_12 = ((/* implicit */unsigned long long int) var_6);
                var_13 = ((/* implicit */int) var_4);
                var_14 = ((/* implicit */unsigned long long int) var_3);
            }
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) var_5);
                            arr_34 [i_6] [i_9] [i_8] [i_6] [i_6] = ((/* implicit */short) ((long long int) max((((/* implicit */unsigned short) ((signed char) arr_28 [i_6]))), (var_8))));
                            var_16 -= ((/* implicit */unsigned short) arr_26 [i_10] [i_10] [i_5]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    arr_38 [i_6] [i_6] [i_6] [i_8] [i_11] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_5])) >> (((((/* implicit */int) var_4)) - (8231)))))))));
                    arr_39 [i_6] [i_5] [i_6] [i_11] [i_11] [i_8] = ((/* implicit */signed char) min((((unsigned int) ((unsigned char) var_1))), (((/* implicit */unsigned int) ((int) arr_37 [i_5] [i_5] [i_5] [i_11])))));
                }
                for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_7))));
                        arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) >= (var_1)))) >> (((((/* implicit */int) max(((signed char)-17), (var_5)))) - (76))))))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 13; i_14 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_3))))))));
                        arr_48 [i_6] [i_12] [i_6] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)42022)) : (((/* implicit */int) (signed char)-10)))), (((/* implicit */int) arr_21 [i_5] [i_12])))) * ((((+(((/* implicit */int) arr_22 [i_5])))) * ((-(((/* implicit */int) var_2))))))));
                        arr_49 [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) & (var_1)))) ? (((unsigned long long int) (signed char)-17)) : (((/* implicit */unsigned long long int) arr_47 [i_5] [i_6] [i_8] [1LL] [i_6] [i_6])))), (((/* implicit */unsigned long long int) var_9))));
                        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_32 [i_5] [i_5] [i_5] [i_12] [i_5])), (var_6)));
                        var_20 *= ((/* implicit */unsigned int) (+(6740256027111358542LL)));
                    }
                    var_21 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5] [i_5] [i_6] [i_6] [i_8] [i_6]))))))));
                }
            }
            arr_50 [i_6] = ((/* implicit */unsigned long long int) var_0);
        }
        arr_51 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23513))));
        var_22 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) arr_20 [i_5])) + (((((/* implicit */_Bool) (unsigned short)42051)) ? (0ULL) : (((/* implicit */unsigned long long int) 3482109993U)))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
    {
        arr_54 [i_15] = ((/* implicit */unsigned long long int) var_5);
        var_23 -= ((/* implicit */unsigned short) var_7);
        /* LoopNest 3 */
        for (long long int i_16 = 4; i_16 < 20; i_16 += 2) 
        {
            for (int i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                for (int i_18 = 3; i_18 < 20; i_18 += 1) 
                {
                    {
                        var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)))) ? (((/* implicit */unsigned int) var_3)) : ((~(var_0)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 1) /* same iter space */
                        {
                            arr_63 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [3ULL] = ((((/* implicit */_Bool) (short)32750)) ? ((+(((int) var_3)))) : (((((/* implicit */int) (unsigned short)42022)) ^ (((/* implicit */int) var_5)))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_58 [i_18] [i_17] [i_15]))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned short) (~(var_6)))))));
                            arr_64 [i_19] [(unsigned char)5] [i_17] [i_18] [i_16] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_58 [(_Bool)1] [i_16] [i_16])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) /* same iter space */
                        {
                            arr_67 [i_18] [i_18] [i_17] [i_17] [i_20] = ((/* implicit */int) var_1);
                            arr_68 [i_20] [i_15] [8ULL] [i_16] [i_15] = ((/* implicit */short) arr_52 [20ULL]);
                            arr_69 [i_15] [i_16 + 1] [i_17] [i_18] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */int) var_7)) : (((int) var_6))));
                            arr_70 [i_15] |= ((/* implicit */signed char) (unsigned short)16);
                        }
                        arr_71 [i_18] [i_17] [(unsigned short)11] [i_15] |= ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) var_5)), (min((var_9), (var_6))))));
                        arr_72 [i_15] [i_15] [i_15] [i_15] [(short)16] = ((/* implicit */unsigned short) var_7);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (signed char)-76))) ? (((unsigned long long int) ((((/* implicit */int) var_7)) / (var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        /* LoopSeq 1 */
        for (long long int i_22 = 1; i_22 < 21; i_22 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 3) 
            {
                for (unsigned char i_24 = 0; i_24 < 22; i_24 += 3) 
                {
                    for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
                    {
                        {
                            arr_84 [i_21] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((signed char) var_4)))))), (var_4)));
                            arr_85 [i_21] [(_Bool)1] [i_21] [i_21] [(_Bool)1] [i_21] [i_21] = max((((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (-2136759959136562051LL))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) ((arr_76 [i_21]) ? (var_3) : (((((((/* implicit */_Bool) 0ULL)) ? (var_3) : (((/* implicit */int) (signed char)91)))) % (((/* implicit */int) var_5))))));
        }
        arr_86 [i_21] = ((/* implicit */unsigned char) arr_53 [i_21]);
    }
    /* LoopSeq 3 */
    for (unsigned char i_26 = 0; i_26 < 23; i_26 += 4) 
    {
        arr_89 [i_26] = ((/* implicit */short) var_5);
        /* LoopSeq 2 */
        for (unsigned short i_27 = 1; i_27 < 19; i_27 += 3) 
        {
            arr_92 [i_26] [i_27] = ((/* implicit */signed char) var_4);
            var_29 ^= ((/* implicit */unsigned char) (-((-(var_1)))));
        }
        for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 4) 
        {
            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (1777506349810271707LL)));
            var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
            arr_96 [i_26] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-32)), (4065167565U)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (short)(-32767 - 1))))))));
        }
    }
    for (unsigned int i_29 = 1; i_29 < 17; i_29 += 3) 
    {
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_56 [i_29] [i_29])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) <= (((/* implicit */long long int) ((var_3) * (((/* implicit */int) arr_76 [i_29])))))))) << (((/* implicit */int) (signed char)26))));
        var_33 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)-86)), (var_1))));
        arr_100 [i_29] [i_29] = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
        var_34 = ((/* implicit */long long int) (unsigned short)23513);
    }
    /* vectorizable */
    for (signed char i_30 = 0; i_30 < 21; i_30 += 1) 
    {
        arr_104 [i_30] [i_30] = ((/* implicit */unsigned int) var_1);
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30] [i_30])))));
        /* LoopSeq 2 */
        for (unsigned short i_31 = 4; i_31 < 20; i_31 += 1) /* same iter space */
        {
            arr_108 [i_30] [i_31] = ((/* implicit */unsigned short) var_2);
            arr_109 [i_30] [i_30] &= ((/* implicit */unsigned long long int) var_2);
        }
        for (unsigned short i_32 = 4; i_32 < 20; i_32 += 1) /* same iter space */
        {
            arr_112 [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_30])) ? ((-(var_3))) : (((/* implicit */int) var_2))));
            arr_113 [i_30] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1733894844596517482LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)142))))) : (var_1)));
        }
        var_36 += ((/* implicit */unsigned char) var_6);
    }
    var_37 *= var_4;
    var_38 = max((((/* implicit */int) ((((/* implicit */long long int) ((var_3) / (((/* implicit */int) (unsigned char)44))))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))))), (var_3));
}
