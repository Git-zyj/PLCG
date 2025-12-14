/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198585
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
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [4LL] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_5 [i_0 + 1])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)213)), (var_0))))))) || (arr_4 [i_1 + 1] [i_1 + 1])));
                    arr_11 [i_0 - 2] [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_1] [i_1 - 2] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)11518)))))))) ? ((((-(arr_1 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) var_7))))) : ((-(arr_1 [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_11);
}
