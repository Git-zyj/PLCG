/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4122
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
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (unsigned short)15727);
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) > (((((/* implicit */_Bool) ((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (unsigned short)65528)) ^ (((/* implicit */int) var_13))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46956)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)109))));
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned short) (_Bool)1);
}
