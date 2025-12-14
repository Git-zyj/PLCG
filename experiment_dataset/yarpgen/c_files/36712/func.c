/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36712
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
    var_19 = ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_17))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_15)))) : ((~(((/* implicit */int) var_16)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -807255901)) ? (max((var_17), (((/* implicit */unsigned long long int) max((var_3), (var_2)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 6U)) : (var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max(((_Bool)1), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_16)))))))));
                var_22 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (((((/* implicit */unsigned long long int) -9LL)) | (arr_5 [i_1]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((3330406065U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 2]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((var_24), (var_6)));
}
