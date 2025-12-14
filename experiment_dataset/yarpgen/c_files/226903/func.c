/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226903
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 ^= (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) var_6)) + (15)))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-32749)), (var_8)))) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0])))) & ((+(var_4)))));
    }
    for (int i_1 = 2; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_4 [i_1 - 1]))))));
        var_14 = ((/* implicit */signed char) (~(max((((/* implicit */int) arr_5 [i_1])), ((~(((/* implicit */int) var_6))))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 - 2])))))));
        var_16 = ((/* implicit */_Bool) arr_4 [i_1 - 2]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) arr_8 [i_2]))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_18 [i_5] [i_5 + 1] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) arr_8 [i_5 - 2]);
                        arr_19 [i_5] [(signed char)12] [i_3 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_13 [11LL] [i_5 - 2] [i_5] [i_5 + 1])) : (((/* implicit */int) var_1))));
                        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_11)));
                    }
                } 
            } 
        } 
        arr_20 [i_2 + 1] = ((/* implicit */short) (+((-(1969849919)))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((unsigned long long int) arr_9 [i_2 - 2] [i_2 - 2]))));
        arr_21 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2 - 1]))))))));
    }
    for (int i_6 = 2; i_6 < 24; i_6 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned int) 33554431ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 24; i_9 += 2) 
                    {
                        for (int i_10 = 1; i_10 < 24; i_10 += 4) 
                        {
                            {
                                arr_36 [i_9] [i_7] [i_7] = ((/* implicit */unsigned int) var_1);
                                arr_37 [i_7] [i_7 - 1] [i_7 - 1] [(unsigned short)8] [i_8 - 1] [i_7 - 1] [i_7] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) arr_26 [i_8 - 1] [i_7 - 1])) - (((var_4) / (((/* implicit */unsigned long long int) var_11))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((2287828610704211968LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7] [i_6]))) : (max(((~(var_7))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_8]))))))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_7)))) ? (((arr_17 [i_6 + 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_6]))))))) : (((/* implicit */unsigned long long int) (+(arr_28 [i_6 + 1]))))));
        /* LoopSeq 3 */
        for (unsigned short i_11 = 2; i_11 < 23; i_11 += 4) 
        {
            var_23 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) arr_26 [i_6 - 2] [i_6 - 1])))), (((/* implicit */unsigned long long int) (~(var_3))))))));
            var_24 = ((/* implicit */unsigned short) var_6);
            arr_40 [i_11] [i_6] = ((/* implicit */signed char) (+(arr_11 [i_6] [i_11 + 1])));
        }
        for (signed char i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        {
                            arr_50 [i_6] [i_12] [i_13] [i_14 + 2] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                            var_25 ^= ((/* implicit */short) (+(((/* implicit */int) arr_29 [i_14] [i_14 - 1] [i_12] [i_12] [i_6 + 1] [i_6 + 1]))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) var_9);
            }
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_17] [21U] [i_12] [21U] [i_6 + 1])) ? (var_4) : (arr_17 [i_6 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (2968296941U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58)))))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33242))) : (9223372036854775791LL))))), (((/* implicit */long long int) ((-1) != (((/* implicit */int) (unsigned short)55464)))))));
                        arr_56 [i_6] [i_6 - 2] = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((signed char) 744284980)))));
            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (4095) : (((/* implicit */int) (signed char)-111)))))));
            arr_60 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_6 + 1])) && (((/* implicit */_Bool) (+(var_9))))))) == ((~(((/* implicit */int) var_0))))));
        }
    }
    var_30 ^= ((/* implicit */unsigned int) var_3);
    var_31 = ((/* implicit */unsigned long long int) max((var_31), (max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (18446744073709551610ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) 33554431)) : (min((var_3), (((/* implicit */long long int) var_9)))))))))));
}
