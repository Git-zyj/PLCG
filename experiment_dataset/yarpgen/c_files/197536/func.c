/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197536
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
    for (short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_5 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1])))))) : (arr_0 [i_0] [i_1])))));
                    var_14 = (~(((/* implicit */int) ((short) arr_4 [i_0 + 1]))));
                    var_15 = arr_1 [i_0];
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_16), ((unsigned char)150)));
    var_17 -= ((/* implicit */unsigned char) ((short) max((((((/* implicit */_Bool) var_2)) ? (var_8) : (var_2))), (((/* implicit */long long int) var_7)))));
}
