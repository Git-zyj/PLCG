/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219380
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
    var_11 = ((/* implicit */long long int) (-(2311564807U)));
    var_12 = ((/* implicit */signed char) (unsigned short)62006);
    var_13 = ((/* implicit */short) var_8);
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_0 [i_0] [i_1 + 1]))));
            var_16 ^= ((/* implicit */unsigned short) 8607643539965837453ULL);
        }
        for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) (-(var_5)));
            arr_8 [i_2 + 2] [i_2 + 2] = (short)-17148;
        }
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)108)) == (((/* implicit */int) (short)-10907))));
    }
}
