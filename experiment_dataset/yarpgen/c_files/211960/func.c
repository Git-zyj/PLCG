/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211960
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
    var_15 &= ((/* implicit */_Bool) (short)-15147);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) arr_0 [i_1]);
                var_17 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) -1))) ? ((~(((/* implicit */int) arr_2 [i_0 - 1] [i_1] [12])))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1] [16ULL])))), ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < (6289875370367520577ULL))))))));
            }
        } 
    } 
}
