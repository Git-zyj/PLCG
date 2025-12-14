/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232201
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 = ((signed char) ((((/* implicit */int) (signed char)-121)) * (((/* implicit */int) (signed char)64))));
                var_12 = ((signed char) ((((/* implicit */int) (signed char)104)) ^ (((/* implicit */int) (signed char)70))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                arr_10 [i_2] [i_2] = (signed char)-121;
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (signed char i_5 = 4; i_5 < 21; i_5 += 4) 
                    {
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] = (signed char)-98;
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)64))) && (((/* implicit */_Bool) ((signed char) (signed char)29)))));
                                var_14 = ((signed char) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (signed char)-8)) + (22))) - (14)))));
                                var_15 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-82)) && (((/* implicit */_Bool) (signed char)98))))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)70)) < (((/* implicit */int) (signed char)-83)))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((signed char) (signed char)0)))) ^ (((/* implicit */int) (signed char)113))));
                var_16 = ((signed char) ((signed char) (signed char)127));
                var_17 = ((/* implicit */signed char) max((var_17), (((signed char) ((signed char) (signed char)0)))));
            }
        } 
    } 
    var_18 *= ((signed char) var_3);
}
