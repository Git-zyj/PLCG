/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243493
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
    var_17 = ((/* implicit */signed char) var_9);
    var_18 = ((/* implicit */short) var_16);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) : (arr_5 [i_1 - 1] [i_1 + 1] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                    arr_9 [i_0] [i_1 - 2] [i_0] = ((/* implicit */_Bool) arr_4 [i_0]);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) arr_1 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    arr_18 [1] [i_4] [i_4] = ((/* implicit */short) arr_14 [i_3 - 2]);
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(494904974))))))) | (arr_13 [i_3]))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3])) * (((/* implicit */int) ((((((/* implicit */int) arr_17 [3] [(signed char)7] [(signed char)7] [(signed char)7])) % (((/* implicit */int) var_4)))) > (((/* implicit */int) var_16)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_3 + 1])) * (((/* implicit */int) var_4))))));
    }
}
