/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35849
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) min((var_7), (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [(_Bool)1] [(signed char)18])) : (((/* implicit */int) var_4)))))))));
                    var_11 *= ((/* implicit */unsigned short) var_2);
                    arr_8 [(unsigned short)16] [i_1] [(unsigned short)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 621760974U)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)-109))));
                    var_12 = ((/* implicit */_Bool) arr_2 [(unsigned short)3]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-124))))) ? (((/* implicit */int) var_0)) : ((-(2147483647))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_8))))));
    var_14 = ((/* implicit */signed char) var_1);
}
