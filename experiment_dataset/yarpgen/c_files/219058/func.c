/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219058
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
    var_11 = ((/* implicit */unsigned char) ((var_6) + (((/* implicit */long long int) var_1))));
    var_12 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_0 [i_0] [i_1])))) ? (((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */int) (_Bool)0))))) : ((~(((/* implicit */int) (_Bool)0))))))));
                arr_6 [i_0] [i_1] = arr_0 [i_0] [i_1];
            }
        } 
    } 
    var_13 = var_8;
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 49152)) || (var_8)))), (var_3)))) ? ((~(max((var_1), (((/* implicit */unsigned int) -601314172)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (-8LL)))))))));
}
