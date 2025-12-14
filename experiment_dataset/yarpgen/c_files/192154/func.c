/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192154
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
    var_12 += ((/* implicit */unsigned short) max((1001828881), (var_7)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) var_1);
                    var_14 = ((/* implicit */int) min((var_14), (min((((/* implicit */int) max((((/* implicit */short) var_8)), (arr_2 [i_1])))), (((((/* implicit */int) (unsigned char)74)) * (((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
}
