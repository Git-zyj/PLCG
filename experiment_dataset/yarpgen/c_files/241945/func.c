/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241945
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    var_14 = ((/* implicit */unsigned long long int) ((int) 4294967289U));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [(unsigned char)14] = (+(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [i_2] [(unsigned char)0] [i_0])) : (((/* implicit */int) arr_2 [(unsigned short)0] [i_1] [i_0])))));
                    arr_7 [i_1 + 1] [i_0] = ((/* implicit */short) var_0);
                    arr_8 [i_1 + 1] [i_1] [i_2] [i_1] = ((max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 2] [i_1 - 2])), ((+(var_3))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (arr_4 [i_1 + 2])))));
                }
            } 
        } 
    } 
}
