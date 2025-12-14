/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236480
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
    var_16 += ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (18446744073709551615ULL)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [i_0])), (((((/* implicit */_Bool) 15051113634125165539ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 2] [i_0] [(unsigned short)12] [i_3] [i_2]))) : (15051113634125165539ULL)))))) ? (max((((/* implicit */unsigned long long int) var_1)), (max((15051113634125165539ULL), (((/* implicit */unsigned long long int) 6749703119830445338LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                                arr_14 [7ULL] [i_1] [(signed char)4] [i_1] [18] [8ULL] = ((/* implicit */unsigned short) arr_10 [i_0 + 1] [i_1] [i_0 + 1]);
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((arr_0 [i_0 + 2]) & (((/* implicit */unsigned long long int) 2990290661U))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (~((~(3395630439584386062ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 7; i_5 += 2) 
    {
        for (int i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-57))));
                var_21 += ((long long int) min((2147483647), (((/* implicit */int) arr_3 [i_5]))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_0 [i_6])));
            }
        } 
    } 
}
