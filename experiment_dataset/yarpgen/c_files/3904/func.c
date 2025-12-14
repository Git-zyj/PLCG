/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3904
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
    var_11 = ((/* implicit */unsigned char) (signed char)10);
    var_12 = ((/* implicit */signed char) -1781634743);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_1 + 1] = arr_1 [i_0] [i_1 - 1];
                var_13 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (max((((((/* implicit */unsigned long long int) -2083857232735149921LL)) & (8074549924882943135ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */int) var_8)))))))));
                arr_6 [i_0] &= ((/* implicit */long long int) var_6);
            }
        } 
    } 
}
