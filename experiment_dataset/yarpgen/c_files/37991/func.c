/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37991
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
    var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) min(((unsigned short)65534), (((/* implicit */unsigned short) var_10))))))), (((((/* implicit */_Bool) ((long long int) (unsigned short)62691))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) min((var_1), (var_7))))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) 2147483647)) | (9840879779820391970ULL)))));
                    arr_10 [i_0] [i_1 + 2] [i_2] [i_2] &= (+(((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_2] [i_1])))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */int) (_Bool)0)) >> ((((+(((/* implicit */int) (unsigned char)67)))) - (67))));
    var_19 = ((/* implicit */unsigned short) ((_Bool) var_4));
}
