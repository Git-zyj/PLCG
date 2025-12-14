/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190292
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((var_11) % (((/* implicit */unsigned long long int) var_13)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_20 = (+(arr_7 [i_2] [i_1]));
                        var_21 = ((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)-21))))));
                        arr_10 [i_3] = ((/* implicit */unsigned short) var_13);
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_13 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((long long int) var_2)) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_4])))))));
                        arr_14 [i_0] [i_0] [i_4] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_4])), (var_14))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))) | (7U)));
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
                        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned char)3))))) : (arr_9 [i_1]))), ((-(7842124577808772694ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            var_24 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65526))));
                            arr_21 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_6 - 2] [i_6] [i_6 - 1] [i_5])) ? (((var_15) & (var_16))) : (7323157743475963251ULL)));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [3U] [3U] [i_2] [i_6 - 1] [i_6] [i_6 - 2])))))));
                            arr_22 [i_0] [(unsigned char)5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(var_5)));
                        }
                        var_26 = ((/* implicit */unsigned long long int) var_4);
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    }
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 18446744073709551611ULL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) ((((((3488040301U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) (short)-29991)) : (((/* implicit */int) var_2))));
                                var_29 += ((/* implicit */unsigned int) 18446744073709551611ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 += var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_35 [i_9] [i_9] = ((/* implicit */unsigned short) var_11);
                arr_36 [i_9] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 10604619495900778921ULL)) ? (30ULL) : (10604619495900778921ULL)))));
                arr_37 [i_9] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_8 [i_9] [i_9] [17ULL] [10U] [i_10] [i_9]))))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned short i_12 = 3; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_31 += ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)77))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_31 [8U])), (var_13)))), (((var_11) * (((/* implicit */unsigned long long int) var_18)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))));
                            var_32 -= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_12] [i_10] [i_10] [i_12 + 2] [i_12 + 1] [i_12 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_13)) ? (arr_7 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (+((~(max((var_18), (((/* implicit */unsigned int) (unsigned short)65535)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
