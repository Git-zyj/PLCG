/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248557
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
    var_12 = (-(min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_1)))), (var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [(short)11] [i_1 - 3] [i_1] = ((/* implicit */short) (~(min((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) (short)18515)))), (min((((/* implicit */int) var_2)), (arr_0 [(unsigned short)10])))))));
                var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_0), (((/* implicit */signed char) (_Bool)0)))), (((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [12ULL] [(unsigned char)6] [i_0])) ? (arr_4 [i_1 - 2] [i_0] [i_0]) : (((/* implicit */int) var_3))))) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_1 + 1])))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_11))));
            }
        } 
    } 
}
