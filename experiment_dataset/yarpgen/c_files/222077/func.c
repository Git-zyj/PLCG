/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222077
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0 + 1]) != (arr_2 [i_0 + 1])))) >> ((((~(arr_1 [i_0]))) - (13230597628334097592ULL)))))) ? (arr_2 [i_0]) : (arr_1 [i_0 - 1]));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((((unsigned long long int) arr_5 [i_1 - 1] [i_0 - 2])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1 + 2] [i_0 + 1])))))));
                            var_21 ^= max(((~(max((arr_5 [i_1 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_3])))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_9 [i_2 - 2] [5ULL])))) <= (((/* implicit */int) max((arr_13 [i_1] [i_3]), (arr_12 [i_1 + 2] [1]))))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1])))))))) ? (((/* implicit */int) arr_3 [i_0] [5])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 3]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        for (signed char i_6 = 4; i_6 < 11; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [4] [i_5]))))), (max((((/* implicit */unsigned long long int) arr_9 [i_5 + 2] [i_5 + 2])), ((~(arr_19 [i_5 - 1] [i_6 - 2])))))))));
                var_23 = ((/* implicit */unsigned long long int) max(((~((~(((/* implicit */int) arr_13 [i_5 - 1] [i_6])))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_9 [i_6 + 1] [i_5])))), ((!(((/* implicit */_Bool) arr_10 [i_6] [i_6 - 1] [i_6] [(signed char)5])))))))));
                arr_21 [i_6] [i_5 + 2] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_5] [i_6]));
                arr_22 [10] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5])))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (int i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        {
                            arr_29 [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) arr_15 [i_5 - 1] [i_6]));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) || (((/* implicit */_Bool) (~(max((arr_18 [i_5] [i_6 + 1] [i_7]), (((/* implicit */unsigned long long int) arr_12 [i_8 - 2] [(signed char)18])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
