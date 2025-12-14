/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246017
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) -1580532111))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (-(((((2243003720663040ULL) % (((/* implicit */unsigned long long int) -1580532119)))) << (((var_10) - (4018122593074853018LL)))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_3);
}
