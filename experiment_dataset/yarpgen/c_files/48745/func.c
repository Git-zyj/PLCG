/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48745
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
    var_17 = var_16;
    var_18 = ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            var_19 |= ((/* implicit */unsigned long long int) var_0);
            /* LoopSeq 4 */
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) arr_7 [i_2] [(unsigned char)7] [i_2 + 1] [5ULL]))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_3))));
                arr_10 [i_2] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) ^ (var_7))) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_2 + 1])) : (((/* implicit */int) var_14)))) + (15457))));
            }
            for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))));
                var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) ^ ((-(var_11)))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (short i_6 = 2; i_6 < 9; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) var_2);
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_5] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_11))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) var_13);
                    var_27 ^= ((/* implicit */short) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_4] [i_7])) - (39132)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_29 = ((((/* implicit */long long int) ((/* implicit */int) var_16))) % (var_4));
                    var_30 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (var_7)))) <= (((/* implicit */int) var_5))));
                    var_31 = ((/* implicit */long long int) ((unsigned short) var_3));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) + (((/* implicit */int) var_1))));
                    arr_31 [i_0] [i_1] [i_4] [i_4] [i_0] [i_9] = var_6;
                    var_33 = ((/* implicit */long long int) ((short) var_11));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_30 [i_0] [(short)4] [i_9] [i_9] [i_4])) : (((/* implicit */int) var_15))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    var_36 = arr_3 [7U];
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_6)) - (16777)))));
                }
                arr_34 [i_0] [i_0] [i_4] = arr_0 [i_4];
                var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
            }
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_39 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                arr_37 [i_0] [i_0] [(unsigned short)5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_11)));
            }
        }
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
        {
            arr_41 [i_0] [i_12] = var_13;
            arr_42 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) var_16);
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    {
                        arr_48 [i_13] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_14))));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_13] [i_13] [(unsigned char)3] [i_0] [i_0] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13] [i_14] [(unsigned char)0] [i_12] [i_13] [i_13]))) : (var_4)));
                    }
                } 
            } 
            arr_49 [2ULL] [i_12] [i_12] = ((/* implicit */short) ((unsigned long long int) var_3));
            arr_50 [i_0] [i_0] = ((/* implicit */int) arr_25 [i_0] [i_12]);
        }
        arr_51 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        var_42 ^= ((/* implicit */unsigned short) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_54 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((signed char) arr_53 [(unsigned short)11]))) : (((/* implicit */int) arr_53 [i_15]))));
    }
    var_43 = ((/* implicit */int) var_9);
}
