/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43149
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
    var_12 = ((/* implicit */unsigned long long int) (-((~(var_6)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_8 [i_3] [i_0] = ((/* implicit */int) ((unsigned int) arr_3 [i_3] [i_2]));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_1] [i_2])) : (2300242520U)));
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 8; i_5 += 3) 
            {
                for (long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_5 - 2]) : (arr_4 [i_4]))))));
                        var_15 -= ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)47250)) : (((/* implicit */int) (signed char)60)))) > (((((/* implicit */_Bool) var_4)) ? (arr_11 [i_6]) : (((/* implicit */int) arr_5 [(signed char)5])))));
                    }
                } 
            } 
        } 
        var_16 ^= ((/* implicit */_Bool) (signed char)107);
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_19 [i_7] [i_7]))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (int i_9 = 3; i_9 < 16; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        for (signed char i_11 = 2; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_33 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1])) ? (((((/* implicit */_Bool) arr_26 [i_10] [i_9] [16LL])) ? (729490658) : (((/* implicit */int) (signed char)-88)))) : (((/* implicit */int) arr_22 [i_8] [i_8 - 1] [13]))));
                                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) ? (((((/* implicit */_Bool) -2147483641)) ? (arr_24 [i_11]) : (((/* implicit */int) var_7)))) : (arr_25 [i_7] [i_9] [i_7] [i_7])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_37 [(signed char)17] [(unsigned short)15] [i_9] [i_12] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) : (4294967269U)))));
                        var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) var_6)))));
                        arr_38 [i_7] = (~(((arr_31 [i_9] [i_9 + 1] [18] [11LL] [i_9]) >> (((((/* implicit */int) arr_34 [i_7] [i_7])) + (99))))));
                    }
                    for (unsigned short i_13 = 3; i_13 < 18; i_13 += 3) 
                    {
                        arr_41 [(signed char)0] [(signed char)0] [i_9] &= ((/* implicit */int) arr_19 [i_13 - 1] [15U]);
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_39 [i_13 - 2] [i_13 - 1] [(short)17] [i_13]))));
                        var_21 = ((/* implicit */long long int) (_Bool)1);
                        var_22 = ((/* implicit */signed char) arr_32 [i_13] [i_9] [i_8] [i_7] [i_7] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_14 = 1; i_14 < 18; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((arr_27 [i_14 + 1] [i_9 + 3] [i_9 + 3]) ? (((/* implicit */int) arr_36 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8])) : (((/* implicit */int) var_7))));
                                var_24 = ((/* implicit */short) (~(arr_39 [5U] [i_14 - 1] [i_14 + 1] [i_14])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (var_1) : (((int) var_9)))), ((~((-(var_4)))))));
    var_26 -= ((/* implicit */signed char) var_8);
}
