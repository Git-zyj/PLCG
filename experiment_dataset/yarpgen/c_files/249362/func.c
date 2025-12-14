/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249362
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_1] [i_2 - 1] [i_3]))), (min((arr_10 [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9)))))));
                                var_11 += ((/* implicit */unsigned short) arr_1 [i_3]);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */long long int) max((arr_12 [i_2] [i_2 + 1] [i_2] [i_0] [i_2] [i_0] [i_0]), (((/* implicit */signed char) ((arr_11 [i_2 - 3] [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 2] [i_2 - 3]) <= (arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_13 = var_6;
    var_14 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                arr_17 [i_6] [i_6] [i_5 + 1] = ((/* implicit */int) arr_14 [i_5]);
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_26 [i_5 + 2] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((max((var_1), (((/* implicit */unsigned int) arr_23 [i_5] [i_6] [i_8] [i_9])))), (((/* implicit */unsigned int) arr_22 [i_5 - 1] [i_6] [i_7] [i_8 - 2] [i_9] [i_9]))))), ((-(min((((/* implicit */unsigned long long int) arr_24 [i_6])), (arr_18 [i_5] [i_6] [i_8 + 1])))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-(min((arr_15 [i_5 + 1] [i_8] [i_8]), (var_1)))))) : (((((/* implicit */_Bool) 537202121U)) ? (-6010043147421472548LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(arr_18 [i_8 - 2] [i_7] [i_6]))), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1179674327)))))) : (var_2)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned short i_11 = 2; i_11 < 12; i_11 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_6] [i_10] [i_11])) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_22 [i_10] [i_6] [i_10] [i_11 - 1] [i_10] [i_5 - 1])), (var_1))), (((/* implicit */unsigned int) (-(arr_20 [i_11]))))))) : (arr_21 [i_11] [i_11] [i_11] [i_11] [i_6] [i_5])))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5 + 2] [i_11 - 2] [i_10] [i_11] [i_5 - 1]))) / (((arr_22 [i_5 + 2] [i_6] [i_6] [i_6] [i_10] [i_11 - 2]) ? (((/* implicit */long long int) var_2)) : (arr_29 [i_5 - 1] [i_6] [i_5])))))) ? ((~(((((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1))))) : (max((arr_15 [i_5] [i_6] [i_5 + 1]), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)-18582))))))));
                            arr_31 [i_5 + 1] [i_6] [i_10] [i_6] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (var_2)))), (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_29 [i_5 - 1] [i_6] [i_11 - 2]))))) << (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_12 = 2; i_12 < 10; i_12 += 1) 
                {
                    arr_36 [i_5] [i_6] = min((var_8), (((/* implicit */unsigned int) arr_25 [i_12 - 2] [i_12] [i_12] [i_12 + 3])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_13 = 3; i_13 < 12; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
                        {
                            arr_43 [i_14] [i_6] [i_12 - 1] [i_6] [i_5 + 2] = ((/* implicit */unsigned long long int) var_8);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_6] [i_12])) || (((/* implicit */_Bool) (+(var_3))))));
                            arr_44 [i_6] [i_12] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_5] [i_5 + 2] [i_5 + 1] [i_6])) ? (((/* implicit */unsigned int) ((int) arr_13 [i_5 + 2] [i_6]))) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                            var_20 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_0))))));
                        }
                        for (int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
                        {
                            arr_48 [i_5 + 2] [i_6] [i_6] [i_13] [i_15] [i_6] = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) (unsigned short)20106)))));
                            arr_49 [i_5] [i_6] [i_12 + 1] [i_13 - 1] [i_6] [i_15] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_6))))));
                        }
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_41 [i_13 - 2] [i_6] [i_12 + 1] [i_13 - 3] [i_5 - 1] [i_13 - 2]))));
                        var_22 = ((/* implicit */unsigned long long int) ((arr_24 [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_5 + 1] [i_12 - 1] [i_13 + 1]))) : (((((/* implicit */_Bool) arr_35 [i_5 - 1] [i_5 + 2] [i_12 + 1] [i_13])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_16] [i_12 - 1] [i_6] [i_5]))))), (min((var_3), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned long long int) (~(var_3)))) : ((~((-(arr_18 [i_5] [i_6] [i_16])))))));
                        var_24 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_30 [i_16] [i_16] [i_12 + 3] [i_6] [i_5 + 2])), (var_9)))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)101)) << (((649251460U) - (649251440U)))))))), (((/* implicit */unsigned int) var_7))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_20 [(signed char)6]))));
                        arr_52 [i_6] [i_12] [i_6] [i_6] [i_5 - 1] [i_6] = ((/* implicit */unsigned char) var_7);
                    }
                }
                arr_53 [i_6] [i_6] [i_6] = arr_24 [i_6];
            }
        } 
    } 
}
