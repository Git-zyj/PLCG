/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214890
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((int) min((5439555851219923587ULL), (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */int) var_1);
                    var_20 = ((/* implicit */unsigned short) min((max((var_14), (((/* implicit */long long int) arr_3 [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (arr_6 [i_2] [i_1] [i_0]))))));
                    arr_11 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) ((var_7) != (((/* implicit */long long int) (~(var_8))))));
                }
            } 
        } 
    } 
}
