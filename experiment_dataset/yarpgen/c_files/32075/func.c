/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32075
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
    var_15 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_14))))) == (max((1025902225U), (((/* implicit */unsigned int) (signed char)-5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [18LL] = ((/* implicit */signed char) (-(arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_2])))) ? (max((((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1])), (-1481554447))) : ((-(((/* implicit */int) (signed char)3))))))), (((((/* implicit */_Bool) (short)-20978)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)88))) : (4294967295U)))));
                arr_9 [i_2] = (short)-17609;
                var_18 *= ((/* implicit */signed char) var_6);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)30550))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned short)64084)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_1])) : (((/* implicit */int) (unsigned short)49520))))))) ? (arr_0 [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (-1925487648080325299LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_2]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) : ((~(var_2))))), (((/* implicit */long long int) var_11))));
}
