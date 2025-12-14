/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240094
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
    var_13 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-805756371)))) ? ((((!(((/* implicit */_Bool) 1384705301)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)238))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-19)), ((unsigned short)3)))))) : (((/* implicit */int) min((arr_5 [i_0] [i_0] [(unsigned char)10]), (arr_5 [i_0] [i_1] [i_1]))))));
                var_15 = ((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)81))));
            }
        } 
    } 
}
