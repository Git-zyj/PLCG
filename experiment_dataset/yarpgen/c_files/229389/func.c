/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229389
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
    var_11 = ((var_2) != (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_0)))) ? (max((((/* implicit */int) var_1)), (var_2))) : (((/* implicit */int) var_1)))));
    var_12 = ((int) var_1);
    var_13 = ((/* implicit */short) ((max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_5)) : (((var_4) + (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57369))))) ? (((/* implicit */int) ((short) arr_5 [i_0]))) : (((((/* implicit */int) (unsigned char)30)) | (((/* implicit */int) (signed char)118))))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((/* implicit */int) arr_3 [13LL] [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_6);
}
