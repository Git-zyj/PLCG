/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202814
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((-807310299) == (((/* implicit */int) var_5))))) == (((/* implicit */int) arr_6 [i_0] [i_0]))));
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)16384)))) ? (((/* implicit */int) min((arr_3 [10U] [i_1]), (arr_3 [i_1] [(unsigned short)8])))) : (((/* implicit */int) arr_4 [i_0])))) <= ((-(max((((/* implicit */int) (_Bool)1)), (var_7)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                arr_14 [i_2] [(short)13] [(short)13] = ((((/* implicit */int) arr_12 [i_2] [i_2])) ^ (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((-947304957) + (var_7))))));
                var_16 = ((/* implicit */short) 3896997060U);
            }
        } 
    } 
}
