/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35274
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_3))))))), (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((_Bool) arr_0 [i_0 + 2])) ? ((+(((/* implicit */int) (unsigned char)187)))) : (((/* implicit */int) ((arr_0 [i_0 + 2]) >= (arr_0 [i_0 + 2]))))));
                var_11 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) - (3884434640666750374ULL))))) < ((~(((((/* implicit */_Bool) var_0)) ? (3884434640666750374ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                arr_6 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))) : (((unsigned int) arr_0 [i_0 + 2]))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned int) (((~(130023424U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))))))));
                arr_8 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (arr_4 [i_0 - 1]))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))));
}
