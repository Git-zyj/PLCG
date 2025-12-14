/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40445
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)20)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) - ((~(((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */long long int) (short)8191)), (-4LL))), (((/* implicit */long long int) ((unsigned char) arr_5 [i_0])))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) -826438937432900373LL);
                }
            } 
        } 
    } 
}
