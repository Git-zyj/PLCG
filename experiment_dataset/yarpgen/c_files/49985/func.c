/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49985
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-15697);
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(min((((int) var_1)), (((/* implicit */int) arr_4 [i_0] [4ULL] [i_1])))))))));
                    arr_10 [10LL] [i_0] [i_2 - 1] [i_0] = ((/* implicit */long long int) 1903780495);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) var_14)), (23245323480665032ULL)))));
}
