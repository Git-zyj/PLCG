/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194810
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
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] = (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0])))));
                var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-27215)), ((unsigned short)45240))))));
                arr_7 [i_1] [(unsigned short)5] = var_4;
            }
        } 
    } 
}
