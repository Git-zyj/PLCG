/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232355
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
    var_10 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [3U] [i_1] [3U] [i_0] [i_2] = (+(((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))));
                            var_11 = arr_9 [i_2] [i_1] [i_2] [i_2];
                            var_12 = (((-(arr_3 [i_0] [i_1] [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))));
                            arr_11 [i_3] [i_1] [i_3] [i_2] [i_3] |= arr_8 [i_0] [i_0] [i_0] [i_3];
                            var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (short)20819))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [14LL] [i_0])) ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_1] [i_0] [i_1])))) & (max((((/* implicit */unsigned long long int) 2357804578U)), (3735985132694128086ULL)))));
                var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_8 [9] [i_1] [i_5] [i_4]))));
                            arr_17 [i_0] [i_1] [i_1] [i_1] = min((((/* implicit */unsigned long long int) (~((-(arr_12 [i_0] [i_1] [i_4] [i_5])))))), (min((arr_6 [i_1] [i_1] [i_4]), (((/* implicit */unsigned long long int) arr_8 [(short)6] [(short)6] [i_4] [i_1])))));
                            arr_18 [i_0] [i_1] [10] = ((/* implicit */unsigned short) arr_13 [i_0] [i_1]);
                            var_17 = arr_1 [i_0] [i_0];
                            arr_19 [i_1] = ((((((/* implicit */_Bool) var_5)) ? (max((arr_2 [i_1]), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [5] [i_5])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [6LL])) ? (var_4) : (((/* implicit */int) var_5))))))) * (max((arr_7 [i_0] [i_0] [i_4]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_1);
}
