/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217553
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
    for (signed char i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((signed char) var_9))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_17 *= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        arr_11 [(signed char)0] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) var_11);
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_4))));
                        var_19 = min((((((/* implicit */_Bool) ((4016313635U) + (278653671U)))) ? (min((3935390435U), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967269U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))), (min((((((/* implicit */_Bool) var_0)) ? (4016313635U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))), (var_1))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((((signed char) (-(4016313628U)))), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_3))))) != (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_7))))))))));
}
