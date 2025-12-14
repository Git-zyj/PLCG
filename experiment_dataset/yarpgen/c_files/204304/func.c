/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204304
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
    var_20 = 2147483520LL;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-26602))))) ? (((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) (unsigned short)12552)) : (((/* implicit */int) (unsigned short)14455)))) : (((((((/* implicit */int) var_7)) >> (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) (unsigned char)54)))))))));
        var_22 += ((/* implicit */_Bool) min((((long long int) (_Bool)1)), (9223372036854775807LL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_23 -= min(((unsigned short)52984), ((unsigned short)20177));
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_1] [i_4])), (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_4] [i_3])) & (((/* implicit */int) (_Bool)1))))))) : ((+(arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) && (((/* implicit */_Bool) arr_3 [i_1 - 2]))))), ((-(((/* implicit */int) arr_3 [i_1 - 1]))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11670029000799174697ULL)) ? (((/* implicit */int) (short)-32764)) : (-1736425233)));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_24 [i_7] [i_7] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((4294967295U) >> (((((/* implicit */int) (unsigned char)202)) - (181)))));
                        arr_25 [i_0] [i_5 + 2] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_9 [i_0])) ^ (var_2)));
                        var_25 = ((/* implicit */unsigned char) arr_22 [i_5 + 2] [i_5 - 1]);
                        arr_26 [i_6] [i_7] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_12 [i_5 + 1] [i_0])) : (arr_20 [i_0] [i_0] [i_0] [i_0])));
                        arr_27 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_0] [i_5 - 2])) ? (((/* implicit */int) (short)-28879)) : (arr_20 [i_0] [i_7] [i_6] [i_5 - 2])));
                    }
                } 
            } 
            arr_28 [i_5] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_5] [i_5 - 1] [i_0]);
            var_26 = ((/* implicit */signed char) ((unsigned char) var_5));
        }
        for (int i_8 = 3; i_8 < 21; i_8 += 1) 
        {
            arr_31 [i_8 - 3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)50870)) ^ (-1287024243)));
            var_27 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(var_13))), (((/* implicit */unsigned long long int) var_19)))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                for (int i_10 = 4; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (2147483643) : (-2147483620)))) ? (((int) ((((/* implicit */_Bool) 999636993817752274ULL)) ? (var_2) : (((/* implicit */long long int) var_0))))) : (((((((/* implicit */_Bool) var_15)) ? (arr_35 [i_10] [i_9] [i_8] [i_0]) : (((/* implicit */int) arr_22 [i_0] [i_10])))) >> (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) - (9087827042873925801LL))) + (9087827042873925755LL))))))))));
                        var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 - 1])) / (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]))) : (8470510954513081482LL)));
                        arr_38 [i_9] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_7)))))) <= (var_4)));
                    }
                } 
            } 
        }
        for (long long int i_11 = 3; i_11 < 19; i_11 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_11])) ? (arr_17 [i_0] [i_0]) : (((/* implicit */int) (signed char)127))))) ? ((-(-2007217465))) : (arr_17 [i_0] [i_0])))) ? (((/* implicit */int) arr_8 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) var_8))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    {
                        arr_47 [i_12] [i_12] = ((/* implicit */signed char) ((arr_44 [i_11 - 2]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_11 - 2])) >> (((/* implicit */int) arr_44 [i_0]))))) : (min((18446744073709551599ULL), (((/* implicit */unsigned long long int) 1021581079U))))));
                        arr_48 [i_0] [i_0] [i_12] [i_13] = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_13] [i_11] [i_12] [i_13]);
                        var_31 |= ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) -1535809295)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                        {
                            var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2305807824841605120LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (4224528197096153465LL)));
                            var_33 = ((/* implicit */int) arr_51 [i_11] [i_11] [i_12] [i_13] [i_14]);
                            arr_52 [i_0] [i_0] [i_12] [i_13] [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1535809295) - (((/* implicit */int) (_Bool)1))))) ? (arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                    }
                } 
            } 
            var_34 ^= ((/* implicit */unsigned short) ((18446744073709551603ULL) << (((((/* implicit */int) (short)-20270)) + (20306)))));
            var_35 = ((/* implicit */long long int) ((((arr_49 [i_0] [i_11] [i_11 - 2] [i_11] [i_11 - 2] [i_0]) - (arr_49 [i_0] [i_11] [i_11 - 1] [i_0] [i_11] [i_0]))) / (min((arr_49 [i_0] [i_11] [i_11 - 2] [i_0] [i_0] [i_11]), (arr_49 [i_0] [i_11 - 3] [i_11 + 3] [i_0] [i_0] [i_0])))));
        }
    }
    for (unsigned char i_15 = 2; i_15 < 15; i_15 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_16 = 3; i_16 < 16; i_16 += 1) 
        {
            for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                for (long long int i_18 = 4; i_18 < 15; i_18 += 3) 
                {
                    {
                        var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_41 [i_16])))) ? (((/* implicit */long long int) -1385893840)) : (3095579821738881817LL)));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_15] [i_15] [i_16] [i_17] [9LL] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (min((((/* implicit */long long int) arr_53 [i_16] [i_15])), (arr_21 [i_15])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-110)) || (((/* implicit */_Bool) min((arr_29 [i_15] [i_16 - 3]), (var_15)))))))) : (var_4)));
                    }
                } 
            } 
        } 
        arr_64 [i_15] = ((/* implicit */signed char) -4224528197096153489LL);
    }
    var_38 = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18228)) >> (((((/* implicit */int) (unsigned short)19379)) - (19360)))))), (var_11)))));
    var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4224528197096153510LL)) ? (((/* implicit */int) (short)1)) : (1762529685)));
}
