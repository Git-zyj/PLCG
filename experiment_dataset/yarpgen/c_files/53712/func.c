/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53712
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_10)))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((-4245832548463149526LL) != (-4245832548463149517LL)))) >> ((((+(((/* implicit */int) arr_0 [(signed char)8])))) - (120)))));
        var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((14564443241992158266ULL), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_6)));
    var_21 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) var_11);
        var_22 ^= ((/* implicit */signed char) arr_4 [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((arr_10 [i_2]) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))));
            var_24 = ((/* implicit */int) ((unsigned long long int) arr_8 [i_2]));
        }
        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (signed char i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_0)))) ? (-4245832548463149506LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 2] [i_6 - 2] [i_6])))));
                        var_26 = ((/* implicit */int) (unsigned short)40249);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (long long int i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) (_Bool)1);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) arr_8 [i_2]))));
                        var_29 = (~(((/* implicit */int) (signed char)-35)));
                    }
                } 
            } 
            var_30 ^= ((/* implicit */unsigned char) arr_7 [i_4 + 1]);
        }
        for (unsigned int i_9 = 2; i_9 < 22; i_9 += 3) /* same iter space */
        {
            var_31 = (!(((/* implicit */_Bool) (short)-3848)));
            /* LoopSeq 3 */
            for (long long int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */int) ((0U) * (((/* implicit */unsigned int) 0))));
                var_33 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [(unsigned short)14]))));
            }
            for (long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */int) 72057594037927932LL);
                var_35 = ((/* implicit */unsigned int) (unsigned char)26);
                arr_30 [(unsigned char)4] [i_11] [i_2] [i_2] = arr_24 [i_2];
                var_36 = ((/* implicit */_Bool) (~(arr_21 [i_9 - 2] [i_9 - 2] [i_11] [7LL] [i_11])));
                arr_31 [i_2] [i_9] [i_9] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_9 + 1])) + (((/* implicit */int) (unsigned short)65535))));
            }
            for (long long int i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2] [i_9 - 1] [(_Bool)1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_2] [i_2] [(_Bool)1]))));
                var_38 += ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_9 + 1] [i_9 - 1] [i_2] [i_2])) >> (((-72057594037927932LL) + (72057594037927944LL)))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 21; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (((((/* implicit */_Bool) 3789470440U)) ? (var_17) : (1134907106097364992ULL)))));
                            var_40 = ((/* implicit */_Bool) arr_20 [i_2] [i_9 + 1] [i_9]);
                            var_41 = (i_2 % 2 == zero) ? (((1006632960U) >> (((arr_17 [i_12] [i_2] [i_2] [(short)18]) + (4415684005056329901LL))))) : (((1006632960U) >> (((((arr_17 [i_12] [i_2] [i_2] [(short)18]) - (4415684005056329901LL))) - (3928445957998571436LL)))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */long long int) arr_11 [i_9 - 2] [i_9 - 2] [i_9 - 1]);
                /* LoopSeq 1 */
                for (short i_15 = 2; i_15 < 21; i_15 += 2) 
                {
                    var_43 = ((/* implicit */_Bool) arr_34 [i_15 + 2] [i_9 + 1]);
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7600599170649831944ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (72057594037927952LL)));
                    arr_47 [i_15] [i_15] &= ((/* implicit */unsigned int) var_4);
                }
            }
            var_45 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_9 - 1])) == (((/* implicit */int) arr_19 [i_2] [i_2] [i_9 + 1]))));
        }
        for (unsigned int i_16 = 2; i_16 < 22; i_16 += 3) /* same iter space */
        {
            var_46 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [(_Bool)1] [i_2] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_16] [i_16 + 1] [i_16 - 2] [i_16 + 1] [i_16 + 1] [i_16 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (arr_21 [i_2] [i_16] [i_16] [i_16] [i_16])))));
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_47 = ((/* implicit */unsigned short) arr_25 [i_16 - 2] [i_16 + 1] [i_2] [i_16 - 1]);
                var_48 = ((/* implicit */long long int) arr_18 [(_Bool)1] [(short)12] [i_17]);
                arr_54 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [(short)19] [i_2])) && (((/* implicit */_Bool) 8750460535578606526ULL))));
            }
            var_49 = ((/* implicit */unsigned long long int) ((2061584302080LL) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)12996))) | (arr_16 [(unsigned char)19] [i_16] [i_16])))));
        }
        var_50 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_38 [(_Bool)1] [i_2]))));
    }
}
