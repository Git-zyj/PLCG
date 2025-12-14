/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213464
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -523423873)) ? (arr_7 [i_2] [i_1] [(signed char)13]) : (arr_7 [i_0] [i_1] [i_2])));
                    var_19 = ((/* implicit */short) arr_4 [i_2] [i_1] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = arr_3 [i_1];
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) ((arr_6 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [(unsigned char)15]);
    }
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
        {
            {
                var_21 |= ((/* implicit */short) ((((/* implicit */int) arr_1 [(unsigned short)5])) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)47)) <= (((/* implicit */int) max((var_16), (arr_14 [(_Bool)1])))))))));
                arr_18 [6LL] [i_3] [i_4] = ((arr_6 [i_3] [i_3 - 2] [i_3 - 1]) ? (((/* implicit */int) ((((/* implicit */_Bool) 109619713)) && ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
            }
        } 
    } 
}
