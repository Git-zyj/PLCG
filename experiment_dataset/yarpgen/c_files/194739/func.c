/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194739
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
    var_14 = ((/* implicit */signed char) max((var_6), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_0)), (4611685880988434432ULL))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_5)))))));
                arr_8 [i_0] = ((/* implicit */signed char) min((min((arr_5 [i_0 + 2]), (((/* implicit */long long int) arr_4 [i_0] [i_0 - 1])))), (((/* implicit */long long int) max((((/* implicit */short) var_9)), (arr_2 [i_0] [i_0]))))));
                var_15 ^= max((4611685880988434432ULL), (((/* implicit */unsigned long long int) (short)-6533)));
            }
        } 
    } 
}
