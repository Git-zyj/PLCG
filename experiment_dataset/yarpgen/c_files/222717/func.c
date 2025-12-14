/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222717
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
    var_11 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [13U] = ((/* implicit */unsigned short) (~(max((((((((/* implicit */int) (signed char)-63)) + (2147483647))) << (((((/* implicit */int) (signed char)63)) - (63))))), (((/* implicit */int) (signed char)63))))));
                    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)63)), (arr_2 [i_1] [i_0] [i_1])));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_1 [i_1 + 1])), (arr_4 [3] [i_1 + 1] [i_1] [i_1 - 2]))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))));
                }
            } 
        } 
    } 
}
