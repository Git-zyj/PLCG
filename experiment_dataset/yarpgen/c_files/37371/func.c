/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37371
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
    var_11 = ((/* implicit */signed char) var_5);
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (signed char)-105)))) : (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)-26)))));
    var_13 = min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))), (var_4));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((signed char)24), ((signed char)16)))), (((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)41))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)511)))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_0))) : (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_3)))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) == (var_4))))));
                }
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_0);
                var_15 = ((/* implicit */unsigned short) var_6);
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_5)), (var_9))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0))))))));
            }
        } 
    } 
}
