/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52728
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
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */signed char) 4229723997923082078ULL);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1993783544)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) (short)-3859))))))) != ((-(14217020075786469537ULL)))));
                var_14 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7395)) | (((/* implicit */int) (unsigned char)193))))) | (min((((/* implicit */unsigned long long int) 1440010444U)), (0ULL))))), (((/* implicit */unsigned long long int) min((-1876658417), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 3])))))));
            }
        } 
    } 
}
