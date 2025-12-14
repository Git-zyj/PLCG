/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247643
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
    var_10 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */unsigned short) arr_1 [i_0]);
                var_12 = ((/* implicit */signed char) (-(min((4787726189902017753ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((long long int) (!(((/* implicit */_Bool) 2147483647))))), (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_2 - 3] [3LL])), (-325666334))))));
                        var_13 = ((/* implicit */int) ((unsigned long long int) 0U));
                        var_14 = ((/* implicit */unsigned char) ((arr_1 [i_2 - 3]) > ((~(min((268435455ULL), (((/* implicit */unsigned long long int) arr_7 [(unsigned short)17] [i_3] [(unsigned short)17] [(short)1]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_4] [i_4] [i_4 - 2] [i_2 - 4]))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2 - 4] [i_4] [i_4])))));
                            var_16 = ((/* implicit */signed char) (-(arr_4 [i_4 - 2] [i_2 - 4])));
                            var_17 = ((/* implicit */signed char) ((_Bool) arr_11 [i_4 - 2] [i_3] [i_1]));
                        }
                    }
                    var_18 = ((/* implicit */_Bool) ((max(((!((_Bool)1))), (arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)5))))) : ((+(((arr_1 [i_1]) % (((/* implicit */unsigned long long int) 2586417214U))))))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_5 = 4; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) 0U);
                                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_13 [i_7] [i_6] [i_5 - 1]) / (arr_13 [i_7] [i_7] [i_5 - 1])))) ? (max((arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1]), (arr_13 [i_5] [(_Bool)1] [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) var_7);
                    arr_22 [5U] [12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 2147483647)) > (((long long int) (~(((/* implicit */int) var_7)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (-(((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [14LL]) ? (4160749568U) : (1708550075U))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_0] [i_1] [i_5] [i_8] [i_5] [i_5])))))))));
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((_Bool) arr_9 [i_9] [(_Bool)1] [i_5] [i_0] [i_0]))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (-325666339) : (-325666339)))) ^ (((long long int) arr_3 [i_9] [i_5]))))));
                                var_24 = max(((-(arr_13 [i_1] [i_5 - 4] [i_9 - 1]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_5] [i_5 - 4] [i_9 - 1] [i_9]))));
                            }
                        } 
                    } 
                    var_25 &= ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) var_3)))));
                }
                for (unsigned char i_10 = 4; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_11 = 3; i_11 < 23; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_10 + 1]))));
                        arr_33 [i_11] [8U] [8U] = ((/* implicit */unsigned char) 12ULL);
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_27 = min((((((arr_9 [i_10 + 1] [i_12] [i_12 - 1] [i_12] [i_12]) + (9223372036854775807LL))) << (((((arr_9 [i_10 - 2] [i_12] [i_12 - 1] [i_12] [i_12]) + (4448984266454965211LL))) - (27LL))))), (((/* implicit */long long int) ((signed char) arr_9 [i_10 - 2] [12ULL] [i_12 - 1] [i_12] [12ULL]))));
                        var_28 = ((/* implicit */unsigned char) ((((arr_3 [i_0] [i_12 - 1]) % (2586417221U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_34 [i_10 - 2] [i_10 - 2] [i_10] [i_10]))))));
                    }
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        var_29 = ((/* implicit */int) (+(((unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_37 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0])))))));
                        var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), (arr_16 [(unsigned short)12] [i_1])));
                    }
                    arr_39 [i_0] = ((/* implicit */signed char) min((((((/* implicit */long long int) arr_25 [i_10 - 4] [i_10] [i_10 - 1] [i_10] [i_10])) + (-3843390973740623701LL))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-124))))));
                    var_31 = ((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_10] [i_10]), (((/* implicit */short) var_7))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)224)))) % (((long long int) arr_17 [i_10] [12LL] [i_10 - 3] [i_10] [i_10] [i_10 - 4]))));
                }
                for (unsigned char i_14 = 4; i_14 < 24; i_14 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (short)-26676))) * ((-(((/* implicit */int) arr_37 [i_14 - 3] [i_14] [i_14 - 4] [i_14] [i_14])))))))));
                    var_34 = ((/* implicit */unsigned int) var_2);
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1])))) ? (max((((/* implicit */unsigned int) (unsigned short)33511)), (arr_3 [i_15] [i_1]))) : (((/* implicit */unsigned int) 325666328))));
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-(((/* implicit */int) ((unsigned char) (unsigned char)82))));
                        }
                    } 
                } 
            }
        } 
    } 
}
