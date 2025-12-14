/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248066
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
    var_15 += ((/* implicit */long long int) ((unsigned char) ((min((((/* implicit */long long int) var_2)), (var_5))) & (min((9223372036854775798LL), (-2407457973857026777LL))))));
    var_16 = var_0;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 = (~(arr_3 [i_0] [i_1]));
                var_18 = var_6;
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_4] [i_5 + 1] [i_2] = ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_3] [(unsigned char)17] [i_5 - 2] [(unsigned char)17])) ? ((~(arr_7 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_3])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            arr_15 [i_2] [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_6])))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (arr_13 [i_4] [i_3] [i_5] [i_2] [i_6 - 3] [i_2])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_21 = arr_9 [i_2] [i_2] [i_2] [i_2];
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_4))));
                            var_23 |= (~(var_12));
                            var_24 = ((/* implicit */long long int) min((var_24), ((+(9223372036854775797LL)))));
                        }
                    }
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) /* same iter space */
                    {
                        arr_23 [i_8 + 3] [i_8] [i_8] [7LL] = (+(((((/* implicit */_Bool) (~(arr_4 [i_2])))) ? (arr_18 [i_8 + 1] [i_8] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_4]) : ((+(arr_17 [i_4] [i_8]))))));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
                        {
                            var_25 = (+(((((/* implicit */_Bool) arr_16 [i_3] [i_2] [i_9 + 2] [i_8 - 2] [i_9])) ? (((long long int) var_9)) : ((~(var_8))))));
                            var_26 = (~((-(9223372036854775807LL))));
                            arr_27 [9LL] [i_3] [i_3] [i_3] [i_3] = min((((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_18 [i_8 - 1] [i_3] [i_3] [i_8] [i_9 + 1] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2] [i_3] [i_4] [i_9 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (arr_9 [i_2] [i_3] [i_4] [i_8])))) ? (var_8) : (max((((/* implicit */long long int) arr_10 [i_8 - 2] [i_8 - 2] [i_4] [i_8 - 2] [i_9 + 2])), (-164431661161213454LL))))));
                            var_27 |= arr_20 [i_2] [i_3] [i_3] [i_3] [i_3];
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            arr_32 [i_10] [i_8] [i_4] [i_3] [i_2] = (~(((long long int) arr_17 [i_8 - 1] [i_8 + 1])));
                            arr_33 [i_2] [i_3] [8LL] [i_2] [i_3] = ((long long int) ((long long int) (unsigned char)0));
                            var_28 = arr_25 [i_2] [i_2] [i_2];
                            arr_34 [i_8] [i_8 + 2] [i_8] [i_8 - 1] = ((/* implicit */unsigned char) (+(var_3)));
                        }
                        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max(((-(var_3))), (arr_16 [i_8 + 3] [i_8 + 3] [i_4] [i_4] [i_3]))))));
                            var_30 = ((/* implicit */long long int) var_4);
                            arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (-((-(arr_25 [i_8 - 2] [i_8 + 3] [i_8 - 1]))));
                            arr_38 [i_2] [8LL] = min((((long long int) var_7)), ((+((~(arr_21 [i_2]))))));
                        }
                        var_31 += ((/* implicit */long long int) var_4);
                        arr_39 [i_2] [i_2] [i_2] = (-((+(min((arr_18 [i_2] [i_2] [i_4] [i_4] [i_4] [i_4] [i_8]), (((/* implicit */long long int) var_2)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                        var_33 = 4503599627370496LL;
                    }
                    var_34 = (+(min((arr_29 [i_3] [i_2] [i_2] [i_2]), (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_4] [i_3]) : (arr_35 [i_2] [9LL] [9LL]))))));
                    arr_42 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) max((arr_16 [i_2] [i_2] [i_3] [i_4] [i_3]), (var_0)))) ? ((~(var_8))) : (((long long int) (+(arr_25 [i_2] [i_2] [i_4])))));
                    arr_43 [i_4] = (-(((((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_3] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_17 [i_3] [i_4]))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 3; i_13 < 18; i_13 += 3) 
                    {
                        arr_46 [i_2] = (-(arr_6 [i_2]));
                        var_35 = ((/* implicit */long long int) min((var_35), (((2080963908577343932LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                        var_36 = (~(((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4] [i_13] [i_13 + 2] [i_13 + 2])) ? (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_11 [i_2] [i_2] [i_3] [i_4] [i_4] [i_13 - 3]))));
                    }
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_37 = 8027948630635990262LL;
                        var_38 ^= (+(arr_25 [i_2] [i_3] [i_4]));
                        var_39 = ((/* implicit */long long int) var_11);
                    }
                }
            } 
        } 
    } 
    var_40 |= 23655021513023232LL;
}
