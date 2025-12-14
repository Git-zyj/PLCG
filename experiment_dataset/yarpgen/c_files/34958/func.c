/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34958
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
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) (unsigned short)0);
                arr_5 [i_0] [3] [4LL] = ((/* implicit */unsigned int) (unsigned short)64460);
                arr_6 [i_1] = (unsigned short)1075;
                var_16 = ((/* implicit */int) (_Bool)1);
                arr_7 [i_0] = 2179449682441176391ULL;
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_4);
    var_18 += ((/* implicit */unsigned int) var_4);
}
