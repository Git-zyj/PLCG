/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23954
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
    var_18 = ((/* implicit */_Bool) ((unsigned int) var_5));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_3);
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]);
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) arr_3 [i_2] [i_1]))))) ? ((~(var_13))) : (((/* implicit */int) ((unsigned char) var_5)))))))));
                }
            } 
        } 
    } 
}
