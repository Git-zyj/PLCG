/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42620
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */_Bool) arr_0 [i_0 - 1]);
        var_21 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) 449707442)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) : (29U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            {
                arr_8 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) -449707431);
                arr_9 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) 449707425);
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
}
