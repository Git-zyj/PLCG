/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46894
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
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)120))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_1]) << (((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) - (11311)))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)105)) >= (((/* implicit */int) arr_2 [(_Bool)0] [(_Bool)0] [i_1]))))))))) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) <= (((/* implicit */int) (signed char)121))))))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) var_11)) || (((max((((/* implicit */unsigned long long int) var_7)), (var_8))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_7))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-122)) >= (((/* implicit */int) (signed char)121))))) - (((/* implicit */int) var_7))))))))));
    var_18 = ((/* implicit */short) var_8);
}
