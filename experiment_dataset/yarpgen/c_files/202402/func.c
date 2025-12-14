/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202402
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
    var_11 += ((/* implicit */unsigned short) var_10);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))) ? (var_9) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_1)))))))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (short)21469))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_1]) * (max((var_7), (arr_3 [i_0] [i_0] [i_1])))))) && (((/* implicit */_Bool) -609492040))));
                var_15 = ((/* implicit */unsigned short) 1027469469);
            }
        } 
    } 
}
