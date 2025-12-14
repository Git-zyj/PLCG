/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51482
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */int) (short)-21234))))) ? (((/* implicit */int) (unsigned short)65535)) : (arr_3 [i_1])));
                arr_4 [i_0] [i_1] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) -1790486300)) & (0U)));
            }
        } 
    } 
    var_12 = var_5;
}
