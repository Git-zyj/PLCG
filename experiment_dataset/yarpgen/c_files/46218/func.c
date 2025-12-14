/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46218
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
    var_17 = ((/* implicit */short) var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((arr_3 [i_1 - 1] [i_1] [i_2 + 1]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 2]))) - (arr_3 [i_1 + 1] [i_1] [i_2 - 1])))));
                    var_18 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 - 1]))) <= (1795070081U))))));
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
}
