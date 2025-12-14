/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46882
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
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = max(((~(((/* implicit */int) (short)9652)))), ((~(((/* implicit */int) arr_3 [i_1])))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) max((max((arr_1 [i_0]), ((!((_Bool)0))))), ((!(arr_1 [i_0])))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1]))))), ((+((-(var_7)))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned char) var_0);
}
