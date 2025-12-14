/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219894
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
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min((var_7), ((signed char)18)))) + (((/* implicit */int) ((signed char) arr_3 [i_0 - 1] [(signed char)5])))));
                var_16 = var_12;
                var_17 = min(((signed char)61), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-21)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_18 = ((signed char) (signed char)28);
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1]))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (signed char)18))))));
                }
                for (signed char i_3 = 4; i_3 < 22; i_3 += 4) 
                {
                    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                arr_22 [(signed char)19] [i_4] [i_4] [i_1] [i_4] = ((signed char) ((signed char) (!(((/* implicit */_Bool) (signed char)-35)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(signed char)7])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    var_21 = var_10;
                    arr_30 [i_6] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) > (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
}
