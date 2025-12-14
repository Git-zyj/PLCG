/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199651
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
    var_16 = ((/* implicit */_Bool) (unsigned char)173);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((arr_3 [i_0] [i_0] [6LL]) ? (((/* implicit */unsigned long long int) 6641193655698990348LL)) : (((((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_0 - 1] [(unsigned short)3] [i_0 - 1])))) | ((~(arr_0 [i_2]))))))))));
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_4 [i_0]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 1274441676U))));
}
