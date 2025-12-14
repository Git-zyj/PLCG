/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223680
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
    var_15 ^= (+(((/* implicit */int) ((((/* implicit */int) (short)-5729)) > (max((2147483647), (((/* implicit */int) (short)-31879))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */short) arr_2 [i_1 + 3]);
                    var_16 += ((/* implicit */short) min((((/* implicit */int) arr_3 [i_0] [i_1 + 3])), ((-(((/* implicit */int) arr_3 [i_0] [i_1 + 3]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */int) arr_5 [i_3 + 1]);
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) (short)-31884)) * (((/* implicit */int) (short)21656)))))));
            }
        } 
    } 
}
