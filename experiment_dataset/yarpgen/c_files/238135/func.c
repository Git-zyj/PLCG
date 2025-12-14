/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238135
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-126)))) > (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) + (6687194549175024092ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((((/* implicit */int) var_0)) - (25))))))))));
                                arr_12 [i_0] [i_0] [i_0] [(short)5] [i_3] [i_3] [i_4 - 3] = ((/* implicit */_Bool) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_5] [i_2] [i_5] [i_5] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_8)))))))), (536870911)));
                                arr_20 [(short)3] [i_5] [i_1] [(signed char)3] [(short)3] [i_5] [i_6] = ((/* implicit */signed char) 1736314916U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))), (min((min((var_3), (15068619591219349030ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_1)), (var_17))))))));
                                arr_27 [i_1] = ((/* implicit */short) ((max((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15121))))), (min((var_18), (((/* implicit */unsigned long long int) var_7)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))));
                                var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) 14U)) && (((/* implicit */_Bool) ((int) 288230376151711743ULL)))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_16)) < (var_14)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        for (signed char i_10 = 1; i_10 < 10; i_10 += 3) 
                        {
                            {
                                arr_34 [i_0] [i_9] [i_0] [(signed char)1] [8ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(2043617788U)))), (max((var_13), (((unsigned long long int) var_14))))));
                                arr_35 [i_10] [i_9] [8ULL] [i_9] [i_0] = ((short) max((max((((/* implicit */unsigned long long int) (unsigned short)63795)), (var_18))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
                                arr_36 [11U] [11ULL] [i_9] [i_9] [i_1] [i_0] = var_19;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_0);
    var_24 = (~((~(var_3))));
}
