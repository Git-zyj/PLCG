/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25225
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
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (!((((-(var_5))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)6961)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 730468662)) & (var_0)))))))));
            }
        } 
    } 
    var_21 = var_19;
}
