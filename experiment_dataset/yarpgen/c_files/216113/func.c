/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216113
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0 - 1] [i_0 + 1])), (arr_1 [i_0 - 1])))) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_13 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1]))))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_2 [i_1 + 2])))) ? (max((((/* implicit */long long int) var_3)), (arr_2 [i_1 + 3]))) : (((((/* implicit */_Bool) (unsigned short)63436)) ? (((/* implicit */long long int) var_6)) : (var_10)))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            arr_8 [(signed char)19] [(signed char)19] [i_2] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (arr_4 [i_1 - 1])))), (min((var_2), (((/* implicit */unsigned int) arr_4 [i_1 - 1]))))));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)-14633)) : (-657628131)));
            arr_9 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)113)), (var_3)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-2653))))) : (((arr_5 [16U] [i_2]) >> (((arr_4 [i_1]) + (2058813593)))))))) ? (((min((-657628131), (((/* implicit */int) (signed char)-63)))) & (min((arr_6 [i_1] [i_2]), (((/* implicit */int) (unsigned char)211)))))) : (((((/* implicit */int) (unsigned char)217)) - (((/* implicit */int) arr_3 [i_1 - 2] [i_2 + 2]))))));
        }
    }
    var_16 = (signed char)-72;
    /* LoopSeq 3 */
    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)195)))) ? (max((arr_5 [i_3] [i_3]), (1340886764U))) : (var_3)))) <= ((~(var_9)))));
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_3 - 2] [(unsigned char)6]))));
        var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) / (var_11))));
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)25530))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)59555)), (var_9)))))))));
        var_20 = ((/* implicit */unsigned short) ((unsigned char) (signed char)-106));
    }
    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] [i_4 + 1] = ((/* implicit */long long int) ((unsigned int) (unsigned short)59555));
        var_21 = ((/* implicit */int) arr_16 [i_4 - 2]);
        var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) (((~(((/* implicit */int) (signed char)63)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22036))) <= (-1954107448805241229LL))))))), ((+(var_10)))));
        var_23 = ((/* implicit */short) 4294967295U);
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(2168905594U)))))))) : (var_3)));
    }
    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) max((max((arr_21 [i_5 + 2] [(short)2]), (arr_21 [i_5 - 1] [i_5 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5 + 2] [(unsigned short)2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_5 + 1])))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-24531)), (4362854084686276211LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5 - 2] [i_5 - 1])))))) : (min((((/* implicit */unsigned int) (unsigned short)24502)), (arr_21 [i_5 - 2] [i_5 + 1])))));
        /* LoopSeq 2 */
        for (long long int i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 3066899223U))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 3; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 4) 
                    {
                        var_27 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_7])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9]))))))));
                        arr_34 [i_5 - 1] [i_6 - 2] [i_7] [i_8] [i_7] [i_8] = ((signed char) var_1);
                    }
                    for (signed char i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) var_8)) - (3931)))))) || (((/* implicit */_Bool) arr_6 [i_6 - 2] [i_6 + 1]))));
                        arr_37 [2U] [i_8 - 1] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_5] [10U] [i_7 - 2] [i_5] [i_7 - 2]))));
                        arr_38 [i_5] [i_6] [i_6 - 2] [i_7] [i_5] [8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_7] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_36 [i_5] [i_6] [i_6] [i_7 - 1] [i_8 - 1] [i_10 + 1])));
                    }
                    for (signed char i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(arr_27 [(unsigned short)5] [(short)0] [i_7] [(short)0]))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_30 = ((/* implicit */short) ((long long int) (unsigned char)186));
                        arr_41 [i_5] [i_6 - 1] [i_7 + 3] [i_6] [i_11 - 2] &= ((/* implicit */unsigned short) (~(((var_9) + (((/* implicit */long long int) arr_40 [i_5 + 2] [i_6] [i_7] [i_8] [i_8] [i_11 + 2]))))));
                        var_31 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                        var_32 = ((unsigned char) var_4);
                    }
                    var_33 = ((/* implicit */unsigned char) arr_27 [i_5 - 1] [i_5 + 2] [i_5 - 2] [i_5 - 2]);
                }
                /* vectorizable */
                for (signed char i_12 = 1; i_12 < 14; i_12 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_29 [i_7] [i_7 + 3] [i_7 + 2] [i_7 + 2]) : (((/* implicit */long long int) (+(2126061705U))))));
                    var_35 ^= (-(arr_40 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5] [i_5 - 2] [i_12 + 1]));
                    arr_44 [11U] [i_6] [9U] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) != (var_9)));
                    arr_45 [i_5] [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_5] = ((/* implicit */unsigned int) 592199568);
                }
                for (signed char i_13 = 1; i_13 < 14; i_13 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) ((unsigned short) 4053982149U));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) + (((((/* implicit */_Bool) arr_5 [i_13 - 1] [i_13 - 1])) ? (var_10) : (((/* implicit */long long int) arr_5 [i_13 + 1] [15LL]))))));
                }
                arr_48 [3LL] [4LL] [i_7] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2))))));
            }
        }
        /* vectorizable */
        for (long long int i_14 = 2; i_14 < 13; i_14 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned int) max((var_38), (((((2168905594U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_14] [i_14 + 2] [i_5] [i_14 + 2] [i_5] [4LL]))))) & (((/* implicit */unsigned int) (+(((/* implicit */int) arr_50 [i_5])))))))));
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)46887)) + (((/* implicit */int) (unsigned char)77))));
            /* LoopSeq 1 */
            for (short i_15 = 1; i_15 < 12; i_15 += 3) 
            {
                arr_54 [i_5] [i_14] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_23 [i_14 - 1]))));
                arr_55 [i_5 + 2] [i_5 - 1] [i_5 - 2] [i_5 + 2] = ((/* implicit */short) arr_49 [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_4)))));
                var_41 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_47 [i_14]))));
            }
        }
        var_42 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_27 [i_5] [i_5] [i_5] [i_5 - 1]) : (((/* implicit */long long int) 2126061701U))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) (signed char)-46)) ? (-4776065788648178668LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))))))));
    }
    var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned short)40264), (((/* implicit */unsigned short) (unsigned char)255)))))));
}
