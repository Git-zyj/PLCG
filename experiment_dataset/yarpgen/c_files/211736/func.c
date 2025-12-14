/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211736
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
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned short)14] [i_2] |= ((/* implicit */unsigned long long int) 137438953471LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 1])) < (arr_13 [(short)23] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_4 - 1] [i_4 - 1]))))));
                                var_15 = ((/* implicit */int) arr_5 [i_1 + 2] [i_4 + 2] [i_4] [i_4 + 2]);
                                arr_14 [i_0] [(short)20] [7LL] [i_3] [i_4] = (_Bool)1;
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_2]) != (((/* implicit */unsigned long long int) var_4)))))) * (-137438953474LL))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) == (arr_6 [22] [i_1 + 1] [i_1 + 2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 17; i_8 += 4) 
                    {
                        for (int i_9 = 3; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) arr_19 [i_6]);
                                var_18 = (+(((/* implicit */int) var_8)));
                                arr_30 [i_5] [i_5] [i_7] [i_8] [(unsigned short)15] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_5 - 1] [i_6]))))), (arr_12 [i_8] [i_8 - 3] [i_9] [i_9] [i_9 - 2] [(short)13] [i_9 + 1])));
                            }
                        } 
                    } 
                    arr_31 [(signed char)10] [i_5] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) var_9);
                    var_19 &= ((/* implicit */int) var_2);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */long long int) (_Bool)1);
                                arr_37 [i_5 + 1] [(unsigned short)1] [9] [i_5 + 1] [14ULL] [14ULL] [i_11] = ((/* implicit */int) ((signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_5 - 2] [i_6] [i_7]))))), (max((137438953460LL), (((/* implicit */long long int) 131071)))))));
                                arr_38 [17] [i_6] [i_7] [i_10] [i_11] = max(((+(((/* implicit */int) (short)32767)))), ((+(arr_25 [i_5 - 2]))));
                                arr_39 [i_5] [i_5] [i_6] [i_5] [4] [13LL] = ((long long int) ((max((((/* implicit */long long int) var_2)), (arr_29 [(short)11] [i_5 + 1] [(signed char)11] [i_6] [i_5 + 1] [10] [(signed char)11]))) & (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                                arr_40 [i_6] [14] &= ((/* implicit */short) arr_13 [i_5 - 1] [i_6] [9] [i_7] [(short)19] [(short)19]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
