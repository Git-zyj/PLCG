/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214623
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 += (~(((((/* implicit */_Bool) ((unsigned int) 3970319332U))) ? (min((((/* implicit */unsigned int) (unsigned short)23)), (3220787495U))) : ((-(2711880056U))))));
                    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)23))) ? ((+(var_8))) : (((/* implicit */long long int) min((-1362724413), (((/* implicit */int) (unsigned char)42)))))));
                    var_18 += ((/* implicit */unsigned long long int) var_2);
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((16777215U), (2693639898U)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_7);
}
