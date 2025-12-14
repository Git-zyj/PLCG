/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45565
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
    var_20 = ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */short) min((max((max((arr_5 [i_0] [i_1 - 1]), (((/* implicit */long long int) arr_1 [i_0] [i_1])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19791))) == (65520U)))))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_12))) >> ((((~(var_9))) - (1066372531U))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((((-((-(var_17))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), ((unsigned short)40453)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) % (var_9))) : (min((3053632234U), (arr_3 [(unsigned char)9] [i_1 - 1]))))) - (7U)))));
                    var_21 *= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1]);
                }
            } 
        } 
    } 
}
