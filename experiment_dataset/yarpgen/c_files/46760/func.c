/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46760
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
    var_14 = ((/* implicit */signed char) -4693214913751556423LL);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_2 [i_0 + 3])))) + (2147483647))) >> ((((-(arr_4 [i_2] [i_0 - 1]))) - (3407941161U)))));
                    arr_8 [i_0 + 3] [i_1] [i_0 + 3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0 - 2])))) / (4693214913751556423LL)));
                }
            } 
        } 
    } 
}
