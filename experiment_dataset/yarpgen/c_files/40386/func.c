/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40386
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0])))) ? (((arr_5 [i_0]) ^ (arr_5 [i_0]))) : (((arr_5 [i_1]) >> (((var_9) + (1167631051)))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_1] = arr_10 [i_1] [i_1];
                                var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_3 + 3] [i_3 + 2] [i_3] [i_1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = (signed char)-17;
}
