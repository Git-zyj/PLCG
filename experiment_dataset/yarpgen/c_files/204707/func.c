/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204707
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3] [i_3] [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_2] [i_0])))))) ? (((1852988945195822481ULL) | (((/* implicit */unsigned long long int) 6005642316495918785LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8))))))) ? (arr_8 [8LL] [i_2] [i_3]) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (32505856U))))));
                            var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)84)) ? (min((var_10), (((/* implicit */unsigned long long int) var_14)))) : (min((70231305224192ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_3 - 3]))))))));
                        }
                    } 
                } 
                arr_10 [6] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2])))) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 16593755128513729107ULL)))))));
                var_18 ^= ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
            {
                {
                    var_19 |= arr_11 [(unsigned char)0];
                    arr_17 [i_4] [(_Bool)1] [i_6 + 1] &= ((/* implicit */_Bool) 1125899890065408ULL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 3; i_7 < 9; i_7 += 3) 
    {
        for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            {
                var_20 = ((/* implicit */short) arr_19 [i_7]);
                /* LoopNest 3 */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) max((var_21), (arr_0 [i_7 - 2])));
                                var_22 = ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9] [2U] [i_11]))) : (var_8));
                                var_23 ^= arr_21 [i_10] [i_8 - 1];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
