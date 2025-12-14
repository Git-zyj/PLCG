/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24145
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) < (arr_6 [i_1] [i_2])))));
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_2] [i_1]))));
                    }
                } 
            } 
            var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) (unsigned short)64558))));
        }
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_22 = ((((unsigned long long int) arr_3 [i_0])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_4])) != (((/* implicit */int) (unsigned short)64536)))))));
            var_23 = 3121181024U;
            var_24 = ((/* implicit */signed char) (+(((-3833817039405455947LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-14708)))))));
            var_25 = ((/* implicit */short) (-(arr_11 [i_0])));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_0 [i_0]))));
            var_27 = ((/* implicit */unsigned int) (signed char)-105);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_28 = (i_0 % 2 == 0) ? (((((((/* implicit */_Bool) 11016904892065868991ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 4294967295U)))) >> (((((/* implicit */int) arr_10 [i_0] [i_0])) - (89))))) : (((((((/* implicit */_Bool) 11016904892065868991ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 4294967295U)))) >> (((((((/* implicit */int) arr_10 [i_0] [i_0])) - (89))) + (82)))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (unsigned short i_8 = 3; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_6])) ? (arr_19 [i_0] [i_6] [i_7] [i_8 - 2]) : (arr_7 [i_0 - 1])));
                        var_30 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((arr_20 [i_8 - 3] [i_6]) + (2147483647))) >> (((arr_4 [i_0] [0U] [i_0] [i_0]) + (5318837053435572306LL)))))) : (((/* implicit */unsigned int) ((((arr_20 [i_8 - 3] [i_6]) + (2147483647))) >> (((((arr_4 [i_0] [0U] [i_0] [i_0]) + (5318837053435572306LL))) + (1763492322768981053LL))))));
                        var_31 -= ((/* implicit */signed char) arr_12 [4]);
                        var_32 = ((/* implicit */long long int) (~(4008313312U)));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
            {
                {
                    var_33 = ((/* implicit */long long int) ((unsigned int) 216172782113783808LL));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        for (long long int i_12 = 3; i_12 < 11; i_12 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1]))));
                                var_35 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (signed char)-105)) - (((/* implicit */int) arr_3 [i_0])))));
                                var_36 = ((/* implicit */unsigned long long int) (+(arr_26 [i_0] [i_0 - 1])));
                            }
                        } 
                    } 
                    var_37 -= ((/* implicit */unsigned int) (~((~(arr_27 [0ULL] [i_9] [i_10])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_13 = 1; i_13 < 23; i_13 += 2) 
    {
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 2262765479U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14708))) : (10000433382005717498ULL)));
        var_39 = ((/* implicit */long long int) arr_35 [i_13] [i_13 - 1]);
        /* LoopSeq 2 */
        for (unsigned int i_14 = 1; i_14 < 24; i_14 += 1) 
        {
            var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_37 [(signed char)11] [i_13]) <= (arr_33 [i_13] [i_13]))))));
            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) arr_37 [i_13] [18LL]))));
        }
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            var_42 = (-(arr_36 [i_13] [i_15]));
            /* LoopNest 2 */
            for (signed char i_16 = 3; i_16 < 22; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    {
                        var_43 = arr_43 [i_13] [i_15] [i_13];
                        var_44 = (i_13 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_13])) >> (((((/* implicit */int) arr_38 [i_13])) - (26523)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_38 [i_13])) + (2147483647))) >> (((((((/* implicit */int) arr_38 [i_13])) - (26523))) + (56525))))));
                        var_45 |= ((/* implicit */unsigned char) arr_42 [i_17] [i_15]);
                        var_46 = ((/* implicit */long long int) min((var_46), (((((/* implicit */_Bool) arr_46 [i_17] [i_17] [i_16] [i_16] [i_16 + 1])) ? (arr_46 [i_17] [22] [i_17] [i_16 - 3] [i_16 + 1]) : (arr_46 [i_17] [i_17] [4U] [i_16 + 2] [i_16 + 1])))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_18 = 3; i_18 < 24; i_18 += 4) 
        {
            var_47 *= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_13] [i_13 - 1] [(unsigned char)18])))))));
            var_48 = ((/* implicit */long long int) (+(((/* implicit */int) arr_47 [i_13] [i_13] [i_13 - 1]))));
            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)122)) ? (((((/* implicit */_Bool) arr_43 [i_13] [i_18] [i_13])) ? (((/* implicit */int) arr_38 [i_13])) : (((/* implicit */int) arr_40 [i_13 + 2] [i_13 + 2] [i_13 + 2])))) : (((/* implicit */int) ((arr_42 [i_13] [i_13]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)105))))))));
        }
    }
    var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)127))));
    var_51 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_18)))))))) + (max((10967712896350823518ULL), (((/* implicit */unsigned long long int) 1756735293))))));
}
