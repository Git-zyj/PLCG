/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42390
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), ((((((~(max((-164157546), (((/* implicit */int) (_Bool)1)))))) + (2147483647))) >> (((((((/* implicit */unsigned int) arr_0 [i_1 - 1])) - (var_15))) - (2983673292U)))))));
                var_20 = ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */int) ((unsigned char) 3686910433U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2]))));
            var_22 = ((/* implicit */unsigned int) arr_1 [i_2 - 1]);
            var_23 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1]))) % (8776174U)));
            arr_10 [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(608056858U)))) || (((/* implicit */_Bool) arr_8 [i_2] [i_2 + 2]))));
            var_24 = ((/* implicit */unsigned int) (unsigned char)27);
        }
        var_25 = 164157539;
    }
}
