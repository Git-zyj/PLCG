/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192317
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) (-(((int) 21LL))));
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) | (((long long int) arr_0 [i_0]))))), (max((((/* implicit */unsigned long long int) max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned char) (_Bool)0))))), (((((/* implicit */_Bool) arr_4 [i_0] [2U] [i_1])) ? (var_11) : (arr_2 [i_0 - 1] [i_1])))))));
                arr_6 [10LL] = ((/* implicit */signed char) (short)-18001);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) 1592221918);
    var_17 = ((/* implicit */unsigned char) var_8);
}
