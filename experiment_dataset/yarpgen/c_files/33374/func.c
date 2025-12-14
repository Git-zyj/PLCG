/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33374
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_10))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                    var_14 *= var_11;
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))))));
                    var_16 *= ((/* implicit */signed char) (((_Bool)1) ? (1835008U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)979)))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_17 = ((/* implicit */short) (-(var_10)));
                var_18 = ((/* implicit */short) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10)));
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                arr_14 [i_0] [13LL] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
                arr_18 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
            }
            arr_19 [i_0] [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))));
        }
    }
}
