/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243130
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                    arr_8 [8U] [i_0] [i_0 - 3] = ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) min((arr_5 [i_2] [i_2] [i_2 + 1]), (((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) arr_5 [i_2 + 2] [i_2 + 2] [i_2 - 2])) ^ (var_10))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_1);
}
