/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224056
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
    var_10 -= ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-(min((arr_7 [i_0] [(short)14] [(short)14]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)16] [i_1]))) <= (arr_6 [(signed char)14])))))))))));
                arr_8 [i_0] [i_1] [i_1] = (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (1796142437));
            }
        } 
    } 
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((var_2) << (((var_7) - (372990521))))) : (((/* implicit */long long int) 1796142437)))) <= (((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)0)) - (-1796142450))), (((/* implicit */int) var_1))))))))));
}
