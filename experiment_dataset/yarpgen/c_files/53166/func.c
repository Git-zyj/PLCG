/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53166
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) | (var_9)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) min((4211449451U), (((/* implicit */unsigned int) arr_1 [4U] [15]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) 4211449451U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))));
                    arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_1]))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (849434718560969227ULL))))) | (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))))));
                    arr_10 [24ULL] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))) & (31ULL))));
                }
            } 
        } 
    } 
}
