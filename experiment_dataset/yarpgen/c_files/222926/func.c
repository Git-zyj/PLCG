/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222926
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
    var_12 &= ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) var_0)), (14ULL))) - (18446744073709551602ULL))) & (14ULL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] = arr_9 [i_0] [i_0] [i_1] [i_2];
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((arr_0 [i_0 + 1]) - (arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) arr_6 [i_0] [4U] [(unsigned short)0])))))));
                            var_14 += ((/* implicit */_Bool) arr_1 [i_2]);
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) (-(18446744073709551597ULL))))), (((((/* implicit */int) ((var_8) >= (((/* implicit */int) (unsigned char)34))))) >> (((((/* implicit */int) arr_5 [4U] [i_1])) - (28)))))));
                        }
                    } 
                } 
                arr_15 [i_0] [0LL] [i_1] |= ((/* implicit */unsigned long long int) arr_5 [i_0] [2U]);
                var_15 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (arr_9 [i_0 + 1] [i_0 - 2] [7LL] [7LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> (((max(((~(var_8))), (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [0U] [i_0 - 2])))) - (339834505)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)7)))))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((max((18446744073709551594ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_5]))))))));
                arr_21 [i_4] [i_4] [i_5] = ((/* implicit */long long int) arr_17 [i_4]);
            }
        } 
    } 
}
