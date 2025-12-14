/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232966
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_19 = ((_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) 374179518541208310ULL))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (~(((long long int) arr_4 [i_2 + 2] [i_2 - 3] [i_2 - 1] [i_1])));
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_2 [i_1] [i_1] [i_2 + 2]) ? (70368710623232LL) : (((/* implicit */long long int) 3913458125U))))), (((((_Bool) (unsigned short)40775)) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60431)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_3);
}
