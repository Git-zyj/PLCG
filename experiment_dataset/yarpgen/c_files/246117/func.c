/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246117
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = (~(arr_2 [i_0 + 1]));
                arr_5 [9LL] [i_0] [(signed char)13] = ((int) (-(((8507596356712987922LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))));
                arr_6 [i_0] = arr_4 [(short)15] [(short)15] [(short)15];
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        for (short i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) var_0);
                var_19 = ((/* implicit */long long int) min((var_19), (5985732528270092337LL)));
                arr_12 [i_2 + 2] = ((/* implicit */unsigned char) max(((-(2058331828U))), (((/* implicit */unsigned int) ((signed char) arr_8 [i_3])))));
            }
        } 
    } 
}
