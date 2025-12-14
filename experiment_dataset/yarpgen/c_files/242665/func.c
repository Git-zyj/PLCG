/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242665
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
    var_16 -= ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 &= ((/* implicit */_Bool) ((unsigned short) var_5));
                    var_18 = ((/* implicit */unsigned long long int) (-(((unsigned int) ((short) var_12)))));
                    var_19 = ((/* implicit */short) (-((-((((_Bool)1) ? (36516903U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
    var_21 *= ((/* implicit */short) ((unsigned long long int) (unsigned char)255));
}
