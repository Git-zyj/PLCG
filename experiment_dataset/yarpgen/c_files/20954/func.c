/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20954
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
    var_15 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((var_0), (((/* implicit */long long int) var_4)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_10 [i_3] [i_0] [i_2] [i_2] [i_0 + 1])) ^ (((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_16 = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(arr_7 [i_0 + 1] [i_3] [i_2] [i_3])))), (((signed char) var_2))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_17 = (((-(((/* implicit */int) arr_10 [i_4] [i_0] [i_0 + 1] [i_0] [i_4])))) != (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-25)), (arr_10 [i_4] [i_0] [i_0 + 1] [i_0] [i_4])))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_18 *= arr_18 [i_0 + 1];
                                arr_24 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_6] [i_5] [i_4] [i_5 - 1] [i_4] [i_0 + 1] [i_0])))))));
                                arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_4] [i_5] [i_4] [i_1] [i_4]);
                                arr_26 [i_0] [i_1] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned long long int) (((-(arr_2 [i_5 + 1]))) >= (18446744073709551601ULL)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) arr_16 [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_33 [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(274877841408ULL)))) ? (((arr_21 [i_0] [i_1] [i_7] [i_8] [i_7 - 1] [i_0 + 1]) * (arr_21 [i_0] [i_1] [i_1] [i_7] [i_7 - 4] [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_8])))));
                                arr_34 [i_0] [i_1] [i_1] [i_4] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_0 - 1] [i_7 - 2])), (arr_14 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */int) ((short) arr_7 [i_7 - 1] [i_1] [i_0] [i_0 - 1]))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42)))))))));
                            }
                        } 
                    } 
                }
                arr_35 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((2147483647LL) - (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8)))))) : ((~(629803159U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned char i_12 = 2; i_12 < 20; i_12 += 3) 
                    {
                        {
                            arr_46 [i_9] [i_9] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) ((((arr_27 [i_9] [i_10] [i_11] [i_9] [i_10] [i_9]) > (((/* implicit */unsigned long long int) ((unsigned int) arr_31 [i_9] [i_10] [i_10] [i_11] [i_12]))))) ? (((/* implicit */long long int) arr_3 [i_9] [i_11])) : (((((/* implicit */_Bool) arr_30 [i_11 - 1])) ? (arr_30 [i_11 + 2]) : (arr_30 [i_11 + 1])))));
                            arr_47 [i_9] [i_10] [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_15 [i_11 + 1] [i_11] [i_10]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_11 + 2])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_53 [i_9] [i_9] [i_10] [i_10] [i_13] [i_14] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_10] [i_10] [i_13] [i_13] [i_14])) ? (((/* implicit */long long int) var_3)) : (1152921504606322688LL)))) ? (((((/* implicit */_Bool) arr_50 [i_9] [i_13])) ? (arr_4 [i_9] [i_10] [i_13]) : (arr_29 [i_14] [i_13] [i_13] [i_10] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) arr_32 [i_13 + 2] [i_13] [i_13 + 1] [i_13] [i_13] [i_13] [i_13])))) <= (((/* implicit */unsigned long long int) (+(arr_38 [i_10] [i_14])))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_14] [i_10])) ? ((+(arr_17 [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_14] [i_14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 0ULL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
