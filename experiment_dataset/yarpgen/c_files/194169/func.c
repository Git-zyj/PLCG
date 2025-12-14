/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194169
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = min((3939753900U), (355213395U));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)8417)))))))) | (max((((/* implicit */long long int) (unsigned short)40230)), (-7943317730868043668LL))));
                            arr_10 [i_3 - 1] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (short)-125);
                            var_12 = var_3;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_10))));
                                var_14 = (+((+(4503599627370495LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_0);
}
