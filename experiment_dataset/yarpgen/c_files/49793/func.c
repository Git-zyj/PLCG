/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49793
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
    var_12 = ((/* implicit */unsigned char) min(((-(1647568322U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (max((((/* implicit */unsigned long long int) var_6)), (10937786101765602555ULL))))))));
    var_13 = var_1;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) var_2);
                    arr_7 [i_1 + 1] [i_2 + 2] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0 - 1]);
                }
            } 
        } 
    } 
}
