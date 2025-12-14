/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27181
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((min((16028820127434551952ULL), (((/* implicit */unsigned long long int) (+(971847297)))))) != (((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])) / (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) / (17620714312405653702ULL)))))));
                var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_4);
    var_16 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63702))))));
    var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((var_1) < (((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1))))))) : ((+(((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)243))))))));
}
