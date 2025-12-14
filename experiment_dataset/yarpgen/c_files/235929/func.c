/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235929
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = -23LL;
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 28);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_3] [13LL] [i_1] [(signed char)13] [i_2] = (~(((((/* implicit */_Bool) ((unsigned short) var_10))) ? ((+(arr_13 [i_2] [(short)16] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_8 [i_2] [i_2] [i_0] [i_2])))))));
                                arr_16 [(signed char)2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) (-((+(-12)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (~(arr_6 [i_0] [i_1] [i_0])))))))));
                var_21 = ((/* implicit */unsigned int) ((long long int) 11));
            }
        } 
    } 
    var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((469762048U), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -12)))))) : (min((6089618169886410289LL), (((/* implicit */long long int) (short)-1))))))), (((((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) (short)17053))))) | (((unsigned long long int) -1519311149)))));
}
