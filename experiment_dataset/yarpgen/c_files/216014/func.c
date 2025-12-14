/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216014
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
    var_14 = ((/* implicit */signed char) ((((((((/* implicit */int) var_7)) * (((/* implicit */int) var_7)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))))) == ((+(((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_13)) < ((~(((/* implicit */int) var_5))))))) >> (((((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_2))))) << ((((-(((/* implicit */int) var_0)))) - (48))))) - (23)))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) var_7))))) / ((-(((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_9)))))))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_8)) * (((/* implicit */int) var_7))))))))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_11))))))))));
                arr_7 [i_0] = var_9;
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (signed char i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_18 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))))));
                    arr_17 [i_2] [i_4] = ((/* implicit */signed char) (+((((+(((/* implicit */int) (signed char)-126)))) - ((-(((/* implicit */int) var_12))))))));
                }
            } 
        } 
    } 
}
