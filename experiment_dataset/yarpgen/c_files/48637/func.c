/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48637
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))))))));
    var_20 = ((((/* implicit */_Bool) 12234274273802601891ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)64)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = arr_3 [i_1];
                arr_5 [i_0] = ((/* implicit */signed char) ((arr_3 [i_1 - 3]) >> (((/* implicit */int) (((-(3426640604U))) != (arr_0 [i_1 + 1]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (((~(10207994873231030413ULL))) > (((/* implicit */unsigned long long int) 485446844))));
            }
        } 
    } 
}
