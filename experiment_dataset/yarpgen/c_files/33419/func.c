/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33419
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
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min(((-(2147483642))), (-3)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_1] [i_4] [i_1] [15LL] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) (((((-(arr_3 [i_0 - 3] [i_1]))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_8 [i_1] [i_3] [i_2] [i_1] [i_0 + 1] [i_1])) - (26260)))))) : (((/* implicit */_Bool) (((((((-(arr_3 [i_0 - 3] [i_1]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_8 [i_1] [i_3] [i_2] [i_1] [i_0 + 1] [i_1])) - (26260))) + (34607))) - (28))))));
                                var_20 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((int) 20LL))), (min((((/* implicit */long long int) (signed char)0)), ((-9223372036854775807LL - 1LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            {
                var_21 ^= ((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) ((arr_3 [i_6] [i_6]) << (((arr_15 [i_5]) - (10230232537636840792ULL))))))), (arr_13 [i_5] [i_6])));
                var_22 = ((/* implicit */unsigned long long int) ((((arr_16 [i_6]) + (2147483647))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) arr_6 [i_5] [0U] [i_6])))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned short) var_4);
}
