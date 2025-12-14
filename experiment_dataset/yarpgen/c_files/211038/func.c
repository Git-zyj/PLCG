/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211038
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
    var_14 &= ((/* implicit */signed char) var_11);
    var_15 &= var_0;
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_6 [i_0 + 2]))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))), (((unsigned int) arr_1 [2U])))))))));
                    var_18 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9345539857134306734ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (844424930131968LL)))) ? (max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_1])))) : (((/* implicit */unsigned long long int) arr_1 [(short)8])))) > (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_2] [i_1 - 1] [i_0 + 1]))))), (arr_5 [i_0 + 3] [i_0 - 2])))));
                    arr_7 [4U] &= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) 1200334823)) | (arr_1 [4U])))));
                }
            } 
        } 
    } 
}
