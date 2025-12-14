/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211425
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
    var_10 = (signed char)0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) min((var_11), (var_1)));
                            var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) (signed char)0))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-60)) + (((/* implicit */int) (signed char)127))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)9))));
                arr_15 [(signed char)5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54))))) ^ (((/* implicit */int) arr_13 [(signed char)7] [(signed char)0] [(signed char)0]))));
                var_15 *= var_4;
            }
        } 
    } 
}
