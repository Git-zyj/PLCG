/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49050
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
    var_17 = ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_8))))) & ((-(((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_15))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = max((min((((/* implicit */int) (unsigned short)24548)), (min((((/* implicit */int) var_3)), (arr_2 [i_0]))))), (((/* implicit */int) (unsigned short)40987)));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((unsigned int) arr_2 [(signed char)3])) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [(unsigned short)5] [i_0])))))))) ? ((~(((((/* implicit */unsigned long long int) arr_2 [i_0])) * (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)24549))))), ((~(arr_3 [i_1]))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24554)) ? (((/* implicit */int) (unsigned short)24549)) : (-1543064447)))) || (((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)24557)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [(unsigned short)3])), (arr_3 [i_1])))) ? (((/* implicit */unsigned int) max((arr_2 [i_0]), (arr_2 [i_0])))) : (min((arr_3 [(_Bool)1]), (((/* implicit */unsigned int) var_8))))))));
            }
        } 
    } 
}
