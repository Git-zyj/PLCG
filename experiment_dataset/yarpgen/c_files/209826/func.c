/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209826
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
    var_15 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)223)))), (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_0 + 2] [i_1] [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) - (arr_3 [i_0 - 1] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208)))))));
                    var_16 -= (-(((/* implicit */int) (unsigned short)57190)));
                    arr_7 [i_0 - 1] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_14))))) <= (arr_3 [i_0] [i_0])))), (arr_2 [i_0])));
                }
            } 
        } 
    } 
}
