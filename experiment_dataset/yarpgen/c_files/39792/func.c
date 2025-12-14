/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39792
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (arr_0 [i_0])))) ? (((/* implicit */int) ((signed char) (signed char)127))) : (((int) var_3))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_8))))) && (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)247)), (var_5))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)142)) ? (max((arr_1 [i_0]), (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_0])))), ((-(((/* implicit */int) (signed char)-104))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) (-(min((var_13), (((/* implicit */unsigned long long int) (signed char)127))))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 + 1] [i_4 - 2]))) : (18446744073709551604ULL)))));
                        var_17 -= var_12;
                        var_18 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_9)), (var_13)))));
                        var_19 = ((/* implicit */signed char) min((var_5), (((/* implicit */int) min((var_7), (((signed char) (unsigned short)54206)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                arr_25 [(short)3] [i_5] [i_6] [i_8] [i_8] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (unsigned char)155)), (arr_12 [i_1] [i_5 + 1] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_1))))));
                                arr_26 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (arr_7 [i_5])))) || (var_12)))), (((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) arr_5 [i_7])) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_6] [i_5]))))));
                                arr_27 [i_1] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_5] [i_5 - 1])), (arr_1 [i_6])))) ? (((/* implicit */int) arr_17 [i_5] [i_1])) : (((/* implicit */int) arr_15 [i_5] [(signed char)5]))))));
                            }
                        } 
                    } 
                    arr_28 [i_1] [i_6] [i_6] [(unsigned short)10] &= ((arr_12 [i_1] [i_5] [i_6]) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) var_3))))));
                }
            } 
        } 
        arr_29 [i_1] = ((/* implicit */long long int) var_4);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), ((-2147483647 - 1))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_2)), (arr_15 [i_1] [i_1])))) : (((((/* implicit */int) var_12)) >> (((/* implicit */int) var_9))))));
    }
    for (short i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        arr_33 [i_9] [i_9] = min((((/* implicit */int) arr_22 [i_9] [i_9] [i_9])), (((int) arr_30 [i_9])));
        arr_34 [i_9] = ((/* implicit */short) var_9);
        var_21 -= ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10))))), (max((((/* implicit */long long int) (signed char)97)), (arr_6 [i_9]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_9] [2] [i_9] [i_9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_31 [i_9])))))));
        var_22 ^= ((/* implicit */unsigned int) ((((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) & (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                {
                    arr_40 [i_11] [i_10] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_11 [i_11] [i_10] [i_9])) ? (arr_23 [i_9] [i_9]) : (((/* implicit */int) (unsigned char)253)))), (-2147483646))) != (((/* implicit */int) (!((_Bool)1))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            {
                                arr_47 [(signed char)8] [i_10] [i_11] [i_11] [i_13] [i_10] [i_13] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (9048022477370256419ULL))), (((/* implicit */unsigned long long int) var_7))));
                                var_23 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_2))))) ? (arr_23 [i_9] [i_9]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [i_9])) || (var_9)))))), (((/* implicit */int) arr_21 [i_13] [i_12] [i_10] [i_9]))));
                                arr_48 [i_13] = ((/* implicit */signed char) min((((var_9) ? (max((((/* implicit */long long int) arr_31 [i_12])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 12564991124918157481ULL)))))), (((/* implicit */long long int) ((_Bool) var_12)))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_16 [i_9] [i_9] [i_9]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) var_2);
    var_26 = ((/* implicit */unsigned short) var_10);
}
