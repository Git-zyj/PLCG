/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247739
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
    var_14 = ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (_Bool)1))));
    var_15 = ((/* implicit */unsigned short) 17179869183ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((long long int) var_5)) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) == (max((((17179869186ULL) ^ (17179869177ULL))), (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (18446744056529682441ULL))))))))));
}
