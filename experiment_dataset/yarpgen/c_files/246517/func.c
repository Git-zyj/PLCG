/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246517
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2026418568)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 262143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_2 + 1]))) : (var_8)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (arr_10 [i_1] [i_1 + 1] [i_2] [i_2 + 1] [(unsigned short)8] [i_2])));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_2 + 1])) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1] [i_2 + 1]))));
                                var_19 |= ((/* implicit */unsigned int) ((((-262143) + (2147483647))) << (((((-262139) + (262170))) - (31)))));
                                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -262139)) ? (((/* implicit */int) (unsigned short)42555)) : (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [(unsigned short)8] [i_0] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : ((+(((/* implicit */int) arr_4 [8ULL] [i_0]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 11761596176913124694ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (2581636149072769558ULL))))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [(short)0] [i_0] [i_1 + 1] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_2 - 1] [i_2 + 1])));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = (-(((/* implicit */int) (unsigned short)53646)));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned short i_6 = 3; i_6 < 7; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned short) arr_11 [(_Bool)1] [i_5]);
                        arr_24 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (arr_11 [i_0] [(unsigned short)1])));
                        arr_25 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_6 - 2] [(unsigned short)8] [i_0]))));
                        arr_26 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) ((_Bool) (_Bool)1));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    arr_33 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_3))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned int) var_1)) : (arr_10 [i_0] [9] [i_8] [i_8] [i_8] [i_9])));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                arr_38 [i_0] [i_10] [i_9] [i_8] [i_0] = ((/* implicit */unsigned char) (+(((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_12)) - (196)))))));
                                var_25 = ((unsigned short) ((((/* implicit */int) arr_13 [i_0] [i_8] [i_9] [i_10] [5LL])) / (360800997)));
                                arr_39 [(signed char)3] [(unsigned char)9] [i_0] [(signed char)3] [(unsigned char)8] [(signed char)3] = ((/* implicit */short) ((_Bool) 7747643446731496695LL));
                                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_11 [i_0] [(unsigned char)8]) >= (var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_8] [i_0] [i_12 + 1] [i_12])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (short)-31329))));
                                arr_45 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_29 [i_0])) ? (arr_37 [6LL]) : (((/* implicit */unsigned long long int) arr_10 [8] [8] [7] [(_Bool)0] [(_Bool)0] [i_12])))) : (((/* implicit */unsigned long long int) 2122556171U))));
                                arr_46 [i_0] [i_8] [i_0] = ((/* implicit */signed char) ((long long int) var_11));
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)38148))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 |= var_13;
    var_30 = ((/* implicit */long long int) ((((int) ((((/* implicit */int) (unsigned short)64275)) - (((/* implicit */int) var_10))))) <= (max((((/* implicit */int) var_16)), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_14))))))));
    var_31 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53654)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)3))))) && (((/* implicit */_Bool) 7U))))), (var_3)));
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) var_7))));
}
