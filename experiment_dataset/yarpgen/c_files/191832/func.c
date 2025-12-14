/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191832
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
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((int) max((arr_4 [i_0]), (((((/* implicit */_Bool) arr_5 [i_1])) ? (0ULL) : (2588839881194826811ULL)))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15978))) & (arr_6 [(_Bool)1] [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1))))))) >> (((((((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) 15857904192514724805ULL)))) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) - (3966103486U)))));
                }
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (18446744073709551610ULL))))));
                var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [0LL]) : (arr_3 [6])))))))) : (max((((/* implicit */unsigned int) (unsigned short)5)), (18U)))));
            }
        } 
    } 
}
