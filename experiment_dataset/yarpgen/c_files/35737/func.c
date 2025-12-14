/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35737
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) 2147483647)) % (7419747439551431306LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((int) 7796899612271373535LL))))));
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [(_Bool)1] [i_1] [i_2] = ((/* implicit */signed char) ((2147483647) == (((/* implicit */int) var_4))));
                    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_1 - 1] [i_2]))) - (arr_5 [i_2 - 1] [i_1] [i_1 + 1] [i_1]))))));
                    arr_8 [i_0] [i_1] [(unsigned char)6] [i_2] = ((/* implicit */int) ((((((/* implicit */long long int) var_7)) + (var_8))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1 + 1] [i_1 + 1]))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_6))))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((long long int) (signed char)6)))))));
                    var_15 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-12)) + (2147483647))) >> ((((+(((unsigned int) var_4)))) - (37398U)))));
                }
            } 
        } 
    } 
}
