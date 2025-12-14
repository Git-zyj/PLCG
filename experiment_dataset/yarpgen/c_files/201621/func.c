/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201621
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) max((var_7), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */int) (unsigned short)65000))));
                    var_11 = (~(((((/* implicit */_Bool) min((2443718844U), (((/* implicit */unsigned int) var_4))))) ? (1052082456) : (((/* implicit */int) var_1)))));
                    var_12 = ((/* implicit */unsigned int) 9223372036854775784LL);
                    arr_6 [i_1] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) max((arr_4 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_7))));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775784LL)) ? (4605132212469248470ULL) : (((/* implicit */unsigned long long int) 4078584020U)))))));
                }
            } 
        } 
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                    var_15 = ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)60))))) / ((~(arr_5 [i_3] [i_4] [i_4 + 1] [7ULL]))));
                    var_16 |= arr_12 [i_5] [i_4] [i_3];
                    arr_15 [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(5819760043794566291ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : (3087377365487874591LL)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((unsigned long long int) var_4)))))));
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_18 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                var_19 = ((/* implicit */unsigned long long int) var_4);
                var_20 = ((/* implicit */long long int) (-(1865839685341424781ULL)));
            }
            for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                arr_26 [i_3] = ((/* implicit */short) (-(arr_20 [i_8] [i_6] [i_3] [i_3])));
                var_21 = ((/* implicit */short) (~((+(var_7)))));
            }
            for (int i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                arr_30 [(unsigned short)2] [i_6 - 1] [7LL] [(short)6] = ((/* implicit */int) ((((var_3) | (((/* implicit */unsigned int) -2034725834)))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))));
                var_22 = ((/* implicit */unsigned long long int) (signed char)112);
            }
            var_23 = ((/* implicit */unsigned short) var_3);
        }
        for (short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_5)) : (arr_20 [i_3] [i_3] [i_10] [i_10])));
            /* LoopNest 2 */
            for (unsigned int i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    {
                        arr_37 [i_11] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        arr_38 [i_3] [9LL] [i_11] [(short)16] = ((/* implicit */unsigned short) (~(9223372036854775784LL)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 2) 
            {
                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)17971)) ? (arr_20 [i_3] [i_10] [i_10] [i_3]) : (((/* implicit */long long int) 3121423108U)))) >> (((((/* implicit */int) (unsigned short)41974)) - (41973)))));
                arr_41 [15LL] [6] = ((/* implicit */int) var_3);
                arr_42 [i_3] [i_10] [i_3] = ((/* implicit */short) ((arr_34 [i_3] [i_13 - 1]) >> (((/* implicit */int) (_Bool)0))));
            }
            for (long long int i_14 = 2; i_14 < 15; i_14 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17971))))) ? (((2443718858U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (var_0)))));
                arr_46 [i_3] [i_10] [i_14 + 1] [i_10] = ((/* implicit */short) var_1);
            }
            var_27 *= ((/* implicit */unsigned long long int) arr_36 [i_10] [i_10] [13] [i_3] [i_3]);
        }
        arr_47 [i_3] = ((((/* implicit */_Bool) -9223372036854775785LL)) ? (2443718848U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))));
        /* LoopSeq 1 */
        for (unsigned short i_15 = 2; i_15 < 16; i_15 += 4) 
        {
            var_28 = ((/* implicit */signed char) var_9);
            var_29 = ((/* implicit */short) max((var_29), ((short)20219)));
            arr_51 [i_15] [i_15] [i_3] = ((/* implicit */unsigned short) var_7);
        }
    }
    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) 131072U))));
    var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-10))));
}
