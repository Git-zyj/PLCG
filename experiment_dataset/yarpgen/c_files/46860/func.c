/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46860
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */int) (-(max((((/* implicit */unsigned int) ((int) var_7))), (3285564583U)))));
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-90)), (var_8)))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])))))));
                    var_19 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_4 [i_1 - 2] [9] [i_2]))))));
                    arr_12 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [i_0])), (var_15)));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) var_1);
}
