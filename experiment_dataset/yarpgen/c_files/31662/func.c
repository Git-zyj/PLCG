/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31662
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)30516))) & (var_0))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1)))))))), (var_10))))));
    var_13 = ((/* implicit */_Bool) (unsigned short)34651);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        var_14 -= var_6;
                        var_15 = ((/* implicit */short) var_7);
                        arr_13 [i_3] [i_2] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [(short)11]))) * (((var_2) >> (((/* implicit */int) var_9))))));
                    }
                    var_16 = ((((/* implicit */int) (_Bool)1)) & (2147483647));
                }
            } 
        } 
    } 
}
