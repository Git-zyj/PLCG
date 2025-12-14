/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26742
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_0)) ? (var_9) : (arr_2 [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1 - 1])) << (((arr_2 [i_1 - 1] [i_1]) - (700294725)))))));
                    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) ^ (-6315292463872764265LL)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        var_21 = ((short) ((short) arr_11 [7LL] [i_3 + 2]));
        arr_13 [i_3] = ((/* implicit */unsigned short) (~(1577766608U)));
        var_22 = ((/* implicit */short) arr_11 [10] [i_3]);
    }
}
