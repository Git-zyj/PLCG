/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50859
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_0 + 1])), (1042890023U)))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_5 [i_0 - 2] [i_0 - 4]))))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_0 - 3])))))));
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_1 - 2] [i_0 + 1])) + (((/* implicit */int) min(((signed char)-85), ((signed char)4)))))))));
            }
        } 
    } 
    var_11 ^= ((/* implicit */signed char) var_9);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (2146435072U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2148532210U)) ? (((/* implicit */int) (unsigned short)37858)) : (((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned int) var_8)), (var_2))))) : (var_2)));
    var_13 = ((/* implicit */signed char) 5375177111777444242ULL);
}
