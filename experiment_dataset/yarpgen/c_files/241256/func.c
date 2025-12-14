/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241256
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6309031773019483748ULL)) ? (((((/* implicit */unsigned long long int) arr_0 [i_2] [i_1])) - (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned long long int) 3371937671215213170LL)))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (((~(arr_0 [i_2] [i_2]))) | ((~(var_2)))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) <= (var_5))))));
                    var_11 = ((/* implicit */int) ((long long int) ((short) (unsigned short)61847)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    var_13 = ((/* implicit */int) max((var_13), (var_1)));
}
