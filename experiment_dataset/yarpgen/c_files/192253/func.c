/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192253
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) min((((arr_9 [i_4 + 1] [i_1] [i_1] [(unsigned short)10]) + (((/* implicit */unsigned int) ((int) var_9))))), (((/* implicit */unsigned int) (+(max((arr_8 [i_0] [i_0] [(short)4] [(short)6] [i_0] [18]), (((/* implicit */int) (unsigned short)12014)))))))));
                                var_12 = ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                } 
                arr_10 [12LL] [i_1] [1U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(12378782735350579247ULL)))) || (((/* implicit */_Bool) (signed char)120))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_3);
}
