/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4607
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(2299172914U))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_1] |= ((/* implicit */short) (+(2299172908U)));
                    arr_8 [i_0] [(short)14] [i_0] = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 1995794383U))));
        arr_9 [i_0] [(unsigned short)17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))));
        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (max((max((var_11), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_0]))))))));
    }
    var_22 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) 2860616677U)) ? (5658765575054703417ULL) : (((/* implicit */unsigned long long int) 84813563)))))), (((/* implicit */unsigned long long int) var_16))));
}
