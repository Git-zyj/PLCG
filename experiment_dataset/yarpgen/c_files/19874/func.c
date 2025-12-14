/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19874
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
    var_11 = ((/* implicit */unsigned char) var_10);
    var_12 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 2] [i_1] [i_1] = (+(((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) & (((long long int) arr_1 [i_0 - 2] [i_0 - 2])))));
                    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(arr_5 [4ULL] [(short)17] [(short)17])))), (((unsigned char) (~(var_10))))));
                    arr_8 [i_0] [i_1] [(unsigned char)13] = ((/* implicit */_Bool) (-2147483647 - 1));
                }
            } 
        } 
    } 
}
