/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235631
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-27803))));
                arr_7 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)29760))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_1 - 2] [i_1 - 3] [i_1 + 1])), ((short)-26))))) : (((((/* implicit */long long int) (-(1072122814)))) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : (-8742940159005013473LL)))))));
                var_19 -= ((/* implicit */unsigned int) ((long long int) (_Bool)1));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_1]);
                arr_9 [i_0] [i_1] |= ((/* implicit */long long int) var_15);
            }
        } 
    } 
    var_20 = var_10;
}
