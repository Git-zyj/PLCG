/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248775
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
    var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 17592186044415ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)94))));
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 6473347194550520386ULL)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2]))))));
                arr_6 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6266503580900305216ULL)) ? (-627015507791284377LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35864)))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (534319417644122441LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_3)))))))));
}
