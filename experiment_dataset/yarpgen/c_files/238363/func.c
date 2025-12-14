/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238363
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) min(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) var_11)), (arr_0 [i_0])))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((3038840952U), (3663158756U))))))), (var_10))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((-97389185446119499LL), (((/* implicit */long long int) (unsigned short)5432))))) ? ((-(((/* implicit */int) (signed char)53)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)60103))))));
                        arr_13 [i_1] [0U] [i_1] [i_1] = ((/* implicit */short) var_7);
                    }
                } 
            } 
        } 
    }
    var_16 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (var_12) : ((~(var_12))))), (((/* implicit */unsigned int) var_10))));
    var_17 = ((/* implicit */int) max((min(((~(var_3))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_10)))) : (((/* implicit */int) var_13)))))));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
}
