/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226576
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (signed char)0))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (~(max((arr_2 [i_1 + 2] [i_1 - 1]), (((/* implicit */int) (signed char)-5))))));
                arr_5 [i_0] [i_1 + 3] = ((/* implicit */long long int) 0U);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -182425615417830014LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-18))))) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) var_2))))));
}
