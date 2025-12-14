/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35562
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
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_3)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */signed char) max(((-((-(((/* implicit */int) var_10)))))), (((/* implicit */int) var_2))));
                var_13 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))))))));
                var_14 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_1]);
                var_15 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_6 [i_1] [i_0])))) * (((((/* implicit */int) (unsigned char)12)) * (((/* implicit */int) (signed char)15))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_2)) % (((/* implicit */int) (signed char)-15))))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (unsigned char)118)))))))));
    var_17 |= ((/* implicit */unsigned char) min(((+(((/* implicit */int) (signed char)(-127 - 1))))), ((~(((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned char)118)))))))));
}
