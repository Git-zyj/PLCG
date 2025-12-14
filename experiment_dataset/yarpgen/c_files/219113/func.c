/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219113
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
    var_14 = ((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_12)))) : (var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((arr_2 [i_0] [i_2]) > (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [(_Bool)0] [i_1 + 1])) | (((arr_4 [i_0] [i_1] [i_0] [i_2]) ? (((/* implicit */int) arr_3 [8LL] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_0]))))))))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((arr_3 [i_1 + 3] [i_1 + 3]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_1 + 2]))))))))));
                }
            } 
        } 
    } 
}
