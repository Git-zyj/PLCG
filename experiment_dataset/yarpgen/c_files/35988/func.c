/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35988
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((int) 9897217493486313992ULL))) : (var_2)))) ? (((/* implicit */long long int) var_3)) : (var_10)));
    var_12 = ((/* implicit */int) ((2416190420516047162ULL) - (((/* implicit */unsigned long long int) -17))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (12ULL)))))) ? (((/* implicit */int) var_8)) : (586920660)));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) ^ (arr_4 [i_2])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_7 [i_1] [i_2]))))) : (arr_5 [i_1] [(_Bool)1]))))))));
                    arr_10 [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_2 [i_1 - 3] [i_1 + 2])), (var_2))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-3)), (arr_1 [i_1 + 1] [i_1 + 3]))))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */short) min((((long long int) (short)-6)), (((/* implicit */long long int) 3970080312U))));
}
