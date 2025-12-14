/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202204
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
    var_20 = (~(((((/* implicit */_Bool) min((var_13), ((signed char)-16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))) : (min((((/* implicit */unsigned long long int) (signed char)-120)), (var_9))))));
    var_21 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_6)))))))) * (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13482156819360507476ULL))) * (((((/* implicit */_Bool) 7126714014057028571ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (15ULL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((/* implicit */int) arr_0 [18ULL] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1])) : (((/* implicit */int) var_11))))));
                    var_24 = arr_7 [i_0];
                    arr_8 [i_0] [i_0] [(signed char)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_0])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_3 [i_1 + 1] [i_0]))));
                    arr_9 [i_0] [i_0] [(signed char)2] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                }
            } 
        } 
        arr_10 [i_0] [(signed char)1] = ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_5 [i_0]) : (arr_7 [i_0]));
        arr_11 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
    }
    var_25 = ((/* implicit */unsigned long long int) min((((signed char) (+(((/* implicit */int) var_0))))), ((signed char)-127)));
}
