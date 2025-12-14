/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48424
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) var_10);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 185475370)) ? (185475370) : (-185475370))), (((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_0]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_3] [i_3] = ((/* implicit */short) ((min(((-(665992513094798337LL))), (max((var_9), (((/* implicit */long long int) var_12)))))) == (var_5)));
                arr_12 [i_3] [i_3] = ((/* implicit */short) (+((~(((/* implicit */int) arr_9 [i_2 + 1]))))));
            }
        } 
    } 
}
