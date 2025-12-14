/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249659
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3597168222U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) min(((_Bool)0), ((!((_Bool)1)))))), ((((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)15402)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50116)) ? (((/* implicit */int) ((arr_0 [i_0] [15LL]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15416)))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823U)) ? (48776597U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19952)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_8))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((int) min((((((/* implicit */_Bool) (unsigned short)4574)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (3221225476U))));
}
