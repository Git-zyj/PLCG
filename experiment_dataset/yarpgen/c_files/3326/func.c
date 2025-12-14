/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3326
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
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 103564716U))));
                arr_4 [(unsigned char)8] [(unsigned char)8] [i_1] = max((((/* implicit */unsigned int) ((int) min((103564707U), (arr_3 [i_1]))))), (var_1));
                arr_5 [i_1] = ((max((((/* implicit */unsigned int) arr_1 [i_0])), (2442902567U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned int) 4191402562U))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_8);
    var_17 = ((/* implicit */int) max((var_17), ((((((~(((/* implicit */int) (unsigned char)15)))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (var_1))) <= (((var_1) & (((/* implicit */unsigned int) var_6)))))))))));
}
