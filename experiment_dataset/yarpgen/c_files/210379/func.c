/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210379
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) arr_0 [i_0] [i_1]);
                    var_21 = ((/* implicit */signed char) 4851543649513615544ULL);
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [20LL] [i_1 + 1] [i_2] [i_1 - 1]))))), (arr_6 [i_1] [i_1] [i_1] [i_0])));
                    var_23 = ((/* implicit */int) (~((~(arr_4 [i_1] [i_1] [i_1 - 1])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
    var_25 |= ((/* implicit */long long int) var_18);
    var_26 ^= ((/* implicit */unsigned char) ((unsigned short) var_15));
    var_27 = ((/* implicit */int) var_4);
}
