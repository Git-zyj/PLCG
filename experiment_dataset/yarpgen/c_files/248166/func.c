/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248166
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)169)), (0ULL)));
    var_20 = ((/* implicit */signed char) var_1);
    var_21 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned short) var_10))));
    var_22 = ((/* implicit */unsigned short) (-(((var_11) ^ (((/* implicit */int) var_14))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 = (((((_Bool)1) ? (arr_5 [i_1]) : (arr_5 [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
                    arr_7 [i_0] [(unsigned short)4] [i_2] = ((/* implicit */unsigned char) min(((+(-4386002371255602542LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [(unsigned char)2] [19U])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_11))) : (((/* implicit */int) var_16)))))));
                }
            } 
        } 
    } 
}
