/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248244
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0)))))))) && (((/* implicit */_Bool) (+((~(var_3))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_18 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 + 1])))))) | ((~((-9223372036854775807LL - 1LL)))));
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 2]))) : (arr_3 [i_0] [i_0] [i_1 + 2]))) >= (max((((/* implicit */unsigned long long int) ((var_14) << (((9223372036854775807LL) - (9223372036854775807LL)))))), (max((((/* implicit */unsigned long long int) (unsigned short)50454)), (var_12)))))));
        }
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~((~(((/* implicit */int) var_5)))))))));
            /* LoopSeq 4 */
            for (long long int i_3 = 4; i_3 < 22; i_3 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((max((arr_8 [i_2 - 1]), (arr_8 [i_2 + 2]))) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_16 [i_4] [i_4] [i_3 - 1] [i_2 + 2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_4 - 1] [i_2 + 1] [i_2 - 2] [i_4])), (arr_3 [i_3 - 3] [i_3 - 1] [i_3 - 1])))) && (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_4 - 2] [i_3 - 2] [i_0] [i_0] [i_0] [i_5])) ? (arr_13 [i_2 - 2] [i_5] [i_5] [i_4 - 1] [i_3 - 1]) : (var_4)))) >= (arr_3 [i_0] [i_2 - 1] [i_5])))));
                            arr_17 [i_4] [i_0] [i_3 - 3] [i_4] [i_3 - 3] [i_3 - 3] [i_4] = ((/* implicit */unsigned char) var_4);
                            arr_18 [i_0] [i_0] [i_0] [i_4 - 3] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) var_11)) & (var_1))))), (((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_4])))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_5])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_5] [i_4 - 2] [i_3 - 2]))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
            {
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_13 [i_0] [i_2 + 2] [i_2 + 2] [i_0] [i_6 + 3])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */int) arr_11 [i_8 - 2]);
                            var_22 = ((/* implicit */unsigned short) max((var_22), (arr_12 [i_2] [i_2 + 1] [i_2 + 1] [i_2])));
                            arr_28 [i_0] [i_0] [i_0] [i_2] [i_8 - 1] &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 17LL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_9 = 3; i_9 < 20; i_9 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) arr_20 [i_9] [i_2 + 2] [i_9]);
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) arr_31 [i_11] [i_9 + 1] [i_2 - 1]);
                            var_24 = ((long long int) arr_29 [i_9 - 1] [i_9] [i_9]);
                        }
                    } 
                } 
                arr_37 [i_2 - 1] [i_9 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((-9223372036854775807LL - 1LL)) : (1LL)));
            }
            for (unsigned char i_12 = 3; i_12 < 20; i_12 += 3) /* same iter space */
            {
                arr_40 [i_12] [i_2 - 2] [i_12 - 2] = (~(((/* implicit */int) (unsigned short)1)));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_12 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 2]) & (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_12 - 2])))))))) ? (((((/* implicit */unsigned long long int) arr_32 [i_0] [i_12 + 3] [i_0] [i_2 + 2] [i_0])) + (18026988638676926169ULL))) : ((~(arr_35 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_12 - 1] [i_2 + 2] [i_12 - 2])))));
            }
            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((419755435032625447ULL), (((/* implicit */unsigned long long int) (~(((long long int) arr_22 [i_0] [i_0] [i_2 + 1] [i_2 + 1])))))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0] [i_2 - 1] [i_2 + 2])) ? (arr_33 [i_0] [i_2 + 2] [i_0] [i_0] [i_2 + 2] [i_2 - 2]) : (arr_33 [i_0] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 + 2])))) && (((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
        }
        /* vectorizable */
        for (unsigned short i_13 = 2; i_13 < 21; i_13 += 4) /* same iter space */
        {
            var_27 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_13 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_4 [i_0] [i_0])))) >> ((((~(((/* implicit */int) arr_29 [i_13 + 1] [i_0] [i_0])))) + (75)))));
            arr_44 [i_0] [i_13 + 2] = (+(((arr_34 [i_0] [i_0] [i_0] [i_0] [i_13] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))))));
            arr_45 [i_13] [i_13] [i_13] = ((/* implicit */long long int) (~(((18026988638676926167ULL) + (((/* implicit */unsigned long long int) var_13))))));
            arr_46 [i_0] [i_0] = (~((+(arr_25 [i_13 + 2] [i_13 + 2]))));
            var_28 = (~(((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0]))));
        }
        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                arr_51 [i_0] [i_15] [i_15] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-998738361) : (((/* implicit */int) (unsigned char)143))));
                var_29 -= ((/* implicit */unsigned short) min((min((arr_34 [i_15] [i_0] [i_14] [i_14] [i_0] [i_0]), (arr_34 [i_0] [i_0] [i_14] [i_14] [i_0] [i_14]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0])))))));
                var_30 -= ((/* implicit */long long int) (unsigned char)243);
                var_31 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((-1LL) | (arr_50 [i_15] [i_14] [i_15] [i_0])))) ? (arr_9 [i_0] [i_0] [i_0] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (var_8))))))));
                /* LoopSeq 2 */
                for (unsigned short i_16 = 3; i_16 < 21; i_16 += 3) /* same iter space */
                {
                    var_32 = ((((/* implicit */_Bool) 9218868437227405312LL)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775799LL));
                    var_33 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) max((arr_30 [i_0] [i_14] [i_15] [i_16 + 1]), (-998738388)))), (((((/* implicit */_Bool) -15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48281))) : (var_16))))) - (((/* implicit */long long int) arr_30 [i_16 + 2] [i_15] [i_14] [i_0]))));
                }
                for (unsigned short i_17 = 3; i_17 < 21; i_17 += 3) /* same iter space */
                {
                    var_34 |= ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_14] [i_15]))) ? ((+(3672489657080532898ULL))) : (((((/* implicit */_Bool) arr_25 [i_15] [i_17 + 2])) ? (((/* implicit */unsigned long long int) arr_25 [i_17 - 1] [i_17 - 2])) : (arr_42 [i_17 + 1] [i_14] [i_14]))));
                    var_35 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((arr_35 [i_17 + 1] [i_17 + 1] [i_17 + 2] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_15])))))) ? (max((5372864847577711898LL), (((/* implicit */long long int) -1759801438)))) : ((~(-7LL))))));
                }
            }
            var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_14])), (((long long int) (unsigned char)68))));
            arr_56 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_35 [i_0] [i_0] [i_0] [i_14] [i_14] [i_0] [i_14]) * (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
            arr_57 [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
        }
        arr_58 [i_0] = ((unsigned long long int) 17179869183LL);
    }
    for (long long int i_18 = 0; i_18 < 14; i_18 += 2) /* same iter space */
    {
        arr_61 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_18] [i_18])))) ? (((((/* implicit */_Bool) max((arr_60 [i_18]), (((/* implicit */unsigned long long int) arr_8 [i_18]))))) ? (arr_35 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */unsigned long long int) arr_30 [i_18] [i_18] [i_18] [i_18])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_38 [i_18] [i_18]))))));
        arr_62 [i_18] [i_18] &= (+(var_15));
        var_37 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(arr_47 [i_18])))))) && (((/* implicit */_Bool) ((max((var_0), (6132025379126792484LL))) >> (((4778492408574121523LL) - (4778492408574121471LL))))))));
    }
    for (long long int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */long long int) ((int) max((arr_5 [i_19]), (arr_5 [i_19]))));
        arr_67 [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_19])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_19]))))) != (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) -998738361)))))));
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
        arr_68 [i_19] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_49 [i_19] [i_19] [i_19]))) & ((-(arr_49 [i_19] [i_19] [i_19]))));
    }
}
