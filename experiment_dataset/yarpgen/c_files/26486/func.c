/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26486
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
                    arr_9 [i_0] [i_2] [i_0] = ((unsigned short) max((var_5), (((/* implicit */unsigned int) var_9))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_0))))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((long long int) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) (short)-21576))))))))));
}
