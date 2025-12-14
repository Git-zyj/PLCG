/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30606
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
    var_12 -= ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */short) (_Bool)0);
                    var_14 = (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)4515)))));
                    var_15 = max((((/* implicit */long long int) var_1)), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3217829114U)) : ((-9223372036854775807LL - 1LL)))))));
                    arr_10 [i_0] [i_0] = (((+((-(827975408U))))) << (((288230376151711712LL) - (288230376151711686LL))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_5);
}
