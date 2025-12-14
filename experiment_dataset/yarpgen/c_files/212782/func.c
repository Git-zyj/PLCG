/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212782
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned char)7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) arr_4 [i_0 + 1]))))));
                arr_6 [i_0] [11U] = 5U;
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((462215376129287658ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-32752)), ((unsigned short)43963))))) ^ (1644761437U)));
    var_11 *= ((((((/* implicit */_Bool) 1829846282874061121ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (var_1)))))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_4))))));
}
