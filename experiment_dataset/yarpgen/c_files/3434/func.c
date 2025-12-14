/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3434
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
    var_13 = ((/* implicit */unsigned char) (unsigned short)23);
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(unsigned char)0] [i_0] = ((/* implicit */_Bool) arr_4 [i_1]);
                var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1])))))) + (var_5)));
                var_16 = ((/* implicit */unsigned int) arr_0 [(unsigned short)9] [(unsigned short)12]);
                var_17 *= var_10;
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26420))) : (-1LL)))))))));
}
