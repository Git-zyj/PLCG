/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50329
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) var_4)))))));
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */short) ((unsigned long long int) var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (max((((/* implicit */long long int) var_17)), (-2782584988691559858LL)))))));
                var_21 += ((/* implicit */short) (+((~(var_2)))));
                var_22 = ((/* implicit */unsigned char) (_Bool)1);
                arr_5 [i_0] [(unsigned short)0] [i_0] = ((/* implicit */unsigned short) var_1);
                var_23 ^= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned short)0])) && (((/* implicit */_Bool) (+(arr_1 [(unsigned short)6]))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)128))))));
            }
        } 
    } 
}
