/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239710
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
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-119))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        var_17 = arr_3 [i_0];
        arr_4 [i_0 + 1] [i_0] = (signed char)124;
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [(signed char)4]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_1])))))));
        arr_9 [(signed char)4] &= (signed char)107;
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_19 = (signed char)124;
                        var_20 &= var_9;
                    }
                } 
            } 
            arr_17 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)85)) ? (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_3 [i_1]))))));
        }
        arr_18 [i_1] [i_1] = arr_8 [i_1];
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */int) var_13)) : ((-((-(((/* implicit */int) (signed char)-107))))))));
}
