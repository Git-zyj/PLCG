/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234502
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = 2147483647;
                var_14 = ((/* implicit */_Bool) ((max((((/* implicit */int) ((((/* implicit */int) (short)32767)) < (((/* implicit */int) (_Bool)1))))), (((2147483647) / (((/* implicit */int) var_10)))))) * (((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) (signed char)-8)))))));
                var_15 = min((((/* implicit */int) ((short) 2147483647))), (max((0), (((/* implicit */int) (unsigned short)44876)))));
                arr_5 [i_0] [i_1] = max((-1606980247), (2147483647));
            }
        } 
    } 
    var_16 = var_8;
    var_17 = ((int) min((2147483640), (2013097814)));
}
