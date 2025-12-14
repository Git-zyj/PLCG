/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241528
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 |= ((/* implicit */signed char) (+(max((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0])) >= (((/* implicit */int) arr_8 [i_2] [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)56))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [i_1])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)8)), ((unsigned char)170)))) ? (((/* implicit */int) (unsigned char)66)) : ((~(((/* implicit */int) (signed char)110))))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)75))));
}
