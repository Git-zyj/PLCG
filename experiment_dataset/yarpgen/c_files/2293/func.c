/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2293
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
    var_18 = ((/* implicit */unsigned short) var_11);
    var_19 = ((/* implicit */unsigned long long int) 70368207306752LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((4992852380227429358ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((max((arr_4 [i_3 - 1] [i_4 - 1]), (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) (signed char)-41)))))));
                                arr_13 [i_0] [i_1] [8U] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */int) min((min((((/* implicit */long long int) arr_10 [i_3 + 1] [i_1] [i_3 + 1] [i_4 + 3])), (7043249626426654690LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_1] [i_2] [i_4 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_6 [i_3 - 1] [i_1] [i_2] [i_4 + 2])))))));
                                var_22 = ((7043249626426654690LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_2]))));
                                arr_14 [i_3] [i_3] [i_2] [2LL] [(short)7] [i_2] [i_2] = ((/* implicit */_Bool) (short)-29281);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
