/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24700
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
    var_18 &= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max(((unsigned char)192), (((/* implicit */unsigned char) (_Bool)1))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)7783))));
                    var_21 = ((/* implicit */int) var_11);
                    var_22 -= ((/* implicit */int) ((unsigned short) ((unsigned char) (~(((/* implicit */int) arr_0 [(_Bool)1]))))));
                    var_23 = var_6;
                }
            }
        } 
    } 
}
