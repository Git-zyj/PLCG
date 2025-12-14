/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205859
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8380416U)))))) : (max((((/* implicit */unsigned int) (unsigned short)41707)), (4277605561U)))))) ? (((/* implicit */unsigned int) ((int) 8380416U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23829))) + (min((3471281389U), (((/* implicit */unsigned int) arr_1 [(unsigned char)1]))))))));
                arr_7 [i_0] = ((/* implicit */int) (+((+(arr_0 [i_0 + 1] [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_19);
}
