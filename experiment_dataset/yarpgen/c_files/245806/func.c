/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245806
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
    var_17 = ((/* implicit */long long int) (-(((int) ((int) var_2)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_18 += ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((2392122922U), (min((((/* implicit */unsigned int) ((var_2) ^ (((/* implicit */int) var_9))))), (min((2392122933U), (1902844359U)))))));
                                var_20 = ((/* implicit */unsigned int) ((unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_4])) ? (-1806468173) : (((/* implicit */int) arr_2 [i_0 + 3] [i_1] [i_3])))), (((/* implicit */int) arr_3 [(_Bool)1])))));
                                arr_11 [i_0] [i_2] [i_2 + 2] [i_0] [i_4 + 3] = arr_6 [i_0 + 1] [i_2];
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_4 [20U] [i_1] [i_1] [i_1])))), (arr_9 [i_0] [(signed char)16] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 4; i_6 < 10; i_6 += 1) 
        {
            var_22 &= ((/* implicit */_Bool) var_14);
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_26 [i_5] [i_6] [i_7] [i_8] [8] = ((/* implicit */unsigned long long int) (+(((long long int) arr_21 [i_9] [i_8 - 1] [i_8 - 1] [i_6 + 1]))));
                            var_23 -= ((/* implicit */_Bool) (((~(arr_17 [i_5] [i_6 - 4] [i_6]))) / (min((arr_17 [i_5] [i_6 + 2] [i_7]), (arr_17 [i_5] [i_6 + 2] [i_6 + 2])))));
                            var_24 = ((/* implicit */int) min(((~(var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) arr_20 [i_9])) : (arr_8 [i_6 - 2]))))));
                        }
                    } 
                } 
            } 
        }
        arr_27 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_2)))));
        arr_28 [i_5] = ((/* implicit */unsigned int) var_9);
    }
}
