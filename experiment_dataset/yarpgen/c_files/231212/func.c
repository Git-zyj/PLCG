/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231212
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) 2147483647);
                    arr_6 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((unsigned long long int) ((min((((/* implicit */long long int) arr_3 [i_0 + 2])), (arr_4 [i_1] [10LL] [i_1] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) min((((long long int) ((((/* implicit */_Bool) (short)14880)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))), (((/* implicit */long long int) arr_0 [i_0])))))));
                    var_12 = ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((_Bool) arr_3 [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) min((var_0), (var_5)))), (var_1)))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(var_9))))))));
}
