/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31541
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
    var_14 = ((/* implicit */short) ((int) var_9));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_9);
                    var_16 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) min((((/* implicit */long long int) arr_1 [10])), (arr_6 [i_0] [i_0] [i_0] [i_0]))))), ((+(arr_2 [i_0] [i_0])))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 - 1] [i_0])), (var_6))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))))), (arr_6 [i_0] [i_0] [i_1] [i_2 + 1]))))));
                    var_18 += ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_3 [i_2])))), (((((/* implicit */_Bool) arr_3 [(unsigned char)1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) max((arr_5 [10] [10] [i_0]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) min((arr_3 [i_0]), (var_3))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_11);
}
