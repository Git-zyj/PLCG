/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236789
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_1]);
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)0);
                }
                var_12 |= ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (unsigned short)48436)), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) ((int) var_1)))));
                var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) (-2147483647 - 1)))), (arr_7 [i_1] [i_1 + 1] [i_0])));
                arr_9 [i_1] [i_0] [10U] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
}
