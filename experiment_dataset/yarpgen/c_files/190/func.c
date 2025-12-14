/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190
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
    var_16 = ((/* implicit */short) ((unsigned char) var_9));
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 + 2])))))) - (arr_4 [i_0] [i_0] [i_0 + 2])));
                arr_8 [i_0] [i_0] [(unsigned char)14] = ((/* implicit */long long int) (short)-6214);
                arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [9ULL])) && (((/* implicit */_Bool) ((unsigned long long int) 4713711141969334166LL)))))) << (((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) -755369861)), (4074563104821245240LL)))) + (((((/* implicit */unsigned long long int) var_5)) + (140737488338944ULL))))) - (11079934117542212328ULL)))));
            }
        } 
    } 
}
