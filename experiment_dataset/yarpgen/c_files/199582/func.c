/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199582
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
    var_19 = ((/* implicit */long long int) min(((signed char)-1), ((signed char)-4)));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? (((((/* implicit */_Bool) 200825098U)) ? (4094142198U) : (200825098U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned char) ((_Bool) var_4))))))) % (var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) min((min(((-(arr_6 [(unsigned short)7] [(unsigned short)7] [i_0]))), (((/* implicit */unsigned int) ((arr_2 [i_0]) || (((/* implicit */_Bool) (signed char)127))))))), (min((4094142197U), (((/* implicit */unsigned int) (signed char)-4))))));
                arr_7 [i_0] = ((/* implicit */signed char) 200825098U);
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) max((((/* implicit */unsigned char) min(((signed char)2), (((/* implicit */signed char) (_Bool)1))))), (var_5))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) (signed char)-23))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (1548897677U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7936))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) var_0)) - (51264))))))) - (207)))));
}
