/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242518
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_3 [i_1] [i_0]))))));
                var_14 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (unsigned short)65535)) : (7340032))), ((+(((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((((unsigned int) var_7)) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (var_6))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_2))))))))));
}
