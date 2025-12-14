/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210181
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
    var_16 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((unsigned int) var_2))), (var_1))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_2)))), (var_10))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5944)) ? (((/* implicit */int) (unsigned short)35754)) : (((/* implicit */int) (signed char)103))));
                    var_17 = ((/* implicit */unsigned char) (signed char)98);
                    var_18 += ((/* implicit */short) (-(((/* implicit */int) (unsigned char)0))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_2] [i_1] [i_0]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (int i_4 = 4; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [i_3] [i_4 - 4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_2))) & (var_10)));
                    arr_16 [i_4 - 3] [i_4 - 4] = ((/* implicit */unsigned short) (~(var_12)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_20 [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9)));
            var_19 = ((((/* implicit */_Bool) var_13)) ? (arr_13 [i_0] [i_5]) : ((+(var_14))));
        }
        for (signed char i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            var_20 ^= ((/* implicit */short) (-(((/* implicit */int) (short)27781))));
            /* LoopSeq 1 */
            for (int i_7 = 4; i_7 < 12; i_7 += 2) 
            {
                arr_27 [i_0] [(unsigned short)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7 - 1] [i_7 - 1] [i_6 + 1]))) - (((((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_6] [i_7]))) : (var_6)))));
                arr_28 [i_6] [i_6 + 1] [i_6] [i_6] = ((/* implicit */signed char) (+(arr_14 [i_6 + 1])));
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_21 = ((/* implicit */long long int) ((unsigned char) 624935385));
                    var_22 = ((/* implicit */long long int) ((((unsigned int) var_9)) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_17 [10ULL] [i_6 + 1]))))));
                    arr_32 [i_8] [i_8] [i_7] [11ULL] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0])) != (((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (short)-27753)) ^ (((/* implicit */int) var_2)))));
                }
                for (short i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) ((short) arr_0 [i_9 + 2]));
                        arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)14882)) : (((/* implicit */int) (signed char)98))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [3])) << (((arr_34 [i_0] [i_7]) - (1665161009U)))))) : (((((/* implicit */_Bool) arr_17 [i_7] [i_7])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                    for (signed char i_11 = 3; i_11 < 10; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                        arr_40 [i_11] [i_11] = ((/* implicit */short) arr_12 [i_11] [i_6 + 1] [i_7 - 2]);
                    }
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_7] [i_7] [i_7])) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                }
                arr_41 [(short)8] [(short)8] [i_0] = ((/* implicit */unsigned char) ((arr_10 [i_0]) ? (((/* implicit */int) arr_10 [i_7 - 1])) : (((/* implicit */int) (_Bool)0))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 3; i_12 < 11; i_12 += 4) 
        {
            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_12 + 3])) ? (var_1) : (arr_19 [i_0] [i_0] [i_0])));
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_28 ^= ((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_12] [i_12])))));
                            arr_56 [i_0] [(_Bool)1] [i_12] [i_13] [i_14] [i_15] [i_14] = (((+(18446744073709551615ULL))) >> (((arr_45 [i_12 - 1] [i_15]) - (16806445585025519233ULL))));
                            var_29 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (arr_12 [(unsigned short)1] [i_12] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (arr_54 [i_0] [i_0] [i_0] [8ULL] [i_0] [i_0])));
                            arr_57 [i_14] = ((/* implicit */signed char) ((long long int) var_11));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_16 = 1; i_16 < 20; i_16 += 2) 
    {
        var_30 ^= ((/* implicit */unsigned char) var_14);
        var_31 = ((/* implicit */signed char) 18446744073709551600ULL);
    }
    for (unsigned short i_17 = 2; i_17 < 9; i_17 += 4) /* same iter space */
    {
        arr_64 [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_49 [i_17] [i_17] [i_17] [i_17]))));
        var_32 = (-(((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_17 - 2] [i_17] [i_17]))))));
        var_33 = ((/* implicit */short) max((((var_0) - (arr_45 [4U] [i_17 - 2]))), (1ULL)));
    }
    for (unsigned short i_18 = 2; i_18 < 9; i_18 += 4) /* same iter space */
    {
        arr_67 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)213))));
        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (var_1)))) ? (max((var_14), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) arr_22 [i_18])))) != (((arr_43 [i_18 + 3] [i_18 - 1]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3228848273485926083LL)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
        var_35 = ((/* implicit */unsigned short) var_9);
        arr_68 [i_18] [i_18] = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_34 [i_18] [i_18 + 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))) : (max((5980830278258066777ULL), (((/* implicit */unsigned long long int) (unsigned char)232)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5980830278258066763ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_58 [i_18]))))));
        var_36 = ((/* implicit */unsigned long long int) arr_11 [i_18] [i_18] [i_18]);
    }
}
