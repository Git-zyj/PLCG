/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36324
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) 1152917106560335872ULL))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_3] [i_1])))) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
                var_13 = min((((short) arr_5 [i_1] [i_1] [i_0] [i_0])), (((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */unsigned long long int) var_2)))))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) arr_9 [i_4] [i_4 - 1] [i_4] [i_4 + 1]);
                    var_14 = ((/* implicit */short) arr_6 [i_0] [i_1]);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        for (short i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_9)) + (24))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (926772696604646142LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (min((4294967295U), (arr_8 [(unsigned char)6]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65472))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) ((unsigned short) (signed char)-61))) : (((/* implicit */int) max((((/* implicit */short) arr_19 [i_5 - 1] [i_6] [i_7 + 1] [i_8 - 1])), ((short)2996)))))))));
                                var_16 *= ((/* implicit */unsigned int) ((short) ((unsigned long long int) (short)-2981)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (-(min((9247438802041536560ULL), (((/* implicit */unsigned long long int) (signed char)-117))))));
                    var_18 = ((/* implicit */_Bool) arr_18 [i_5] [i_5]);
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_5] [i_7] [i_7 - 1] [i_7])) : (((/* implicit */int) ((var_6) || (((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_6] [i_5]))))))) % (((/* implicit */int) arr_25 [(unsigned char)12] [(unsigned char)12] [i_7 - 1] [i_7] [i_7] [i_7]))));
                    arr_27 [i_7] [i_6 - 2] [i_5] [i_5 + 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) arr_26 [i_7]))), (min((arr_7 [i_6]), (((/* implicit */unsigned long long int) (short)-2997))))));
                }
            } 
        } 
    } 
}
