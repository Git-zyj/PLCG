/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246048
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
    var_10 = (unsigned short)53769;
    var_11 = ((/* implicit */unsigned short) min(((((~(((/* implicit */int) (unsigned short)53769)))) % (((/* implicit */int) var_5)))), (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [(signed char)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) min((var_9), (var_9))))) ? (arr_3 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53769))) >= (9189398097983387281ULL))))))));
                    var_12 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_2 - 1])))))));
                    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)7640));
                    var_14 = ((/* implicit */signed char) max((max((min((arr_0 [i_0]), (var_8))), (((unsigned long long int) -2641524699171774845LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | ((~(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
}
