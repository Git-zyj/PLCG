/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203361
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) (~(min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_1 [i_0] [i_1])))) / (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_1])))))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_8);
}
