/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21603
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) 17179836416ULL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_19 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-50)))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) min((var_3), (((/* implicit */unsigned long long int) var_0)))))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_0])), (491393085U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) & (arr_4 [i_0] [i_0])))))));
                }
                arr_11 [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (short)-13288))))), (arr_4 [i_0] [i_0]));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (-(((var_17) ? (((/* implicit */int) (unsigned short)54449)) : (((/* implicit */int) (short)-26364))))))) : (var_3)));
}
