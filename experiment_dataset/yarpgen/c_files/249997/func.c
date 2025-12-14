/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249997
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_9)));
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) < ((~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) | (var_6)))))));
                var_11 += ((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (7184535567749564901ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) == (((/* implicit */int) (signed char)7))))) : (((/* implicit */int) arr_5 [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
    var_13 = min((var_6), (((/* implicit */long long int) ((((int) 159657398U)) >= (((/* implicit */int) (signed char)-70))))));
}
