/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54937
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
    var_11 = ((/* implicit */int) ((long long int) ((unsigned int) var_10)));
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) (~(arr_3 [6U])));
                    arr_9 [i_0] [i_0] [(unsigned short)5] = ((/* implicit */int) ((unsigned long long int) ((int) arr_4 [i_1 - 1] [i_2 - 1])));
                    arr_10 [i_0] = ((short) min((((/* implicit */long long int) arr_2 [i_2 + 1] [i_1 - 1])), (((long long int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
}
