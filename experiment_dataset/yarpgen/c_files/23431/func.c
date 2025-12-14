/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23431
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
    var_18 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) (unsigned short)1);
            var_19 -= ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0]);
            arr_10 [i_0] = ((/* implicit */unsigned long long int) var_9);
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_4 [i_0] [i_2])))))));
        }
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_21 |= ((/* implicit */long long int) var_14);
                    arr_16 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_15)) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4006)))))));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_2 [i_0]))))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_20 [i_5] = ((((/* implicit */int) ((arr_2 [i_5]) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_5])))))) == (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_0 [i_5] [i_5])) + (11773))))));
        arr_21 [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) arr_14 [i_5] [i_5] [4U])) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_5]))))));
    }
}
