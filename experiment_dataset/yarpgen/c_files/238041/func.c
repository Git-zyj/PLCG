/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238041
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
    var_12 = ((/* implicit */short) var_2);
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) (unsigned char)39))), ((~(min((((/* implicit */unsigned int) (unsigned char)169)), (1483444479U)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_1), (((/* implicit */short) var_2))));
                arr_4 [i_1] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) ^ ((+(var_6)))))));
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)242)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */short) var_8))));
}
