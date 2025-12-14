/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4917
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -810737348)))))))) ^ (((((/* implicit */_Bool) 0)) ? (2655997061U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (arr_4 [(_Bool)1] [i_1] [i_1])))) | (arr_4 [i_2] [i_2 - 1] [i_2 - 1])));
                var_22 ^= ((/* implicit */unsigned int) (~(arr_4 [i_1] [i_1 - 2] [i_1 - 1])));
            }
            var_23 = ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1] [(unsigned char)4]))));
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1638970236U))));
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 4; i_3 < 10; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_25 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (arr_0 [i_0] [i_0]))))));
                    var_26 = ((arr_12 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 2] [i_3 + 2]))))));
                }
            } 
        } 
        var_27 = arr_0 [i_0] [i_0];
    }
    var_28 = ((/* implicit */unsigned char) var_10);
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_11))));
}
