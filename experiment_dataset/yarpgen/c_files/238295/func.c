/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238295
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((-1014393679) > (((/* implicit */int) (short)21844))));
                        var_21 = ((/* implicit */int) var_14);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)0))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_19))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max(((+(-512871227))), ((+(((/* implicit */int) ((_Bool) var_5)))))));
}
