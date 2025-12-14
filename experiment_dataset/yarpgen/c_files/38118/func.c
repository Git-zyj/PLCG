/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38118
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_4)))) ? (max((((/* implicit */unsigned long long int) 3836177358U)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (var_12) : (var_7))))));
    var_16 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) min((max((min((var_3), (((/* implicit */long long int) arr_6 [i_0] [i_1])))), (((/* implicit */long long int) max((arr_1 [i_2]), (arr_0 [i_2])))))), (max((((long long int) arr_6 [i_0] [i_1])), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
                    var_18 *= min((((/* implicit */unsigned long long int) ((arr_6 [i_0] [0LL]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)8])))))), (((var_0) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) var_7)), (arr_5 [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_4)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_14)), ((unsigned char)214)))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))))))));
}
