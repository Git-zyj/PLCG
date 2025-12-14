/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36567
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
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_8;
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) -818240000)) <= (((((/* implicit */_Bool) arr_5 [i_0 - 4])) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0]) : (arr_4 [i_0]))))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)1023)), (max((var_8), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))))));
    var_16 = ((/* implicit */unsigned char) var_0);
}
