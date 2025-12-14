/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201792
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
    var_12 = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) var_6);
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)16))) >= (min((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) var_8)), (((4781483459674412118LL) | (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
}
