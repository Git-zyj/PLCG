/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20069
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */short) (~(((/* implicit */int) min((var_10), (((/* implicit */short) (unsigned char)224)))))));
                var_19 = ((/* implicit */unsigned char) var_9);
                var_20 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((var_13), (var_13)))) + ((-(((/* implicit */int) var_5)))))), (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) ((int) ((unsigned int) (+(((/* implicit */int) (short)32767))))));
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((max((var_9), (var_9))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (short)5133)))))))) != (((/* implicit */int) var_0))));
}
