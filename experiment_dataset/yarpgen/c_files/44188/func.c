/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44188
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
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((arr_2 [i_1]), (((/* implicit */unsigned short) ((max((arr_5 [i_0] [4ULL]), (arr_5 [(_Bool)1] [(_Bool)1]))) <= (max((((/* implicit */long long int) var_10)), (arr_5 [i_0] [4ULL]))))))));
                var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (arr_1 [i_0])));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_0 [i_0]))));
                var_17 = ((/* implicit */int) var_4);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((unsigned int) (~(var_2))));
}
