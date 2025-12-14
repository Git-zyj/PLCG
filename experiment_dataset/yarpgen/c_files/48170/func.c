/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48170
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)200))))));
                    var_21 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_5);
    var_23 = (short)-32760;
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (short)-32760))));
}
