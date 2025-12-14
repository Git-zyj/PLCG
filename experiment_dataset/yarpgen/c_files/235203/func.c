/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235203
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(_Bool)1])) ? (var_4) : (var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_1 + 1] [i_1 + 1])), (arr_3 [2] [i_1] [(_Bool)1]))))))));
                arr_5 [i_1] [i_1] [i_1 - 1] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))) ? (arr_1 [(signed char)7]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), (arr_2 [i_0] [i_1])))))))));
                arr_6 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) (short)7025)), (((((/* implicit */_Bool) -3076643258044438370LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-32746))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [3LL] [i_1] [(short)2]), (arr_3 [i_0] [i_1 - 1] [i_1]))))) : (((((/* implicit */long long int) (+(((/* implicit */int) (short)32761))))) / ((~(arr_0 [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((3076643258044438369LL), (var_10))) / (((/* implicit */long long int) (~(((/* implicit */int) (short)-32752)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) (short)-16698))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))), (var_13)))) ? (((var_13) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-32748)))))))) : (((((/* implicit */_Bool) -9198757986390421386LL)) ? (((((/* implicit */_Bool) 544985376604455747LL)) ? (12948163222794482120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (-2147483647 - 1)))))))))))));
    var_19 = ((/* implicit */short) ((var_11) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) -544985376604455720LL)) : (12948163222794482108ULL))), (((/* implicit */unsigned long long int) min((var_9), (var_2)))))))));
}
