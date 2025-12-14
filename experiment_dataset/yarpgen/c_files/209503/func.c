/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209503
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
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_0 - 2] [i_0] [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 1]))) : (arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) arr_0 [i_2]))));
                    arr_7 [i_0] [12LL] [i_2] [i_2 + 2] = ((/* implicit */unsigned short) arr_1 [i_0 - 2]);
                    arr_8 [i_0 + 2] [(short)3] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [(unsigned short)6]);
                    arr_9 [i_2] [(unsigned short)14] [i_1 + 1] [i_0 - 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-4265)), (((unsigned short) arr_1 [7LL]))))), (4404181600802275396ULL)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) min((var_7), (var_4))))));
}
