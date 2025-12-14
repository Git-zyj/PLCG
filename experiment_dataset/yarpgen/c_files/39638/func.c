/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39638
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_0 [6]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [(signed char)7]);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 4; i_4 < 15; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_1 [0]))));
                            var_23 &= ((((/* implicit */_Bool) 2649011300750133773LL)) ? (1656853467738755020ULL) : (16789890605970796595ULL));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (0U) : (1964464107U)));
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                            arr_13 [i_0] [i_3] [i_1] [i_2] [6U] [i_3] [6U] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_2])))) ? (var_16) : (((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (var_18)))));
                        }
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 2758098614U);
                        var_27 = ((/* implicit */signed char) ((long long int) var_19));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_5 [i_7] [i_8]))));
                            arr_29 [i_0] [i_0] [(unsigned char)18] [i_8] [i_7] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (1656853467738755020ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [(unsigned char)17] [i_1] [i_1] [i_1] [i_1]))))))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((((/* implicit */_Bool) 16789890605970796595ULL)) && (((/* implicit */_Bool) 1656853467738755020ULL))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                        {
                            var_30 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)5))));
                            var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_0])) ? (2928649792U) : (arr_10 [i_7] [i_7] [i_7] [(_Bool)1])))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_32 |= ((/* implicit */unsigned long long int) arr_32 [i_0] [i_1] [i_0] [i_11] [i_11]);
                            arr_34 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_7] [i_7])) : (var_8))))));
                        }
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-11902))))) ? (((((/* implicit */_Bool) 5189418134872041728ULL)) ? (16789890605970796595ULL) : (1656853467738754999ULL))) : (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_12 - 1] [i_12 + 2] [i_12 - 1])) < (((/* implicit */int) arr_11 [i_12] [i_0] [i_0]))));
                var_35 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_13)) : (1656853467738755020ULL))));
                var_36 |= ((/* implicit */unsigned int) arr_24 [10] [10] [i_12 - 1]);
            }
            for (short i_13 = 3; i_13 < 16; i_13 += 2) 
            {
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_38 [i_13] [i_1] [(short)17] [(short)17]))));
                var_38 |= ((/* implicit */signed char) ((unsigned long long int) var_0));
                var_39 &= ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [10U] [6U] [i_0]);
                var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_13 - 1] [7ULL] [i_0] [i_13]))));
            }
        }
    }
    var_41 += ((/* implicit */long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2758098614U)) ? (2100893043) : (var_17)))))), (var_19)));
    var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_10)))), (max((18446744073709551597ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 981999438U)) ? (var_17) : (((/* implicit */int) (_Bool)1))))) | (max((((/* implicit */long long int) (signed char)127)), (-1LL))))))));
}
