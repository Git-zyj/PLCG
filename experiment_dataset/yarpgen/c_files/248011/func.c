/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248011
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
    var_20 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) var_9)), (5294948317020530218LL))))), (((/* implicit */long long int) max((((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))), ((-(((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = arr_0 [i_0];
                var_22 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)24279)) : (((/* implicit */int) (unsigned short)57999))))) / (((((/* implicit */_Bool) 5481114637923883836LL)) ? (-1272325185476582392LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 3]))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_13)))))) | (arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 3]))) / (((arr_3 [i_0] [i_1 - 1] [i_1]) | (arr_3 [i_0] [i_1 - 1] [i_0])))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)30543)))))))));
                arr_7 [i_1] [i_1 + 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_13), (var_9))))));
            }
        } 
    } 
}
