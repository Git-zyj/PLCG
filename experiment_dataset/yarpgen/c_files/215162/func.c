/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215162
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), ((((-(arr_2 [i_0 - 2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0 - 1])) <= (arr_1 [i_0 - 1])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+((+(((var_7) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_4 [5ULL] = ((/* implicit */unsigned int) var_8);
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */int) var_3);
        var_19 |= ((/* implicit */_Bool) arr_5 [i_1]);
        var_20 += ((/* implicit */unsigned int) 16024224676970329366ULL);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_21 *= var_14;
        var_22 = ((/* implicit */signed char) ((long long int) arr_10 [i_2] [i_2]));
        arr_11 [i_2] |= (-(((long long int) var_8)));
        var_23 = ((/* implicit */long long int) arr_2 [i_2]);
    }
    var_24 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_14 [6LL] [(unsigned short)2] |= ((unsigned int) var_0);
        var_25 += ((/* implicit */unsigned char) arr_6 [(unsigned char)0]);
        var_26 *= ((((/* implicit */_Bool) var_0)) ? (arr_13 [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_7 [i_3] [11LL])))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) var_3);
        var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_4 + 2] [i_4]))));
        var_28 += ((/* implicit */unsigned char) arr_7 [i_4] [i_4]);
        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)56))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 24; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_19 [i_5]))));
                    var_31 = ((/* implicit */long long int) arr_2 [i_7]);
                }
            } 
        } 
        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) ((var_6) >= (var_6))))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 2; i_8 < 23; i_8 += 1) 
        {
            var_33 = ((unsigned short) arr_20 [i_8 - 2]);
            /* LoopSeq 1 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                {
                    arr_35 [i_9] [i_9] [i_8 - 2] [(_Bool)1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5]))));
                    arr_36 [i_5] [i_5] [i_9] [i_5] [i_5] [i_5] = arr_0 [i_10] [i_8 + 1];
                }
                for (int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                {
                    arr_39 [i_9] [i_9] [i_9] [i_11] = ((/* implicit */_Bool) arr_29 [i_5] [i_8]);
                    var_34 = var_3;
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) 8482473240699707799ULL))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 24; i_12 += 2) 
                {
                    arr_42 [i_9] [(unsigned short)19] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_12] [i_9] [(unsigned char)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) : (2422519396739222277ULL)));
                    var_36 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_25 [i_5] [i_9] [i_12])) << (((arr_22 [13U]) - (3227143600U))))));
                    var_37 = ((/* implicit */unsigned char) (+(((int) arr_25 [i_5] [i_9] [i_12 - 2]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_49 [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_13)) ? (arr_41 [i_8] [i_13] [i_5] [i_8] [i_5]) : (((/* implicit */unsigned long long int) var_6)))));
                            var_38 *= ((/* implicit */unsigned long long int) var_8);
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_43 [i_5] [i_8] [i_8 + 2] [12U])))))));
                            arr_50 [i_14] [i_9] [(_Bool)1] [i_9] [21] = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                            var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) ((-2072795736) - (((/* implicit */int) (unsigned char)3)))))));
                        }
                    } 
                } 
                arr_51 [i_9] [15ULL] [(_Bool)0] = ((((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned char)188)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_5] [(unsigned char)24] [(unsigned char)24] [(_Bool)1] [0U]))) : ((-(arr_0 [2U] [(signed char)14]))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                arr_55 [i_5] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) ((unsigned char) arr_28 [i_5]))) : (((/* implicit */int) ((unsigned short) arr_33 [17U] [20] [17LL] [17ULL] [8U])))));
                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((unsigned int) (_Bool)1)))));
                var_42 = ((/* implicit */_Bool) (((!(arr_28 [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2)));
            }
            var_43 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5]))) >= (((unsigned int) arr_44 [i_8] [18U] [(_Bool)1] [(_Bool)1])));
        }
    }
}
