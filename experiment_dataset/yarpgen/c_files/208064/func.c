/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208064
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_13 = (-(arr_10 [i_0] [i_1 + 1] [i_4 - 1] [(_Bool)1] [i_4] [i_0]));
                                arr_11 [0ULL] [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) var_8);
                                var_14 = ((((/* implicit */long long int) var_1)) | (var_0));
                                arr_12 [i_3] = ((/* implicit */short) (~(3ULL)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_11))))));
                }
                for (signed char i_5 = 2; i_5 < 9; i_5 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) 352473026U)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (((+(var_3))) > (18446744073709551612ULL))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_21 [i_7] [i_1] [i_5] [(unsigned char)7] [i_7] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [1LL])), (var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)-118))))))) >= (((/* implicit */unsigned long long int) var_1)));
                            arr_22 [i_0] [i_1] [6LL] [2ULL] [i_7] [i_1 - 1] [i_1] &= ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (+(var_1)))))));
                            arr_23 [i_0] [(_Bool)1] [i_6] [i_6] [(_Bool)1] [i_7] = (!(((/* implicit */_Bool) var_8)));
                            var_18 = ((/* implicit */signed char) min(((-(arr_2 [i_1 - 2] [i_5] [i_5 + 1]))), (((/* implicit */long long int) (+(var_1))))));
                            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) 0U)))));
                        }
                        var_20 = ((/* implicit */unsigned char) arr_16 [i_1 + 1] [i_1] [i_1]);
                        var_21 |= ((/* implicit */int) (+(var_10)));
                    }
                    arr_24 [i_5] [(unsigned char)3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (var_2)))) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned char)151)) ? (464052013) : (1222933701))))) : ((+(((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 2; i_8 < 9; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (var_6)))) ? (arr_5 [i_1 + 1]) : (var_6));
                                var_23 = ((/* implicit */unsigned short) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            }
                        } 
                    } 
                    arr_32 [i_1] [i_8] = ((((/* implicit */unsigned long long int) 2)) >= (4194303ULL));
                }
                for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    var_24 ^= var_6;
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_13 = 1; i_13 < 9; i_13 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_13] [i_1 - 2]))) : (var_10)));
                            arr_41 [i_13] [i_12] [i_13] = var_6;
                        }
                        for (unsigned short i_14 = 1; i_14 < 9; i_14 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((_Bool) arr_9 [i_14 + 1] [i_14] [i_14 + 1] [i_1] [i_1 - 2] [i_1]));
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                            var_28 = ((/* implicit */long long int) (~(var_12)));
                        }
                        for (unsigned short i_15 = 1; i_15 < 9; i_15 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (var_11)));
                            var_30 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (max((arr_10 [i_0] [i_1] [i_11] [i_12] [i_12] [i_15]), (var_3))) : ((+(var_6))))))));
                        }
                        for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) var_4)))));
                            arr_52 [i_0] [i_0] [6LL] [i_11] [i_12] [i_16] = ((_Bool) var_6);
                        }
                        var_32 |= ((/* implicit */long long int) var_3);
                    }
                    arr_53 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_11])), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_6)))) ? (((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) var_12))))));
                }
                var_33 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    var_34 = var_11;
    var_35 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) -818337932))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (var_1)))))))) : ((+((-(var_11)))))));
    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (-(max((var_2), (var_10))))))));
}
