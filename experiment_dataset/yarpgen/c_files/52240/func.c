/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52240
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
    var_10 = ((signed char) 9223372036854775807LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [(signed char)11] [i_1 - 4] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)38782))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) arr_5 [i_1] [i_2] [i_3] [i_4]))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((var_0), (((/* implicit */unsigned int) arr_3 [i_2 + 1] [i_1 - 3])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17; i_5 += 4) 
    {
        for (int i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((9223372036854775807LL), (9223372036854775807LL)));
                arr_17 [6LL] [i_6] = ((_Bool) arr_14 [i_5 - 1] [i_6]);
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_8] [4]))));
                            /* LoopSeq 2 */
                            for (int i_9 = 1; i_9 < 20; i_9 += 4) 
                            {
                                var_15 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((9223372036854775807LL) ^ (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 + 2]))) : ((+(9223372036854775807LL))))), (((/* implicit */long long int) ((signed char) arr_21 [i_9] [i_5] [i_7 + 1] [i_6 - 1] [i_5] [i_6 - 1])))));
                                var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_7] [i_7] [i_9 - 1] [i_9 - 1] [i_9]))) ^ (-9223372036854775805LL)))));
                            }
                            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
                                arr_28 [i_7] [i_7] [(unsigned short)14] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_21 [i_5 + 3] [i_7] [i_6 + 1] [6] [i_6 - 2] [6]))) ? (min((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2))))), (((arr_27 [i_5] [i_6 - 1] [i_5] [i_7] [i_10]) - (((/* implicit */unsigned long long int) arr_23 [(short)1] [i_6] [i_7] [i_6] [(short)1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_7 - 1] [i_7])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_7] [2] [i_8] [18U] [i_10])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_8])))))))))));
                            }
                            arr_29 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */long long int) arr_19 [i_7] [i_6] [i_7] [i_8]);
                        }
                    } 
                } 
                var_18 -= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775805LL))))), (((((/* implicit */int) arr_16 [i_5] [i_5 + 2])) + (((/* implicit */int) arr_21 [18] [i_5] [(signed char)12] [i_5 + 4] [i_6 - 2] [i_6 + 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((long long int) var_7)), (((/* implicit */long long int) ((((_Bool) var_9)) ? (var_6) : (var_6)))))))));
    var_20 = ((/* implicit */long long int) ((min(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) 9223372036854775807LL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
}
