/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240476
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
    var_13 ^= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (11225023439869427138ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230)))));
    var_14 ^= (_Bool)1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((2147483647) - (2147483625))))))));
                arr_5 [i_1] [i_1] = max((((((/* implicit */int) (short)-11299)) - (((/* implicit */int) arr_2 [(short)9])))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-14248)) && (((/* implicit */_Bool) (unsigned short)64303))))) < (((/* implicit */int) (unsigned short)0))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)0);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_4);
}
