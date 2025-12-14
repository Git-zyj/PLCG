/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50361
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) (short)-32033)) : (((/* implicit */int) (unsigned char)62))))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) var_0)) : (arr_2 [i_0])))));
                arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_4 [i_1 - 2] [i_1 - 1] [i_0 - 1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15957038590323324158ULL)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min(((short)-17697), (((/* implicit */short) (unsigned char)47))))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((/* implicit */int) arr_7 [4])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */_Bool) (((+(((13873269131263201424ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) / (((((/* implicit */_Bool) arr_19 [i_6 + 1] [i_2] [i_4] [i_3] [i_6] [i_2 + 2])) ? (arr_19 [i_6 - 1] [i_3] [i_4] [i_5] [i_2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))))));
                                arr_20 [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 2540123824U))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned char) (~((+(arr_11 [i_7 - 1] [i_7 - 1] [i_7])))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (unsigned short)36821))));
                                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10] [i_7] [i_10]))) ^ (arr_19 [i_10 - 3] [i_10 - 2] [i_7 + 3] [i_7 + 3] [i_7] [i_7]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_30 [i_10] [i_7] [i_10])), (arr_8 [i_10]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 14; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */short) min((((/* implicit */unsigned short) (short)17676)), ((unsigned short)4)));
                                var_25 -= ((/* implicit */int) 18446744073709551615ULL);
                                var_26 = ((/* implicit */int) (-(4147237746U)));
                                arr_42 [i_13] [i_8] [i_9] [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17676))))) ? ((~(arr_35 [i_7] [i_13] [i_9] [i_12] [i_7 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_38 [i_12 + 1] [i_12] [i_12] [i_12 - 1] [i_12 - 2] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                                arr_43 [i_7] [i_13] [i_8] [i_8] [i_9] [i_12] [i_13] = ((/* implicit */unsigned char) ((signed char) (-(((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11092))) : (18446744073709551615ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
