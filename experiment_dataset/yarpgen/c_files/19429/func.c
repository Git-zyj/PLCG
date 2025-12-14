/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19429
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((arr_0 [i_0]) - (max((2846271485353003116LL), (arr_2 [i_0] [i_0 - 1]))))) ^ (var_0));
                arr_5 [i_0] [i_0] [i_0 + 1] = (((+((+(arr_2 [i_0] [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0 - 3]) == (-7536344828915197059LL))))));
            }
        } 
    } 
    var_11 &= min((var_1), (var_1));
    var_12 = var_2;
    var_13 = var_8;
}
