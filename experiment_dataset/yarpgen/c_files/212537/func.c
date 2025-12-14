/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212537
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 1] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 2])), ((~(((/* implicit */int) var_1))))));
                arr_7 [i_1] = ((/* implicit */short) (+(((((/* implicit */int) var_11)) | (((/* implicit */int) arr_1 [i_0 + 1]))))));
                var_13 = ((/* implicit */long long int) arr_4 [i_0 - 1] [14ULL]);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */int) (unsigned short)7433))));
}
