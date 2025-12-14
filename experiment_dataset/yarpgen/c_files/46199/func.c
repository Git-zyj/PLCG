/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46199
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
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_2))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_8 [i_0] [i_1]))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (arr_0 [1U])));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3 - 2] [i_4 + 2])) ? (arr_12 [i_4 - 1] [i_4 + 2] [i_2] [i_4 + 1] [i_4 + 2] [i_4 - 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)48469)))))));
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_15 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 2547162226U)) && (((/* implicit */_Bool) var_12)))));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 2416866720U))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned short)17059))));
            }
            var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3140760155U)) ? (((/* implicit */unsigned long long int) var_13)) : (var_10)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                arr_18 [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (2547162227U)));
                arr_19 [i_0] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) ((int) 0)));
                var_24 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                /* LoopSeq 3 */
                for (int i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    arr_22 [i_6] [i_0] = ((/* implicit */long long int) (~(10)));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6)) ? (arr_17 [i_6]) : (-206088456)))) ? (((/* implicit */int) (unsigned short)48485)) : (((/* implicit */int) var_8))));
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_26 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6832))) / (arr_12 [i_0] [i_1] [i_0] [i_6] [i_8] [i_8])));
                    arr_25 [i_8] [i_8] [i_6] [i_8] [i_8] [i_8] = arr_9 [i_8] [i_6] [(short)13] [i_1] [i_6] [i_0];
                    var_27 = ((/* implicit */long long int) var_13);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((/* implicit */short) (!(((_Bool) 18446744073709551608ULL))));
                    arr_28 [i_9] [i_0] [i_9] [i_9] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_6 - 1] [i_6 - 1] [i_9]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */int) (((~(((/* implicit */int) (short)-16681)))) >= (((((/* implicit */_Bool) var_2)) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_3))))));
                            var_30 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_6 - 1] [i_6] [i_6] [i_10]))));
                            var_31 -= ((/* implicit */int) var_8);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 3) 
            {
                arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_12 [i_12] [i_12] [i_0] [i_12] [i_12 + 2] [i_12 + 2]));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        {
                            arr_45 [i_0] [(short)10] [i_12 + 1] [(unsigned short)19] [(short)10] = ((/* implicit */unsigned short) (-(arr_14 [i_14] [i_12] [i_1])));
                            var_32 = ((/* implicit */unsigned int) arr_40 [i_12 - 2]);
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((signed char) arr_6 [i_12 + 2] [i_12 - 1] [i_12 - 2] [i_12 + 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 4; i_15 < 22; i_15 += 1) 
                {
                    for (unsigned int i_16 = 1; i_16 < 22; i_16 += 2) 
                    {
                        {
                            var_34 -= ((/* implicit */unsigned char) (-(arr_47 [i_16 - 1] [3ULL] [i_12 - 1] [i_15 + 2] [i_15 + 1] [i_12 - 1])));
                            var_35 = ((/* implicit */unsigned short) arr_1 [i_12 - 1]);
                            arr_50 [i_0] [i_1] [i_12 - 2] [i_15 + 1] [i_16] &= ((/* implicit */signed char) arr_29 [i_0] [i_1] [i_12 + 2] [i_15] [i_16]);
                            var_36 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            arr_54 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32916)) ? (14945571871308218861ULL) : (((/* implicit */unsigned long long int) -14))));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_17] [i_17]))))))))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_58 [i_0] [i_17] [i_17] [i_18] = ((/* implicit */int) (((+(((/* implicit */int) arr_39 [(unsigned short)4] [(unsigned short)4] [4LL] [i_18])))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) <= (((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                var_38 = ((int) ((((/* implicit */_Bool) -8)) ? (9) : (((/* implicit */int) (signed char)-84))));
            }
        }
    }
    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
    {
        arr_62 [i_19] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_38 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)30641)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
        /* LoopNest 3 */
        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            for (long long int i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                for (long long int i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) 10))));
                        arr_71 [i_19] [i_20] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((long long int) 2));
                        var_40 = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) arr_32 [i_22] [i_20] [i_21] [i_22])));
                    }
                } 
            } 
        } 
    }
    var_41 &= ((/* implicit */short) (_Bool)1);
    var_42 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((9) / (((/* implicit */int) (unsigned short)48477))))))) ? (((((long long int) -9)) - (((/* implicit */long long int) ((((/* implicit */_Bool) 5677540671234622917ULL)) ? (25) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_43 = ((/* implicit */unsigned short) var_8);
}
