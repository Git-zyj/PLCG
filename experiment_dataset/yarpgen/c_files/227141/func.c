/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227141
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
    var_12 ^= ((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) var_6)) : (max((17179869183ULL), (20ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-56)), ((unsigned char)255)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (~(var_7)));
                arr_7 [i_1] &= ((/* implicit */unsigned int) (-(min((((20ULL) ^ (arr_4 [i_0] [i_1]))), (arr_4 [i_1 - 2] [i_0 + 1])))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1])))) < (arr_0 [i_0 - 1] [i_1]))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_14 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_5 [i_0] [i_1 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_0] [(signed char)4] [(signed char)4] [i_4] [i_4] = arr_5 [i_0] [i_3];
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) 11130591749924267717ULL))));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))));
                                arr_17 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */signed char) (-(((int) (~(((/* implicit */int) var_11)))))));
                                var_16 *= ((/* implicit */signed char) (-(min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) (signed char)-42))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((7316152323785283926ULL) & (((/* implicit */unsigned long long int) ((var_2) >> (((18446744073709551580ULL) - (18446744073709551557ULL))))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_9))));
                        var_19 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) < (arr_19 [i_1] [i_0]))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5117138216504994911ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) : ((+(7316152323785283912ULL))))));
                        var_20 &= ((/* implicit */unsigned char) arr_12 [i_1] [i_1]);
                        arr_21 [i_0] = (+(((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_19 [i_5] [i_1]))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        arr_25 [i_1] [i_1] [i_2] [i_2] [i_2 + 1] |= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) 11130591749924267706ULL)))));
                        var_21 = ((/* implicit */unsigned int) var_0);
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-39)) ? (((((/* implicit */int) (unsigned char)210)) - (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                        var_23 = ((/* implicit */unsigned long long int) (~(((var_2) >> (((var_7) + (1049600864)))))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) (~(arr_4 [i_2 + 1] [i_2 + 1])));
                        var_24 = ((/* implicit */unsigned int) ((((18446744073709551580ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ^ (18446744073709551580ULL)));
                    }
                }
                for (unsigned char i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max(((+((-(var_7))))), (((/* implicit */int) var_8))));
                                var_26 = 5117138216504994894ULL;
                                arr_35 [i_0] [i_1] [i_8 + 4] [i_9] [10U] = ((/* implicit */int) min((arr_9 [i_0] [i_9 - 1]), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) arr_20 [i_0 + 1] [i_1] [8U] [i_0 + 1] [i_8]);
                    var_28 = ((/* implicit */signed char) ((min(((~(arr_4 [i_0] [i_1]))), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)167)), ((+(2514622088U))))))));
                    var_29 = ((/* implicit */int) ((signed char) (signed char)-92));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((min((arr_31 [(signed char)5] [i_1 + 1] [i_8 + 4] [i_0 + 1]), (((/* implicit */unsigned int) ((signed char) 4294967287U))))) | (var_3))))));
                }
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_31 = ((signed char) 6ULL);
                                var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) var_5)) : (((var_6) % (arr_41 [i_0] [i_0] [i_11] [i_13])))))) : (min((min((9433316389383850910ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (var_6))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((unsigned char) ((signed char) max((var_3), (var_6))))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 2; i_15 < 17; i_15 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_44 [i_0] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
                                var_35 = ((/* implicit */unsigned int) max((var_35), (var_2)));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (min((((/* implicit */unsigned char) (signed char)47)), ((unsigned char)0)))))) | (((/* implicit */int) var_1))));
                }
            }
        } 
    } 
}
