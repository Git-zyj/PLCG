/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31392
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 |= ((/* implicit */unsigned int) arr_1 [(signed char)2]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                            arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                            var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_7))));
                            var_12 = arr_3 [i_2] [i_0];
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((var_8) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((0LL), (var_1)))) : (((((/* implicit */unsigned long long int) var_1)) ^ (var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 4; i_4 < 21; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_24 [2] [2] [i_6] [2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [(signed char)19] [i_7])) ? (arr_18 [i_6] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            arr_25 [7U] [i_6] [20ULL] [20ULL] |= ((/* implicit */unsigned short) min((arr_16 [i_5]), (arr_21 [i_4] [i_6] [i_7])));
                            arr_26 [i_7] = ((/* implicit */unsigned long long int) arr_14 [18LL] [(unsigned char)4]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_35 [i_9] [17ULL] [6U] [i_8] [i_9] [6U] [i_10] = ((/* implicit */unsigned char) arr_15 [i_9]);
                                var_14 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4]))) % (((((/* implicit */_Bool) arr_20 [i_8] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) : (var_1))))), (((/* implicit */long long int) var_3))));
                                arr_36 [i_9] [i_9] [i_8] [i_9] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4] [i_10] [i_10] [i_9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) < (((((/* implicit */_Bool) 517282815U)) ? (1587144862U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200)))))))), (max((((/* implicit */unsigned int) var_3)), (arr_34 [4ULL] [i_5] [i_5] [i_5] [4ULL])))));
                                var_15 = ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_14 [i_4] [i_4 - 1])))))));
                                arr_37 [i_4] [i_5] [i_9] [i_4] [i_5] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_0))))) ? (((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_8]))) : (var_2))))), (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */signed char) arr_32 [i_4] [i_9] [i_4] [i_4])), (arr_22 [i_4] [i_5] [i_5] [(unsigned short)7])))), (((((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_4] [i_4 - 4] [i_4 - 2])) ? (((/* implicit */int) arr_20 [i_9] [5U] [i_4])) : (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                } 
                var_16 ^= ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_7);
}
